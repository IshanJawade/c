#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

// error fucntion to catch error in msg and terminate the program
void error(const char *msg){
	perror(msg);
	exit(1);
}

// 2 arguments expected. 1) file name 2) port number
int main(int argc, char *argv[]){	

	// check commandline arguments
	if(argc != 2){
		fprintf(stderr, "Invalid arguments. Program ternimate !\n Usage: ./<filename> <port_number>\n");
		exit(1);
	}

	int sockfd, newsockfd, portno, n;
	char buffer[255];

	struct sockaddr_in serv_addr, cli_addr; 	// contains internet address
	socklen_t clilen;		// 32 bit datatype in in.h file

	// socket Fn()	 IPv4	,	TCP		, TCP
	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	// return 0 in success, return -1 in failure
	if(sockfd < 0){
		error("Error opening Socket !\n");
	}
	// clears everything in serv_addr memory location
	bzero((char *) &serv_addr, sizeof(serv_addr));

	portno = atoi(argv[1]); // from commandline argument

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(portno);
	//				 type-casting the memory at 
	if(bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0){
		error("Binding failed !");
		// exit(1);
	}

	listen(sockfd, 5);
	clilen = sizeof(cli_addr);

	newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
	if(newsockfd < 0){
		error("Error on accepting connection !");
	}

	// continue loop to receive and send messages
	while (1){
		bzero(buffer, 255);

		// reading the buffer from client
		n = read(newsockfd, buffer, 255);
		if(n<0){
			error("Error on reading !");
		}
		printf("Client: %s\n", buffer);

		bzero(buffer, 255);
		
		// writting the buffer to client
		fgets(buffer, 255, stdin);
		n = write(newsockfd, buffer, strlen(buffer));
		if(n<0){
			error("Error on writting !\n");
		}
		// when revieces "Bye" from clien loop breaks
		int i = strcmp("Bye", buffer);
		if(i==0) {
			break;
		}
	}
	close(newsockfd);
	close(sockfd);
	return 0;
}