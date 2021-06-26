#include <iostream>
#include "../matrixOps.h"

int main()
{
	Matrix obj1({{1, 2, 3},{4, 5, 6}});
	Matrix obj2({{1, 4},{2, 5},{3, 6}});
	
	obj1.transpose();
	
	if(obj1.isEquals(obj2))
		return 0;
	else
		return 1;	
}
