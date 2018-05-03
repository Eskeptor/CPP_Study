#pragma once
#include <iostream>

class DeepCopy
{
private:
	int* m_ptr_data = nullptr;
public:
	DeepCopy(const int& _data = 0)
	{
		m_ptr_data = new int;
		*m_ptr_data = _data;
	}

	DeepCopy(const DeepCopy& _rhs)
	{
		m_ptr_data = new int;
		*m_ptr_data = *_rhs.m_ptr_data;
	}

	~DeepCopy()
	{
		delete m_ptr_data;
	}

	DeepCopy operator=(const DeepCopy& _rhs)
	{
		*m_ptr_data = *_rhs.m_ptr_data;
		return *this;
	}

	int GetData() const
	{
		return *m_ptr_data;
	}
};