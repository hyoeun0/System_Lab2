#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	int row;
	int column;
	
	int **arr_1st;
	
	int **arr_2nd;
	
	int **arr_result;
	
	printf("x : ");
	scanf("%d", &column);
	
	printf("y : ");
	scanf("%d", &row);
	
	arr_1st = (int**)malloc(sizeof(int*) *row);
	arr_2nd = (int**)malloc(sizeof(int*) *row);
	arr_result = (int**)malloc(sizeof(int*) *row);
	
	for(i=0; i<row; i++)
	{
		arr_1st[i] = (int*)malloc(sizeof(int*) *column);
		arr_2nd[i] = (int*)malloc(sizeof(int*) *column);
		arr_result[i] = (int*)malloc(sizeof(int*) *column);
	}
	
	printf("\n[ First Matrix Input ]\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &arr_1st[i][j]);
		}
	}
	
	printf("\n[ Second Matrix Input ]\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &arr_2nd[i][j]);
		}
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			arr_result[i][j] = arr_1st[i][j] + arr_2nd[i][j];
		}
	}
	
	printf("\n\n------------------------------");
	
	printf("\n[ First matrix ]\n\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d  ", arr_1st[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--------------------------------");
	
	printf("\n[ Second matrix ]\n\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d  ", arr_2nd[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--------------------------------");
	
	printf("\n[ Result matrix ]\n\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d  ", arr_result[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<row; i++)
	{
		free(arr_1st[i]);
		free(arr_2nd[i]);
		free(arr_result[i]);
	}
	free(arr_1st);
	free(arr_2nd);
	free(arr_result);
	
	return 0;
}
