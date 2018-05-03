#include "MyString.h"

void TestFunc(const MyString& strParam)
{
	cout << strParam << endl;
}

MyString TestFunc(void)
{
	MyString test("TestFunc()");
	cout << test << endl;
	return test;
}

int main(void)
{
	MyString strData, strTest;
	strData.SetString("Hello");
	strTest.SetString("World");
	cout << strData.GetString() << endl;

	MyString strNewData(strData);
	cout << strNewData.GetString() << endl;

	strNewData = strTest;
	cout << strNewData.GetString() << endl;

	::TestFunc(strData);
	::TestFunc(MyString("No Where"));
	::TestFunc();

	strData.Append("NoNoNo");
	cout << strData << endl;
	strData += strTest;
	cout << strData << endl;

	MyString strTest2 = strData + strTest;
	cout << strTest2 << endl;

	cout << strTest2[0] << endl;
	cout << strTest2[strTest2.GetLength() - 1] << endl;

	cout << (strTest2 == strTest) << endl;
	cout << (strTest2 != strTest) << endl;
	return 0;
}