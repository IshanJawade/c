# include <stdio.h>
# include <string.h>

int main(){

	char str1[] = "TheQuickBrownFox";
	char str2[] = "CiscoSwitchesAreBest";
	
	// comparing 2 strings
	int comp = strcmp(str1, str2);
	if(comp == 0)
		printf("Are same\n");
	else printf("Not same\n");

	// copy content from a string
	char str3[10];
	if(strlen(str2) >= sizeof(str3)){
		fprintf(stderr, "Error: Not enough space in destination\n");
	} else {
		strcpy(str3, str2);
	}
	printf("%s\n", str3);

	// 

	
}