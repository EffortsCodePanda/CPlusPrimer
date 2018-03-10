#ifndef YINH_TEMPLATE_CLASS_TEST_H
#define YINH_TEMPLATE_CLASS_TEST_H


template<class T>
class swapTest
{
public:
	void swap(T &a, T &b);
	//{
	//	T temp = a;
	//	a = b;
	//	b = temp;
	//}
};

template <class T>
void swapTest<T>::swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
};

//注意：模板类的定义和申明必须放到一个文件中，不要.h 和 .cpp文件的分离，上述的俩种写法都可以
//和temlateFunction比，单独实现swap这种处理不同类型参数的函数，函数模板方便，不需要new多个对象，但是对于容器等，只存放特定类型数据，实例也处理特定的类型，因此是模板类实现
#endif
