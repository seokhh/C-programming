#include <stdio.h>
#define SIZE 6
void get_integers(int list1[]) {
	printf("6개의 정수를 입력하시오: ");
	for (int i = 0; i < SIZE; ++i) {
		scanf_s("%d", &list1[i]);
	}
}
int cal_sum(int list2[]) {
	int sum = 0;
	for (int i = 0; i < SIZE; ++i) {
		sum += list2[i];
	}
	return sum;
}
int main(void) {
	int A[SIZE];
	get_integers(A);
	printf("합 = %d \n", cal_sum(A));
	return 0;
}