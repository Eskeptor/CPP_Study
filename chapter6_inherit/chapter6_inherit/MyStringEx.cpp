#include "MyStringEx.h"

int MyStringEx::Find(const char* _str)
{
	int curDataLength = this->GetLength();
	int isFind = 0;
	int curI = 0;
	if (_str != NULL && curDataLength != NULL)
	{
		int findLength = strlen(_str);
		if (findLength > curDataLength)
			return FAILURE;
		for (int i = 0; i < curDataLength; i++)
		{
			if (this->operator[](i) == _str[0])
			{
				if (curDataLength - i >= findLength)
				{
					curI = i + 1;
					for (int j = 1; j < findLength; j++)
					{
						if (this->operator[](curI++) != _str[j])
						{
							isFind = 0;
							break;
						}
						isFind = 1;
					}
					if (isFind)
						return i;
				}
				else
					return FAILURE;
			}
		}
	}
	return FAILURE;
}

void MyStringEx::OnSetString(char* _str, int _length)
{
	if (strcmp(_str, "¸Û¸ÛÀÌ¾Æµé") == 0)
		strcpy_s(_str, sizeof(char) * (_length + 1), "ÂøÇÑ¾Æµé");
}