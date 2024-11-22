# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct {
	char key[32];
	int value;
} Map;

Map *generate_map(char key[], int value){
	Map *new_map = (Map *) malloc (sizeof(Map));
	strcpy(new_map->key,key);
	new_map->value = value;
	return new_map;
}


int main(){
	Map *HashMap[5]; 
	HashMap[0] = generate_map("One", 1); 
	HashMap[1] = generate_map("Two", 2); 
	HashMap[2] = generate_map("Three", 3); 
	HashMap[3] = generate_map("Four", 4); 
	HashMap[4] = generate_map("Five", 5); 

	for(int i=0; i<5; i++){
		printf("key: %s value: %d \n", HashMap[i]->key, HashMap[i]->value);
	}

	// free memory here
	for(int i=0; i<5; i++){
		free(HashMap[i]);
	}

}