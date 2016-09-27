/*
솔루션/프로젝트/소스파일:Ch03/prj06/float.c
부동소수형 변수의 선언과 활용
v1.0 2016

*/

#include <stdio.h>

int main(void) {
	float		x = 3.14f;
	double	    y = -3.141592;
	long double z = 180000000.0;

	printf("저장값: %f %f %f/n", x, y, z);
}