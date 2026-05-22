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
	cout <<"각 자리 수의 합은 : " << Sum << endl;

	return;
}

void Homework03_Run()
{
	srand(time(0));

	int Money = 10000, Count = 1;

	while (Money > 100)
	{
		cout << Count << "회차, 소지 금액: " << Money << endl;
		cout << "베팅할 금액을 입력하세요, 최소 100 이상 베팅해야합니다 : ";
		
		int Bet;
		cin >> Bet;
		while (Bet < 100)
		{
			cout << "최소 100 이상 베팅해야합니다. 다시 입력해주세요: ";
			cin >> Bet;
		}
		int Num1 = (rand() % 9) + 1, Num2 = (rand() % 9) + 1, Num3 = (rand() % 9) + 1;
		cout << "결과: " << Num1 << " " << Num2 << " " << Num3 << endl;
		if (Num1 == Num2 && Num1 == Num3)
		{
			if (Num1 == 7)
			{
				cout << "잭팟!!!!! 베팅 금액의 10000배 " << Bet * 10000 << "획득!!!!!" << endl;
				Money += Bet * 10000;
			}
			else
			{
				cout << "같은 숫자 3개가 나왔습니다! 베팅 금액의 50배 " << Bet * 50 << "획득!" << endl;
				Money += Bet * 50;
			}
		}
		else
			Money -= Bet;
		Count++;
	}
	cout << "게임 오버" << endl;

	return;
}

void Homework04_Run()
{
}

void Homework05_Run()
{
}
