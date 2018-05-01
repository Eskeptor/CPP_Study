#include "MyString.h"



MyString::MyString(): m_pszData(NULL), m_nLength(0)
{
}


MyString::~MyString()
{
	Release();
}


int MyString::SetString(const char* pszParam)
{
	Release();
	m_nLength = strlen(pszParam);

	if (m_nLength == 0)
	{
		return FAILURE;
	}

	m_pszData = new char[m_nLength + 1];
	strcpy(m_pszData, pszParam);

	return SUCCESS;
}

const char* MyString::GetString() const
{
	return m_pszData;
}

void MyString::Release()
{
	if (m_pszData != NULL)
	{
		delete[] m_pszData;
		m_pszData = NULL;
	}
	m_nLength = 0;
}