#include <iostream>
using namespace std;
#include "test.h"

int main()
{
	testFunction otestFunction;
	int x = 5;
	int y = 7;
	otestFunction.myswap<int>(x, y);
	cout << "x=" << x << ",y=" << y << endl;


	cout << "the ending" << endl;
}