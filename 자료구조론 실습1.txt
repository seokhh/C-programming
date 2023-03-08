#include <stdio.h>
#include <stdlib.h>

void main() {
	int size;
	int numbers[100];
	scanf_s("%d", &size);
	srand(1);
	void input_list(); {
		for (int i = 0; i < size; ++i) {
			numbers[i] = rand() % 100;
		}
	}
	void print_list(); {
		for (int i = 0; i < size; ++i) {
			printf("%3d,", numbers[i]);
			if (i % 8 == 7)
				printf("\n");
		}
	}
}