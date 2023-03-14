#include <stdio.h>

typedef struct studentTag {
	char name[10];
	int age;
	double gpa;
} student;

int main(void)
{
	student a = { "kim", 20, 3.8 };
	student b = { "park", 21, 3.2 };
	return 0;
}