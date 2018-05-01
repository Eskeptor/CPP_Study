#pragma once
#include <iostream>
#include <cstring>

#define SUCCESS 1
#define FAILURE -1

using namespace std;

class MyString
{
private:
	char* m_pszData;
	int m_nLength;
public:
	MyString();
	~MyString();
	int SetString(const char* pszParam);
	const char* GetString() const;
	void Release();
};

