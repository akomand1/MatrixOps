#include <iostream>
#include "../matrixOps.h"

int main()
{
	Matrix obj1({{1,2, 3},{4, 5, 6}});
	Matrix obj2({{1, 2},{3, 4}});
	
	Matrix obj3(obj1*obj2);
	
	if(obj3==ERROR_MATRIX)
		return 0;
	else
		return 1;	
}
