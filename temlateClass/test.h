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

//ע�⣺ģ����Ķ������������ŵ�һ���ļ��У���Ҫ.h �� .cpp�ļ��ķ��룬����������д��������
//��temlateFunction�ȣ�����ʵ��swap���ִ���ͬ���Ͳ����ĺ���������ģ�巽�㣬����Ҫnew������󣬵��Ƕ��������ȣ�ֻ����ض��������ݣ�ʵ��Ҳ�����ض������ͣ������ģ����ʵ��
#endif
