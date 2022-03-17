#include <iostream>>

using namespace std;

void SetNumber(int* a)
{
	*a = 2;
}
void SetMessage(const char* a)
{
	a = "Bye";
};
void SetMessage(const char** a)
{
	*a = "bye";
}
void SetMessage2(const char*& a)
{
	a = "bye 2";
}
int main()
{
	int a = 0;
	SetNumber(&a);

	const char* msg = "Hello";
	SetMessage(msg);

	const char** pp = &msg;
	SetMessage(&msg);
	

	SetMessage2(msg);
	//*pp = "Bye";
	cout << msg << endl;

}