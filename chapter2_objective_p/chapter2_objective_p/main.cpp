#include "MyString.h"

void TestFunc(const MyString &param)
{
	cout << param.GetString() << endl;
}

int main(void)
{
	MyString str;
	str.SetString("Hello");
	cout << str.GetString() << endl;
	TestFunc(str);

	return 0;
}