# include <stdio.h>

int main(){
	/*
			0	1	2		< 3 rows
		_______________
	0	|	0	1	2
	1	|	3	4	5		this array has 4 rows and 3 columns
	2	|	6	7	8		but index of row 1 and column 1 is 0
	3	|	9	10	11

	^
	4 columns

	*/

	// While counting rows and columns start with 1 not with 0
	// But while accessing elements count with 0 not 1

	int matrix[4][3] ={ {0,1,2}, {3,4,5}, {6,7,8}, {9,10,11} };
	//         r  c		=> number 

	printf("%d\n", matrix[1][2]); // 5
	// 					  r  c   => Index	

	// counting rows and columns in a matrix
	int rows = sizeof(matrix) / sizeof(matrix[0]);
	int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);

	printf("Rows: %d \n", rows);
	printf("Columns: %d \n", columns);


	// Iterating through the matrix
	for(int a=0; a<4; a++){
		for(int b=0; b<3 ; b++){
			printf("\t\t%d", matrix[a][b]);
		}
		printf("\n");
	}
}