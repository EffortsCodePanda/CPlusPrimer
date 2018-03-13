#ifndef YINH_OPERATOR_FUNCTION_TEST_H
#define YINH_OPERATOR_FUNCTION_TEST_H

class cooAxis
{
private:
	int x;
	int y;
public:
	cooAxis(int xx = 0, int yy = 0);
	friend const cooAxis operator+ (const cooAxis &a, const cooAxis &b);
	friend const cooAxis operator- (const cooAxis &a, const cooAxis &b);
	friend  cooAxis operator+= (cooAxis &a, const cooAxis &b);
};

#endif