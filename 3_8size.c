/*
�ַ��/������Ʈ/�ҽ�����:Ch03/prj08/size.c
������ sizeof�� �̿��� ������� ũ�� ���
v1.0 2016

*/

#include <stdio.h>

int main(void)
{
	printf("     �ڷ��� : ũ��(����Ʈ\n");
	printf("     char : %d %d\n", sizeof(char), sizeof(unsigned char));
	printf("     short : %d %d\n", sizeof(short), sizeof(unsigned short));
	printf("     int : %d %d\n", sizeof(int), sizeof(200));
	printf("     long : %d %d\n", sizeof(long), sizeof(300L));
	printf("long long: %d %d\n", sizeof(long long), sizeof(900L));
	printf("     Folat : %d %d\n", sizeof(float), sizeof 3.14F);
	printf("     double: %d %d\n", sizeof(double), sizeof 3.14);
	printf("long double: %d %d\n", sizeof(long double), sizeof 4.24L);

	return 0;
}