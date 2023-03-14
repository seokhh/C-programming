#include <stdio.h>
#include <stdlib.h>

int numbers[100];
int size;

void input_list() {
	for (int i = 0; i < size; ++i) {
		numbers[i] = rand() % 100;
	}
}
void print_list() {
	for (int i = 0; i < size; ++i) {
		printf("%3d,", numbers[i]);
		if (i % 8 == 7)
			printf("\n");
	}
}

void add_list(int val) {
	printf("�� %d�� ����Ʈ �� ���� �߰��մϴ�.\n\n", val);
	numbers[size++] = val;
}
void insert_list(int pos, int val) {
	printf("�� %d�� %d ��°�� �����մϴ�.\n\n", val, pos);
	for (int k = size - 1; k >= pos; k--)
		numbers[k + 1] = numbers[k];
	numbers[pos] = val;
	size++;
}
int delete_list(int pos) {
	int result = numbers[pos];
	for (int k = pos; k < size - 1; k++)
		numbers[k] = numbers[k + 1];
	printf("%d ��° ���� �����մϴ�. �� = %d\n\n", pos, result);
	size--;
	return result;
}
int update_list(int pos, int val) {
	int result = numbers[pos];
	numbers[pos] = val;
	printf("%d ��° ���� %d�� �����մϴ�. ������ = %d\n\n", pos, val, result);
	return result;
}


void run_menu() {
	int pos, val;
	int menu;
	while (1) {
		printf("\n(1) ���� �� �߰� \n(2) pos��°�� �� �߰�\n");
		printf("(3) pos��° ���� \n(4) pos��° �� ���� \n(5) ���� ");
		printf("\n �޴����� => ");
		scanf_s("%d", &menu);
		if (menu >= 5) break;
		switch (menu) {
		case 1:

			scanf_s("%d", &val);
			add_list(val);

			break;
		case 2:
			scanf_s("%d", &pos);
			scanf_s("%d", &val);
			insert_list(pos, val);

			break;
		case 3:
			scanf_s("%d", &pos);
			delete_list(pos);
			break;
		case 4:
			scanf_s("%d", &pos);
			scanf_s("%d", &val);
			update_list(pos, val);
			break;
		default: printf("����");
			break;
		}
		print_list();
	}

}
void main() {
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &size);
	srand(1);
	input_list();
	run_menu();

	return 0;
}