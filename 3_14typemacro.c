/*
솔루션/프로젝트/소스파일:Ch03/prj14/typemacro.0
키워드 enum으로 만드는 열거형 정수 상수 목록
v1.0 2016

*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("char 범위 :%d ~ %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char 범위: %d ~%u\n", 0, UCHAR_MAX);

	printf("unsigned short 범위: %d ~%u\n", 0, USHRT_MAX);
	printf("int 범위 :%d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsigned int 범위: %d ~%u\n", 0, UINT_MAX);

	printf("long long int 범위: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long int 범위: %d ~ %llu\n",0, ULLONG_MAX);
	
	return 0;
}