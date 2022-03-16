#include <iostream>

using namespace std;

// 배열

struct StatInfo
{
	int hp;
	int attack;
	int defense;
};
int main()
{
	const int monsterCount = 10;
	StatInfo monsters[monsterCount];

	//지금까지와 다르게 배열의 이름은 조금 다르게 동작

	auto WhoAmI = monsters;

	//첫번째 주소를 가르킴
	StatInfo* monster_0 = monsters;

	monster_0->hp = 100;
	monster_0->attack = 10;
	monster_0->defense = 5;

	//포인터의 덧셈 다음 주소를 가르킴
	StatInfo* monster_1 = monsters+1;
	monster_1->hp = 200;
	monster_1->attack = 15;
	monster_1->defense = 2;

	//포인터와 참조는 자유자재로 변환 가능하다
	StatInfo& monster_2 = *(monsters + 2);
	monster_2.hp = 300;
	monster_2.attack = 20;
	monster_2.defense = 1;

	//완전히 다른의미 : 그냥 데이터를 복사함
	StatInfo temp = *(monsters + 2);
	temp.hp= 300; 
	temp.attack = 20;
	temp.defense = 1;

	//for문 자동화
	for (size_t i = 0; i < monsterCount; i++)
	{
		StatInfo& monster = *(monsters + i);
		monster.hp = 100+ i*100;
		monster.attack = 10 + i*10;
		monster.defense = i;
	}
	//너무 가독성이 떨어지므로 인덱스를 사용함
	// *(monsters + i) = monsters[i]
	for (size_t i = 0; i < monsterCount; i++)
	{
		monsters[i].hp = 100 + i * 100;
		monsters[i].attack = 10 + i * 10;
		monsters[i].defense = i;
	}

	//배열 초기화 문법 몇가지
	int numbers[5] = {}; // 전부 0으로 밀어버린다
	int numbers1[10] = { 1,2,3,4,5 }; // 설정한 애들은 설정하 값으로 들어간다.
	int numbers2[] = { 1,2,3,4,5,6,7,88,9,0 }; //데이터 개수만큼 크기에 해당

	char HelloStr[] = { 'h','e','l','l','o' };

	return 0;
}