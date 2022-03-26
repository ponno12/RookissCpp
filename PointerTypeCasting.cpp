#include <iostream>

using namespace std;

//타입 변환 ( 포인터 )

enum ItemType
{
	IT_WEAPON = 1,
	IT_ARMOR = 2
};

class Knight
{
public:
	Knight();
	~Knight();

private:

};


class Item
{
public:
	int _itemType = 0;
	int _itemDbId = 0;

	char _dummy[4096] = {};
public:
	Item();
	Item(const Item& item);
	Item(int itemType) : _itemType(itemType)
	{
		
	}
	virtual void TestItem()
	{
		cout << "Test Item" << endl;
	}
	virtual ~Item();

private:

};
class Weapon : public Item
{
public:
	int _damage = 0;
public:
	Weapon(): Item(IT_WEAPON)
{
		
		cout << " Weapon() " << endl;
		_damage = (1+ rand() % 5) * 10;
}
	~Weapon()
	{
		cout << " ~Weapon() " << endl;

	}
	void TestItem()
	{
		cout << "Weapon Test" << endl;
	}
};
class Armor : public Item
{
public:
	int _defense = 0;
public:
	Armor() : Item(IT_ARMOR)
	{
		_itemType = 2;
		cout << " Armor() " << endl;

	}
	~Armor()
	{
		cout << " ~Armor() " << endl;

	}
};
//데이터가 복사되는 느낌 생성자 호출

void TestItemPtr(Item* item)
{

}
Item::Item()
{
	cout << "Item()" << endl;
}

Item::Item(const Item& item)
{
	cout << "복사 생성자" << endl;	
}


Item::~Item()
{
	cout << " ~Item()" << endl;
}

Knight::Knight()
{
}

Knight::~Knight()
{
}

int main()
{
	//복습내용
	/*
	{
		//스택 메모리에 들어감
		Item item;
		// item2는 스택에 있고 데이터들은 Heap 영역에 있음
		Item* item2 = new Item();

		TestItem(item);
		TestItem(*item2);

		TestItemPtr(&item);
		TestItemPtr(item2);

		//메모리 누수 -> 점점 가용 메모리가 줄어들어서 crash
		delete item2;
	}

	//배열
	{
		cout << "_________________________________" << endl;
		// 스택에 올라가있는 아이템 100개생성

		Item imte3[100] = {};
		cout << "_________________________________" << endl;
		// 포인터 주소만 만듬

		Item* item4[100] = {};
		for (size_t i = 0; i < 100; i++)
		{
			item4[i] = new Item();
		}
		cout << " 아이템 생성 완료" << endl;


		for (size_t i = 0; i < 100; i++)
		{
			delete item4[i];
		}
	}
	*/
	// 연관성이 없는 클래스 사이의 포인터 변환 테스트
	{
		Knight* knight = new Knight();
		// 암시적으론 안되지만 명시적으론 가능
		/*Item* item = (Item*)knight;
		item->_itemType = 2;
		item->_itemDbId = 1;*/
		//이런식으로 잘못된 크기르 할당하면 에러가남
		delete knight;
	}

	// 부모 -> 자식 변환 테스트
	{
		Item* item = new Item();

		Weapon* weapon = (Weapon*)item;
		// 크래쉬남
		//weapon->_damage = 10; 
		delete item;
	}
	//자식 -> 부모 변환 테스트
	{
		Weapon* weapon = new Weapon();

		Item* item = weapon;
		item->_itemType = 1;
		delete weapon;
	}

	//명시적으로 타입 변환할 때는 항상 조심해야한다
	//암시적으로 바꾸는것은 안전할까? 항상그렇진 않다
	srand((unsigned int)time(nullptr));
	Item* inventory[20] = {};
	for (size_t i = 0; i < 20; i++)
	{
		int randValue = rand() % 2;
		switch (randValue)
		{
		case 0:
			inventory[i] = new Weapon();
			break;
		case 1:
			inventory[i] = new Armor();
			break;
		default:
			break;
		}
	}
	for (size_t i = 0; i < 20; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
			continue;

		if (item->_itemType == IT_WEAPON)
		{
			Weapon* weapon = (Weapon*)item;
			cout << "Weapon Damage : " << weapon->_damage << endl;
		}
	}
	//매우매우 매우 중요
	//delete item호출시 아이템 크기만큼만 지워줌
	//이런식으로 타입을 확인하고 delete해도 되지만 최상위 부모객체의 소멸자에 virtual로 가상함수를 선언하면
	//자동으로 객체 타입에 맡는 소멸자를 호출해줌
	
	/*for (size_t i = 0; i < 20; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
			continue;
		if (item->_itemType == IT_WEAPON)
		{
			Weapon* weapon = (Weapon*)item;
			weapon->TestItem();
			delete weapon;

		}
		else if (item->_itemType == IT_ARMOR)
		{
			Armor* armor = (Armor*)item;
			delete armor;
		}
	}
	*/
	for (size_t i = 0; i < 20; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
		{
			continue;
		}
		delete item;
	}
	//

}