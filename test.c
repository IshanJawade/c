# include <stdio.h>
# include <stdlib.h>

int main() {
	printf("Current working directory: \n");
	char path[] = system("pwd");
	printf("%s \n", path);
    return 0;
}
