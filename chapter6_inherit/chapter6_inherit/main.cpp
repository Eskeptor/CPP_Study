#include "MyStringEx.h"

int main(void)
{
	MyStringEx strData, strTest;
	strData.SetString("aabaaaabbbbaabaaabbbabbbabbabababaaabbaabaaabbbaaba");
	strTest.SetString("aabbba");
	cout << strData.GetString() << endl;
	cout << strTest.GetString() << endl;

	int findResult = strData.Find(strTest.GetString());
	if (findResult != FAILURE)
		cout << findResult << " 존재" << endl;
	else
		cout << "존재하지 않음" << endl;

	MyStringEx yok;
	yok.SetString("멍멍이아들");
	cout << yok.GetString() << endl;
	
	return 0;
}