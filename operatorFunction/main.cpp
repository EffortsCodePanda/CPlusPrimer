#include <iostream>
using namespace std;

#include "test.h"

int main()
{
	cooAxis co1(3,3);
	cooAxis co2(1, 1);
	cooAxis co3 = co1 + co2;
	cooAxis co4 = co1 - co2;
	co1 += co2;

	cout << "the ending" << endl;

}