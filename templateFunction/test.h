#ifndef YINH_TEMPLATE_FUNCTION_TEST_H
#define YINH_TEMPLATE_FUNCTION_TEST_H

class testFunction
{
public:
	template <class T>
	void myswap(T &a, T &b)
	{
		T temp = a;
		a = b;
		b = temp;
	}
};
//ע�⣺ģ�庯���Ķ������������ŵ�һ���ļ��У���Ҫ.h �� .cpp�ļ��ķ��룬����������д��������
//��temlateClass�ȣ�����ʵ��swap���ִ���ͬ���Ͳ����ĺ���������ģ�巽�㣬����Ҫnew������󣬵��Ƕ��������ȣ�ֻ����ض��������ݣ�ʵ��Ҳ�����ض������ͣ������ģ����ʵ��

#endif

