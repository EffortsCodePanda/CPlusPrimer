#ifndef VECTOR_TEST_TEST_YINH_H
#define VECTOR_TEST_TEST_YINH_H

#include <string>
using namespace std;

class studentInfo
{
private:
	int sage;
	string sname;
public:
	studentInfo(int age = 0, string name = "noOne");
};

studentInfo::studentInfo(int age, string name)
{
	this->sage = age;
	this->sname = name;
}

#endif