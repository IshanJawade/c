# include <stdio.h>

int main(){

	int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
	int length = sizeof(ages) / sizeof(ages[0]);
	int lowest=ages[0];
	for(int a=0; a<length; a++){
		if(lowest > ages[a]){
			lowest = ages[a];
		}
		printf("lowest= %d age= %d\n", lowest, ages[a]);
	}
	printf("Lowest age is %d\n", lowest);
	return 0;
}