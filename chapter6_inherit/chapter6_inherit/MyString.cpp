#include "MyString.h"

MyString::MyString() : m_pszData(NULL), m_nLength(0)
{

}

MyString::MyString(const MyString& _rhs) : m_pszData(NULL), m_nLength(0)
{
	this->SetString(_rhs.GetString());
}

MyString::MyString(const char* _str) : m_pszData(NULL), m_nLength(0)
{
	this->SetString(_str);
}

MyString::MyString(MyString&& _rhs) : m_pszData(NULL), m_nLength(0)
{
	m_pszData = _rhs.m_pszData;
	m_nLength = _rhs.m_nLength;
	_rhs.m_pszData = NULL;
	_rhs.m_nLength = 0;
}

MyString::~MyString()
{
	Release();
}

int MyString::SetString(const char* _pszParam)
{
	Release();
	if (_pszParam == NULL)
	{
		return FAILURE;
	}

	m_nLength = strlen(_pszParam);
	if (m_nLength == 0)
	{
		return FAILURE;
	}
	m_pszData = new char[m_nLength + 1];
	strcpy_s(m_pszData, m_nLength + 1, _pszParam);

	this->OnSetString(m_pszData, m_nLength);

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
		m_nLength = 0;
	}
}

int MyString::GetLength() const
{
	return m_nLength;
}

int MyString::Append(const char* _str)
{
	if (_str == NULL)
	{
		return FAILURE;
	}

	int strLength = strlen(_str);
	if (strLength == 0)
	{
		return FAILURE;
	}

	char* newData = new char[m_nLength + strLength + 1];
	strcpy_s(newData, m_nLength + 1, m_pszData);
	strcat_s(newData, m_nLength + strLength + 1, _str);
	m_nLength += strLength;
	delete[] m_pszData;
	m_pszData = newData;

	return SUCCESS;
}

void MyString::OnSetString(char* _str, int _length)
{

}

MyString& MyString::operator=(const MyString& _rhs)
{
	if (&_rhs != this)
	{
		this->SetString(_rhs.GetString());
	}
	return *this;
}

MyString MyString::operator+(const MyString& _rhs)
{
	MyString newStr(*this);
	newStr.Append(_rhs.GetString());
	return newStr;
}

MyString& MyString::operator+=(const MyString& _rhs)
{
	this->Append(_rhs.GetString());
	return *this;
}

char MyString::operator[](int _index) const
{
	if (_index < m_nLength && _index >= 0)
	{
		return m_pszData[_index];
	}
	else
	{
		return '\0';
	}
}

char MyString::operator[](int _index)
{
	if (_index < m_nLength && _index >= 0)
	{
		return m_pszData[_index];
	}
	else
	{
		return '\0';
	}
}

int MyString::operator==(const MyString& _rhs)
{
	if (_rhs.m_pszData != NULL && m_pszData != NULL)
	{
		if (strcmp(m_pszData, _rhs.m_pszData) == 0)
		{
			return TRUE;
		}
	}
	return FALSE;
}

int MyString::operator!=(const MyString& _rhs)
{
	return !(*this == _rhs);
}