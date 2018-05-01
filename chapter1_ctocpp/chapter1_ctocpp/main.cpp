#include <iostream>
#include <string>
using namespace std;

void e1()
{
	string name;
	int age;
	cout << "[문제1]" << endl;
	cout << "이름: ";
	cin >> name;
	cout << "나이: ";
	cin >> age;
	cout << "나의 이름은 " << name << "이고, " << age << "살입니다." << endl << endl;
}

void e2()
{
	int num1 = 3, num2 = 5;
	auto result = num1 + num2;
	cout << "[문제2]" << endl;
	cout << "result: " << result << endl << endl;
}

void e3()
{
	cout << "[문제3]" << endl;
	char* chArr = new char[12];
	cout << "char 배열 선언" << endl;
	delete[] chArr;
	cout << "char 배열 해제" << endl << endl;
}

void e4_Swap(int& _num1, int& _num2)
{
	int temp = _num1;
	_num1 = _num2;
	_num2 = temp;
}
void e4()
{
	cout << "[문제4]" << endl;
	int num1 = 55, num2 = 10;
	cout << "num1: " << num1 << ", num2: " << num2 << endl;
	e4_Swap(num1, num2);
	cout << "Swap! -> num1: " << num1 << ", num2: " << num2 << endl << endl;
}

void e6()
{
	int aList[5] = { 10, 20, 30, 40, 50 };
	cout << "[문제6]" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (aList[j] < aList[j + 1])
			{
				int tmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = tmp;
			}
		}
	}

	cout << "aList: ";
	for (int i : aList)
	{
		cout << i << " ";
	}
	cout << endl << endl;
}

int main()
{
	e1();
	e2();
	e3();
	e4();
	e6();
	return 0;
}