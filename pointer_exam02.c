#include <stdio.h>
void swap(int* px, int* py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main(void)
{
	int a = 10, b = 20;
	printf("swap을 호출하기 전: a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("swap을 호출한 다음: a=%d, b=%d\n", a, b);
	return 0;
}