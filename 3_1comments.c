/*
	솔루션/프로젝트/소스파일:Ch03/prj01/comments.c
	C프로그래밍의 기초를 다지기위한 주석,문장,키워드등 이해
	v1.0 2016

*/
#include <stdio.h>

//운영체제가 호출하는 함수 ,매개변수(없음)
int main(void)
{
	puts("2장 첫 C프로그래밍");

	printtf("키워도 : int void return 등\n");
	printtf("식별자 : main puts printf등\n");
	printtf("블록 : (...)\n");

	//인자인 문자열 내부는 //주석도 일반 문자열로 인식
	printtf("한줄주석 : //이줄 끝까지 한 줄 주석입니다.\n");
	// /*블록 주석/*도 일반 문자열로 인식
	printtf("블록 주석 : /* 여러줄에 걸친\n블록 주석입니다.*/\n");

	return 0;
}

