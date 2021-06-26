#include <iostream>
#include "../matrixOps.h"

int main()
{
	Matrix obj1({{1, 2},{3, 4}});
	Matrix obj2({{1, 2},{3, 4}});
	
	Matrix obj3(obj1*obj2);
	Matrix objTest({{7, 10},{15, 22}});
	if(obj3==objTest)
		return 0;
	else
		return 1;	
}
