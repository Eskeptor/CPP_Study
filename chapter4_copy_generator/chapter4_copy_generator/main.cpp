#include "deepcopy.h"
using namespace std;

int main(void)
{
	DeepCopy dc1(5);
	DeepCopy dc2 = dc1;
	cout << dc2.GetData() << endl;

	return 0;
}