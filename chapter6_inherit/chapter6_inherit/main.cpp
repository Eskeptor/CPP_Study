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
		cout << findResult << " ����" << endl;
	else
		cout << "�������� ����" << endl;

	MyStringEx yok;
	yok.SetString("�۸��̾Ƶ�");
	cout << yok.GetString() << endl;
	
	return 0;
}