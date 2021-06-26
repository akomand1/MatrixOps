matrixOps is the header file containing the "Matrix Multiplication" and "Matrix Transpose" functions

Matrix Multiplication has been implemented two ways,
	1. Using a class member function "matMul", which takes in a class Matrix object as a parameter and returns another class Matrix object. It returns an ERROR_MATRIX = vector<int<int>>{{INT_MIN},{INT_MIN}} which is also a class Matrix object if the dimensions of the matrices do not match.
	Calling the function = "Matrix obj(obj1.matMul(obj2))" // Without quotes
	2. Operator overloading using the "*" operator, which returns a class Matrix object and ERROR_MATRIX (if the dimensions are incorrect).
	Calling the function = "Matrix obj(obj1*obj2)" // Without quotes
	
Transpose has been implemented as a member function, which doesn't take any arguments, and has a void return type. This API modifies the matrix in-place.
	Calling the function = "obj.transpose()" // Without quotes
	
For testing the API, I have implemented "isEquals" function as well, which checks whether two objects of the class Matrix are equal or not.
"isEquals" has been implemented two ways,
	1. Using a class member function "isEquals", which takes in a class Matrix object as a parameter and return a boolean saying whether the objects are equal or not.
	Calling the function = "obj1.isEquals(obj2)" // Without quotes
	2. Operator overloading using the "==" operator, which returs a boolean.
	Calling the function = "obj1==obj2" // Without quotes
	

Running the tests:
	The API was tested on a machine running Ubuntu 20.04 LTS.
	
	Run the following commands in the directory where the header file and tests folder are  places,
	chmod +x test_runner.sh
	chmod +x tests/make.sh
	chmod +x tests/make_clean.sh
	
	The above commands need to be done once, and to run the tests everytime use,
	./test_runner.sh
	
	test1.cpp - Checks the matrix multiplication of a matrix and an identity matrix
	test2.cpp - Checks the matrix multiplication of two matrices
	test3.cpp - Checks the failing of the multiplication, which gives an error
	test4.cpp - Checks the operator overloading for "*" of a matrix and an identity matrix
	test5.cpp - Checks the operator overloading for "*" of two matrices
	test6.cpp - Checks the failing of the operator overloading "*", which gives an error
	test7.cpp - Checks the transpose function for a matrix
	
	If the test passes, "PASS" is echoed onto the terminal
	If the test fails, "FAIL" is echoed onto the terminal
	
