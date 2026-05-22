// weekhw0523.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "weekhw0523.h"
using namespace std;

int main()
{
	return 0;
}

void Homework02_Run()
{
	int Num, Sum = 0;
	cin >> Num;
	while (Num)
	{
		Sum += Num % 10;
		Num /= 10;
	}
	cout << Sum << endl;
}

void Homework03_Run()
{
}

void Homework04_Run()
{
}

void Homework05_Run()
{
}
