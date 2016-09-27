/*
솔루션/프로젝트/소스파일:Ch03/prj10/charliteral.c
이스케이프 문자를 비롯해서 다양한 문자 리터럴의 표현
v1.0 2016

*/

#include <stdio.h>

int main(void)
{
	printf("%Casic", 'B');	printf("%c", '\n');

	char sq = '\'';

	printf("BCPL\tB\tC\tJava\n");
	printf("%C\7\n", '\a');
	printf("%c자바언어'\n", sq);
	
	//문자열 내부에서는 "(큰따옴표) 반드시 \"로 사용
	printf("\"c언어\"정말 재미있다!\n");

		return 0;

}