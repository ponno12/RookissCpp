#include <iostream>

using namespace std;

int main() {

	int input;
	int wincount = 0;
	

	while (wincount < 4)
	{
		cout << "����(1) ����(2) ��(3)�� ����ּ���!";
		cin >> input;
		int enemyChoice = 1+rand() % 3;
		switch (input)
		{
		case 1:
			if (enemyChoice == 1) {
				cout << "�÷��̾�" <<input <<"��ǻ��"<< enemyChoice<< " �����ϴ�" << endl;
				continue;
			}else if(enemyChoice ==2) {
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �����ϴ�" << endl;
				continue;
			}
			else
			{
				cout << "�÷��̾�" << input << "��ǻ��" << enemyChoice << " �̰���ϴ�." << endl;
				wincount++;
				continue;
			}
		case 2:
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
		case 3:
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