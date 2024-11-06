# include <stdio.h>
# include <string.h>

typedef struct {
	char key[32];
	int value;
} Map;


int main(){
	Map pair[2];
	strcpy(pair[0].key,"one");
	pair[0].value = 1;
	strcpy(pair[1].key, "two");
	pair[1].value = 2;

	for(int i=0; i<2; i++){
		printf("key: %s value: %d \n", pair[i].key, pair[i].value);
	}

}