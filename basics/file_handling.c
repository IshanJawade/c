# include <stdio.h>

int main(){
	FILE *fptrA, *fptrR;

	fptrA = fopen("testFile", "a");
	fprintf(fptrA,"Hello World\n");
	fclose(fptrA);   
	// closing the file will make sure it will save the contents

	char file_content[100];

	// This only reads first line of the file
	fptrR = fopen("/Users/ishan/Desktop/hello.java", "r");
	fgets(file_content, 100, fptrR);
	printf("%s", file_content);

	// while there is a content in a file keep reading
	if (fptrR == NULL){
		printf("error: not able to open the file");
	}
	else{
		while(fgets(file_content, 100, fptrR)){
			printf("%s", file_content);
		}
		fclose(fptrR);
	}

	return 0;
}