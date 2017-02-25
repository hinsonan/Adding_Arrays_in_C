#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[])
{

	int size = atoi(argv[1]);

	// printf("Enter the size of the array: ");

	//scanf("%d", &size);

	// initialize the arrays to be used
	int *arrayOne = malloc(sizeof(int) * size);
	int *arrayTwo = malloc(sizeof(int) * size);
	int *arraySum = malloc(sizeof(int) * size);
	
	for (int i = 0; i < size; i++)
	{
		arrayOne[i] = rand() % 100;
		arrayTwo[i] = rand() % 100;
		
	}

	for (int i = 0; i < size; i++)
	{
		arraySum[i] = arrayOne[i] + arrayTwo[i];

	}

	for (int i = 0; i < size; i++)
	{
		printf("%d : %d + %d = %d\n", i, arrayOne[i], arrayTwo[i], arraySum[i]);


	}



	

	// stops the program from closing 
	
	getchar();

	free(arrayOne);
	free(arrayTwo);
	free(arraySum);
}
