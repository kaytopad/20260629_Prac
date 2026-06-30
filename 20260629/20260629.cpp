#include <iostream>
using namespace std;

void func();
int globalNum = 0;
const int NUMBER = 10;

int main(void)
{
	int i;
	for (i = 0; i < NUMBER; i++)
	{
		func();
	}
}

void func()
{
	static int staticNum = 0;
	int autoNum = 0;
	cout << "globalNum:" << globalNum++ << "staticNum:" << staticNum++ << "autoNum:" << autoNum++ << endl;
}