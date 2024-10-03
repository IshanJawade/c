# include <stdio.h>

struct car{
	char Brand[20];
	char model[50];
	int year;
};

int main(){
	struct car c1 = {"Nissan", "GT-R R34", 1999};
	struct car c2 = {"Toyota", "Supra Mk4", 1997};
	struct car c3 = {"BMW", "E43 M3 GTR", 2001};
	struct car c4 = {"Mitsubashi", "Lancer Evolution - VII", 2001};

	printf("Cars wishlist: \n");
	printf("1. %s %s %d \n", c1.Brand, c1.model, c1.year);
	printf("2. %s %s %d \n", c2.Brand, c2.model, c2.year);
	printf("3. %s %s %d \n", c3.Brand, c3.model, c3.year);
	printf("4. %s %s %d \n", c4.Brand, c4.model, c4.year);

	return 0;
}