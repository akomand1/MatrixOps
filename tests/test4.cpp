#include <iostream>
#include "../matrixOps.h"

int main()
{
	Matrix obj1({{1,2},{3,4}});
	Matrix obj2({{1, 0},{0, 1}});
	
	Matrix obj3(obj1*obj2);
	
	if(obj1==obj3)
		return 0;
	else
		return 1;	
}
