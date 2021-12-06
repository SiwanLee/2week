// 1week test1_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <windows.h>

using namespace std;

int main(void)
{
	int i;
	enum {EAST,WEST,SOUTH,NORTH};

	while (1)
	{
		/*printf("키보드를 입력하시오 : ");
		scanf_s("%d", &i);*/

		if (GetAsyncKeyState(VK_NUMPAD1)) // 숫자패드 1
		{
			//printf("%c\n",EAST);
			printf("EAST\n");
	    }
		if (GetAsyncKeyState(VK_NUMPAD2)) // 숫자패드 2
		{
			//printf("%c\n",WEST);
			printf("WEST\n");
		}
		if (GetAsyncKeyState(VK_NUMPAD3)) // 숫자 패드 3
		{
			//printf("%c\n",SOUTH);
			printf("SOUTH\n");
		}
		if (GetAsyncKeyState(VK_NUMPAD4)) // 숫자 패드 4
		{
			//printf("%c\n",NORTH);
			printf("NORTH\n");
		}
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
