// comedycode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <stdio.h>


using namespace std;

//int main(void)
//{
//	int sum;
//	sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
//	printf("1부터 10까지의 합 = %d\n", sum);
//	return 0;
//}
//
//int main(void)
//{
//	int i = 6;
//
//	printf("정수를 입력하세요 : %d\n",i);
//	if (i == 7)
//		printf("7을 입력했습니다\n");
//	else
//		printf("행운의 7이 아닙니다..\n");
//	
//		
//	return 0;
//}
//int main(void)
//{
//	int i = 3;
//	printf("정답을 입력하시오 : %d", i);
//	if (i == 5) {
//		printf("정화 똑똑해\n");
//		printf("칭찬해~\n");
//	}
//	else {
//		printf("정화 바보\n");
//		printf("아이스크림 가져와!!\n");
//	}
//		
//	return 0;
//}
//int main(void)
//{
//	int i = 6;
//	printf("정답을 작성하시오:%d\n", i);
//	if (i == 5)
//	{
//		printf("숫자는 5입니다.\n");
//	}
//	else if (i == 6)
//	{
//		printf("숫자는 6입니다.\n");
//	}
//	else
//		printf("정답이 아닙니다.\n");
//
//	return 0;
//}
//int main(void)
//{
//	int i = 16;
//	printf("정수를 입력하시오 : %d\n", i);
//	//scanf("%d", &i);
//
//	if (i % 2 == 1)
//	{
//		printf("홀수입니다.");
//	}
//	else if(i % 2 == 0)
//	{
//		printf("짝수입니다.");
//	}
//	return 0;
//}
int main(void)
{
	int i = 3 , j = 5;

	printf("첫번째 정수를 입력하세요 : %d\n",i);
	//scanf("%d", &i);
	printf("두번째 정수를 입력하세요 : %d\n",j);
	//scanf("%d", &j);

	if (i < j) {
		printf("%d가 %d보다 작습니다.\n", i, j);
	}
	else if(i > j) {
		printf("%d가 %d보다 큽니다.\n", j, i);
	}

	return 0;
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
