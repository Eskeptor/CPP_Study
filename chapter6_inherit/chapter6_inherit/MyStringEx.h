#pragma once
#include "MyString.h"

class MyStringEx : public MyString
{
public:
	int Find(const char*);
	void OnSetString(char*, int);
};