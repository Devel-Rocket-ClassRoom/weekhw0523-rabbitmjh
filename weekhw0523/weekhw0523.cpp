#include <iostream>
#include "weekhw0523.h"
using namespace std;

int main()
{
	return 0;
}

void Homework02_Run()
{
	cout << "자리 수 분리해서 합치기" << endl;
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
	cout << "슬롯 머신 게임" << endl;
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
		while (Bet > Money)
		{
			cout << "베팅 금액은 소지 금액을 넘을 수 없습니다. 다시 입력해주세요: ";
			cin >> Bet;
		}
		Money -= Bet;

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

		Count++;
	}
	cout << "게임 오버" << endl;

	return;
}

void Homework04_Run()
{
	srand(time(0));

	cout << "도둑 잡기" << endl;
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
		while (Bet > Money)
		{
			cout << "베팅 금액은 소지 금액을 넘을 수 없습니다. 다시 입력해주세요: ";
			cin >> Bet;
		}
		Money -= Bet;

	
		int Card1 = (rand() % 13) + 1, Card2 = (rand() % 13) + 1, Card3 = 14;
		// A = 1, J = 11, Q = 12, K = 13, Joker = 14

		int Arr[3] = { Card1, Card2, Card3 };
		for (int i = 2; i > 0; i--)
		{
			int r = rand() % 3;
			int tmp = Arr[i];
			Arr[i] = Arr[r];
			Arr[r] = tmp;
		}

		cout << "카드 3장 중 하나를 선택하세요(1 ~ 3 입력): ";
		int Player;
		cin >> Player;
		while (Player < 1 && Player>3)
		{
			cout << "1 ~ 3 입력하세요: ";
			cin >> Player;
		}
		if (Arr[Player - 1] == 14)
		{
			cout << "플레이어 승. 베팅 금액의 2배인 " << Bet * 2 << "을 획득하였습니다." << endl;
			Money += Bet * 2;
		}
		else
		{
			if (Money - Bet > 0)
			{
				cout << "플레이어 패.\n다음 게임을 시작하거나(1) 배팅 금액의 2배를 추가로 지불하고 한번 더 선택(2). 1 또는 2를 입력하세요: ";
				int Num;
				cin >> Num;
				while (Num != 1 && Num != 2)
				{
					cout << "1 또는 2를 입력하세요: ";
					cin >> Num;
				}
				// 첫 번째 선택에서 조커가 아니면, 선택한 카드를 제외하고 남은 2장 중 다시 선택한다.
				if (Num == 2)
				{
					Money -= Bet;
					Bet *= 2;

					cout << "소지 금액 : " << Money << " 베팅 금액: " << Bet << endl;

					if (Player == 1)
					{
						cout << "카드 2장 중 하나를 선택하세요(2 또는 3 입력): ";
						cin >> Player;
						while (Player != 2 && Player != 3)
						{
							cout << "2 또는 3를 입력하세요: ";
							cin >> Player;
						}

						if (Arr[Player - 1] == 14)
						{
							cout << "플레이어 승. 베팅 금액의 2배인 " << Bet * 2 << "을 획득하였습니다." << endl;
							Money += Bet * 2;
						}
						else
						{
							cout << "플레이어 패." << endl;
						}
					}
					else if (Player == 2)
					{
						cout << "카드 2장 중 하나를 선택하세요(1 또는 3 입력): ";
						cin >> Player;
						while (Player != 1 && Player != 3)
						{
							cout << "1 또는 3를 입력하세요: ";
							cin >> Player;
						}

						if (Arr[Player - 1] == 14)
						{
							cout << "플레이어 승. 베팅 금액의 2배인 " << Bet * 2 << "을 획득하였습니다." << endl;
							Money += Bet * 2;
						}
						else
						{
							cout << "패배했습니다." << endl;
						}
					}
					else
					{
						cout << "카드 2장 중 하나를 선택하세요(1 또는 2 입력): ";
						cin >> Player;
						while (Player != 1 && Player != 2)
						{
							cout << "1 또는 2를 입력하세요: ";
							cin >> Player;
						}

						if (Arr[Player - 1] == 14)
						{
							cout << "플레이어 승. 베팅 금액의 2배인 " << Bet * 2 << "을 획득하였습니다." << endl;
							Money += Bet * 2;
						}
						else
						{
							cout << "패배했습니다." << endl;
						}
					}
				}
			}
			else
			{
				cout << "현재 베팅 금액의 2배를 지불할 수 없으므로 다음판으로 넘어갑니다." << endl;
			}
		}
		Count++;
	}
	cout << "게임오버" << endl;

	return;
}

void Homework05_Run()
{
}
