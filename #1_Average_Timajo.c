#include <stdio.h>
#include <stdlib.h>

//Timajo, Kurt Vincent
// 11 21 8 83 65
// 42 26 70 25 18
// 15 15 43 10 36
// 31 41 23 72 35
// 63 33 29 28 11

void main(){
	int in_row, in_col, row, col,i,j;
	
	printf("Input the number of rows and cols (separate by space): ");
	scanf("%d %d", &in_row, &in_col);

	row=in_row;
	col=in_col;
	int nums[row][col];
	
	//input matrix values
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("Input nums[%d][%d]: ",i,j);
			scanf("%d",&nums[i][j]);
		}
	}
	
	//print matrix
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ",nums[i][j]);
		}
		printf("\n");
	}
	
	//output snail matrix
	//first row
	for(i=0; i<col; i++){
		printf("%d, ", nums[0][i]);
	}
	
	//last col downward
	for(i=1; i<row; i++){
		printf("%d, ", nums[i][col-1]);
	}
	
	//last row backward
	for(i=col-2; i>=0; i--){
		printf("%d, ", nums[row-1][i]);
	}
	
	//first col upward
	for(i=row-2; i>0; i--){
		printf("%d, ", nums[i][0]);
	}
	
	//2nd row to right
	for(i=1; i<col-1; i++){
		printf("%d, ", nums[1][i]);
	}
	
	//3rd col downward
	for(i=2; i<row-1; i++){
		printf("%d, ", nums[i][col-2]);
	}
	
	//4th row backward
	for(i=col-3; i>=1; i--){
		printf("%d, ", nums[row-2][i]);
	}
	
	//3rd row to right
	for(i=1; i<col-2; i++){
		printf("%d, ", nums[2][i]);
	}
}






