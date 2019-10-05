/*
 ============================================================================
 Name        : CGOL (Convey Game Of Life)
 Author      : Sagar Soni
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int arr[5][5] = {
		{ 0, 1, 0, 1, 0 },
		{ 1, 1, 0, 0, 0 },
		{ 0, 0, 1, 0, 1 },
		{ 1, 0, 0, 1, 0 },   // It is the given array.
		{ 0, 1, 0, 0, 1 }
};




int arr1[5][5];

int a, b, c, d, e, f, g, h, count;   // Variables declared here for the entire CGOL

int main() {
	void change(int, int);
	int i, j;
	int FutureGen; // FutureGen is the variable taken for the number of generation we want in the game.
	int k;
	printf("Instruction\n Here in this game 1 is the alive cell and 0 is the dead cell: \n");
	printf("\nArray Given Below\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);    // Condition for Original Array.
		}
		printf("\n");

	}

	printf("How many Generation do you want:");
	fflush(stdout);
	scanf("%d", &FutureGen);  // Number of generation we want

	for (k = 1; k <= FutureGen; k++) {

		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				arr1[i][j] = arr[i][j];  // Condition for Future generation
			}
		}

		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				count = 0;
				a = arr[i - 1][j - 1];    // when the Point is Upward Left direction
				b = arr[i - 1][j];        // When the point is Upward Direction
				c = arr[i - 1][j + 1];    // When the point is Upward Right direction
				d = arr[i][j - 1];        // When the point is at Left direction
				e = arr[i][j + 1];        // When is the point is at Right direction
				f = arr[i + 1][j - 1];    // When the point is at Downward Left direction
				g = arr[i + 1][j];        // When the point is Downward direction
				h = arr[i + 1][j + 1];    // When the point is Downward Right direction

				change(i, j);
			}
		}


		printf("\nGeneration %d: \n", k);
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				printf("%d ", arr1[i][j]);
			}
			printf("\n");
		}

		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				arr[i][j] = arr1[i][j];
			}
		}

	}
	return 0;
}

void change(int num1, int num2) {
	if (a == 1) {
		count++;
	}
	if (b == 1) {
		count++;
	}
	if (c == 1) {
		count++;
	}
	if (d == 1) {
		count++;
	}
	if (e == 1) {
		count++;
	}
	if (f == 1) {
		count++;
	}
	if (g == 1) {
		count++;
	}
	if (h == 1) {
		count++;
	}

	if (count > 3) {
		arr1[num1][num2] = 0;    // Condition when Count is greater than 3 then array =0

	} else if (count < 2) {     // Condition when Count is less than 2 then array =0
		arr1[num1][num2] = 0;

	} else if (count == 3) {     // Condition when count is equal to 3 then array =1
		arr1[num1][num2] = 1;
	}

}
