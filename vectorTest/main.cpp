#include <iostream>
#include <vector>
#include "test.h"

using namespace std;

int main()
{
	vector<int> ivec;
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	ivec.pop_back();
	ivec.push_back(4);
	ivec.push_back(5);

	vector<int>::iterator iter;
	for (iter = ivec.begin(); iter != ivec.end();)//删除容器中某个数据
	{
		if (*iter == 4)
		{
			iter = ivec.erase(iter);
			continue;
		}
		iter++;
	}


	studentInfo stu1(24,"yinh");
	studentInfo stu2(24, "guxf");
	vector<studentInfo> stuvec;
	stuvec.push_back(stu1);
	stuvec.push_back(stu2);
	

	cout << "the ending" << endl;


}