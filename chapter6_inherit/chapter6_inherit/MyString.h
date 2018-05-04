#pragma once
#include <iostream>
#include <cstring>

#define SUCCESS 1
#define FAILURE -1
#define TRUE 1
#define FALSE 0

using namespace std;

class MyString
{
private:
	int m_nLength;
protected:
	char* m_pszData;
public:
	MyString();
	MyString(const MyString&);
	explicit MyString(const char*);
	MyString(MyString&&);
	~MyString();
	int SetString(const char*);
	const char* GetString() const;
	void Release();
	int GetLength() const;
	int Append(const char*);
	virtual void OnSetString(char*, int);

	MyString& operator=(const MyString&);
	MyString operator+(const MyString&);
	MyString& operator+=(const MyString&);
	char operator[](int) const;
	char operator[](int);
	int operator==(const MyString&);
	int operator!=(const MyString&);
	operator char*() const
	{
		return m_pszData;
	}
};

