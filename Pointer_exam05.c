#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
typedef struct studentTag {
	char name[10]; // ���ڹ迭�� �� �̸�
	int age; // ���̸� ��Ÿ���� ������
	double gpa; // ��������� ��Ÿ���� �Ǽ���
} student;
int main(void) {
	student* p;
	p = (student*)malloc(SIZE * sizeof(student));
	if (p == NULL) {
		fprintf(stderr, "�޸𸮰� �����ؼ� �Ҵ��� �� �����ϴ�.\n");
		exit(1);
	}
}