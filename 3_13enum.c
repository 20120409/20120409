/*
솔루션/프로젝트/소스파일:Ch03/prj13/enum.0
키워드 enum으로 만드는 열거형 정수 상수 목록
v1.0 2016

*/

#include <stdio.h>

int main(void)
{
	//키워드 enum으로 열거형 정수 상수 목록 만들기
	enum DAY {SUN,MON,TUE,WED,THU,FRI,SAT};
	printf("일요일 상수 : %d\n", SUN);
	printf("수요일 상수 : %d\n", WED);

	//상수 목록에서 특정한 정수 지정 가능
	enum SHAPE{POINT,LINE,TRI = 3,RECT,OCTA=8,CIRCLE};
	printf("LINE:%d,RECT:%d,CIRCLE:%d\n", LINE, RECT, CIRCLE);

	enum bool{ FALSE,TRUE };
	enum pl{c=1972,cpp=1983,Java=1995,csharp=2000};
	printf("false:%d,csharp:%d\n",FALSE,cpp,csharp);
	
	return 0;
}