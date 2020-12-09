#include <iostream>
#include <memory>
#include <stdexcept>

void Pointer()
{
	//포인터 사용법
	//int* myIntegerPointer;
	int* myIntegerPointer = nullptr;
	myIntegerPointer = new int;
	*myIntegerPointer = 8;
	//삭제
	delete myIntegerPointer;
	myIntegerPointer = nullptr;

	//동적배열할당
	int arraySize = 8;
	int* myVariableSizedArray = new int[arraySize];
}

void printString(const std::string& myString)
{
	//const 래퍼런스 전달 방식
	std::cout << myString << std::endl;
}

double divideNumbers(double numerator, double denominator)
{
	//예외처리
	if (denominator == 0)
	{
		throw std::invalid_argument("Denominator cannot be 0. ");
	}
	return numerator / denominator;
}

int main()
{
	//const 래퍼런스 전달 방식
	/*std::string someString = "Hello World!";
	printString(someString);
	printString("Hellp World!");
	return 0;*/

	//예외처리
	try {
		std::cout << divideNumbers(2.5, 0.5) << std::endl;
		std::cout << divideNumbers(2.3, 0) << std::endl;
		std::cout << divideNumbers(4.5, 2.5) << std::endl;
	}
	catch (const std::invalid_argument& exception) {
		std::cout << "Exception caught: " << exception.what() << std::endl;
	}
}
