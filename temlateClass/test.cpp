#include "test.h"


template <class T>
void swapTest<T>::swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
};