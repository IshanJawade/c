/*
Server Code
cli args $ <filename> <portno>
args[0]	filename
args[1] portno
*/

#include <stdio.h>      // printf, fprintf, perror
#include <stdlib.h>     // exit, atoi
#include <string.h>     // strlen, (but note: bzero isn’t here on Linux)
#include <unistd.h>     // read, write, close
#include <sys/types.h>  // data types used by syscalls
#include <sys/socket.h> // socket(), bind(), listen(), accept()
#include <netinet/in.h> // sockaddr_in, htons(), INADDR_ANY

// error fucntion to catch error in msg and terminate the program
void error(const char *msg){	// nothing but passing the array
	/*
	perror() is a internal syscall error code translator.
	it puts <your message> : <syscall failure> on the console
	*/
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
	char buffer[256];

	struct sockaddr_in serv_addr, cli_addr; 	// contains internet address
	/*
	from netinet/in.h file
	struct sockaddr_in {
		sa_family_t    sin_family;   // address family (AF_INET for IPv4)
		in_port_t      sin_port;     // port number (in network byte order)
		struct in_addr sin_addr;     // IP address (in network byte order)
		unsigned char  sin_zero[8];  // padding, unused
	};
	*/
	// typedef unsigned int socklen_t; in sys/socket.h file
	socklen_t clilen;		

	// socket Fn()	 IPv4	,	TCP		, TCP
	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	// return 0 in success, return -1 in failure
	if(sockfd < 0){
		error("Error opening Socket !\n");
	}
	/* 
		puts zero in every field of the structure
		Modern implementation: 
			memset(&serv_addr, 0, sizeof(serv_addr));
	*/ 
	bzero((char *) &serv_addr, sizeof(serv_addr));

	portno = atoi(argv[1]); // from commandline argument

	// assigning values to the struct above
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY; //“listen on all available interfaces.”
	serv_addr.sin_port = htons(portno);		// HostToNetworkShort() 16 bit address conversion
	
	/* 
		typecasting becasue sockaddr{} and sockaddr_in are different structures
		sockaddr_in is purely for IPv4

		struct sockaddr {
			__uint8_t       sa_len;         // total length 
			sa_family_t     sa_family;      // [XSI] address family 
			char            sa_data[14];    // [XSI] addr value 
		};
	*/
	if(bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0){
		error("Binding failed !");
	}

	
	listen(sockfd, 5); 
	clilen = sizeof(cli_addr);

	newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
	if(newsockfd < 0){
		error("Error on accepting connection !");
	}

	// continue loop to receive and send messages
	while (1){
		bzero(buffer, 256);

		// reading the buffer from client
		n = read(newsockfd, buffer, 256);
		if(n<0){
			error("Error on reading !");
		}
		printf("Client: %s\n", buffer);

		bzero(buffer, 256);
		
		// writting the buffer to client
		fgets(buffer, 256, stdin);
		n = write(newsockfd, buffer, strlen(buffer));
		if(n<0){
			error("Error on writting !\n");
		}
		// when server sends "Bye" loop breaks
		int i = strncmp("Bye", buffer, 3);
		if(i == 0) {
			break;
		}
	}
	close(newsockfd);
	close(sockfd);
	return 0;
}