#include <iostream>

using namespace std;


enum ENUM_RSP{
	ENUM_ROCK =1,
	ENUM_SISSORS,
	ENUM_PAPPER
};
//#이 붙은거 -> 전처리 지시문
#define DEFINE_SCISSORS 1

int main() {

	int input;
	int wincount = 0;


	while (wincount < 4)
	{
		cout << "가위(1) 바위(2) 보(3)를 골라주세요!";
		cin >> input;
		int enemyChoice = 1 + rand() % 3;
		switch (input)
		{
		case ENUM_ROCK:
			if (enemyChoice == 1) {
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 비겼습니다" << endl;
				continue;
			}
			else if (enemyChoice == 2) {
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 졌습니다" << endl;
				continue;
			}
			else
			{
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 이겼습니다." << endl;
				wincount++;
				continue;
			}
		case ENUM_SISSORS:
			if (enemyChoice == 1) {
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 이겼습니다" << endl;
				wincount++;

				continue;
			}
			else if (enemyChoice == 2) {
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 비겼습니다" << endl;
				continue;
			}
			else
			{
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 졌습니다." << endl;
				continue;

			}
		case ENUM_PAPPER:
			if (enemyChoice == 1) {
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 졌습니다" << endl;
				continue;
			}
			else if (enemyChoice == 2) {
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 이겼습니다" << endl;
				wincount++;

				continue;
			}
			else
			{
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 비겼습니다." << endl;
				continue;

			}
		default:
			cout << "잘못된 값을 입력하셨습니다" << endl;
			continue;
			break;
		}

	}
}