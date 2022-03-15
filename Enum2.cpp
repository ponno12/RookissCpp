#include <iostream>

using namespace std;


enum ENUM_RSP{
	ENUM_ROCK =1,
	ENUM_SISSORS,
	ENUM_PAPPER
};
//#�� ������ -> ��ó�� ���ù�
#define DEFINE_SCISSORS 1

int main() {

	int input;
	int wincount = 0;


	while (wincount < 4)
	{
		cout << "����(1) ����(2) ��(3)�� ����ּ���!";
		cin >> input;
		int enemyChoice = 1 + rand() % 3;
		switch (input)
		{
		case ENUM_ROCK:
			if (enemyChoice == 1) {
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �����ϴ�" << endl;
				continue;
			}
			else if (enemyChoice == 2) {
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �����ϴ�" << endl;
				continue;
			}
			else
			{
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �̰���ϴ�." << endl;
				wincount++;
				continue;
			}
		case ENUM_SISSORS:
			if (enemyChoice == 1) {
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �̰���ϴ�" << endl;
				wincount++;

				continue;
			}
			else if (enemyChoice == 2) {
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �����ϴ�" << endl;
				continue;
			}
			else
			{
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �����ϴ�." << endl;
				continue;

			}
		case ENUM_PAPPER:
			if (enemyChoice == 1) {
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �����ϴ�" << endl;
				continue;
			}
			else if (enemyChoice == 2) {
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �̰���ϴ�" << endl;
				wincount++;

				continue;
			}
			else
			{
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �����ϴ�." << endl;
				continue;

			}
		default:
			cout << "�߸��� ���� �Է��ϼ̽��ϴ�" << endl;
			continue;
			break;
		}

	}
}