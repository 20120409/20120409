/*
�ַ��/������Ʈ/�ҽ�����:Ch03/prj12/const.0
Ű���� const�� ����� ��� ����
v1.0 2016

*/

#include <stdio.h>

int main(void)
{
	const double RATE = 0.03;
	int deposit = 800000;

	//RATE = 0.032; ������ �Ұ���
	printf("������: %f\n", RATE);
	printf("�����ܰ�: %d\n", deposit);
	printf("���ھ�: %f\n", RATE* deposit);

	//���ڿ��� ������ ����
	char *str = "���� C��� �Թ���";
	char * const title = "������ C ���";

	str = "�ֱ� ���� ���� C ��� �Թ���";
	//title = "C ��� ����ġ"; //���� �Ұ���

	printf("\n%s:%s\n", str, title);	//���ڿ� ���� ���
	
	return 0;

	
}