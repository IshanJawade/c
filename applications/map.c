# include <stdio.h>
# include <stdlib.h>

typedef struct {
	int key;
	int value;
} Map;

int main(){

	int size=5;

	Map MapList [size];

	if(MapList == NULL){
		printf("Memory allocation failed!");
		return 1;
	}
	
	MapList[0] = (Map){1,100};
	MapList[1] = (Map){2,200};
	MapList[2] = (Map){3,300};
	MapList[3] = (Map){4,400};
	MapList[4] = (Map){5,500}; 	

	int MapListLen = sizeof(MapList) / sizeof(MapList[0]);
	printf("Count of maps in the MapList : %d \n", MapListLen);

	for(int a=0; a < MapListLen; a++ ){
		printf("Key: %d  Value: %d\n", MapList[a].key, MapList[a].value);
	}

	return 0;
}