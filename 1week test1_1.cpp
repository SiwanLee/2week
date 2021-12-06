// 1week test1_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	double B;
	long C;
	short D;
	int size1, size2, size3, size4;

	size1 = sizeof(A);
	size2 = sizeof(B);
	size3 = sizeof(C);
	size4 = sizeof(D);

	printf("A의 크기 : %d\n", size1);
	printf("B의 크기 : %d\n", size2);
	printf("C의 크기 : %d\n", size3);
	printf("D의 크기 : %d\n", size4);

	// 변수 선언하지않고 데이터 사이즈 알아보는 방법

	/*printf("char : %d, short : %d, int : %d, long : %d, double : %d\n",
		sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(double));*/

	
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
