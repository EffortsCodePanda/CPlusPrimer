#include <iostream>
#include "test.h"
using namespace std;

int main()
{ 
	swapTest<int> oswapTest;
	int a = 8;
	int b = 4;
	oswapTest.swap(a, b);
	
	cout << "a=" << a << ",b=" << b<< endl;
	cout << "the end" << endl;
}