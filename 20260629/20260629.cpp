#include <iostream>
using namespace std;

void func();
int globalNum = 0;

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
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