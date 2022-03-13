#include <iostream>

using namespace std;

int main() {

	int input;
	int wincount = 0;
	

	while (wincount < 4)
	{
		cout << "가위(1) 바위(2) 보(3)를 골라주세요!";
		cin >> input;
		int enemyChoice = 1+rand() % 3;
		switch (input)
		{
		case 1:
			if (enemyChoice == 1) {
				cout << "플레이어" <<input <<"컴퓨터"<< enemyChoice<< " 비겼습니다" << endl;
				continue;
			}else if(enemyChoice ==2) {
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 졌습니다" << endl;
				continue;
			}
			else
			{
				cout << "플레이어" << input << "컴퓨터" << enemyChoice << " 이겼습니다." << endl;
				wincount++;
				continue;
			}
		case 2:
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
		case 3:
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