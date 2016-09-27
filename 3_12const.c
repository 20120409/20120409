/*
솔루션/프로젝트/소스파일:Ch03/prj12/const.0
키워드 const를 사용한 상수 선언
v1.0 2016

*/

#include <stdio.h>

int main(void)
{
	const double RATE = 0.03;
	int deposit = 800000;

	//RATE = 0.032; 수정이 불가능
	printf("이자율: %f\n", RATE);
	printf("계좌잔고: %d\n", deposit);
	printf("이자액: %f\n", RATE* deposit);

	//문자열을 변수에 저장
	char *str = "좋은 C언어 입문서";
	char * const title = "진보된 C 언어";

	str = "최근 가장 좋은 C 언어 입문서";
	//title = "C 언어 스케치"; //수정 불가능

	printf("\n%s:%s\n", str, title);	//문자열 변수 출력
	
	return 0;

	
}