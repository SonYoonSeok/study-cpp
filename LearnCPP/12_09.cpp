#include <iostream>
#include <memory>
#include <stdexcept>

void Pointer()
{
	//������ ����
	//int* myIntegerPointer;
	int* myIntegerPointer = nullptr;
	myIntegerPointer = new int;
	*myIntegerPointer = 8;
	//����
	delete myIntegerPointer;
	myIntegerPointer = nullptr;

	//�����迭�Ҵ�
	int arraySize = 8;
	int* myVariableSizedArray = new int[arraySize];
}

void printString(const std::string& myString)
{
	//const ���۷��� ���� ���
	std::cout << myString << std::endl;
}

double divideNumbers(double numerator, double denominator)
{
	//����ó��
	if (denominator == 0)
	{
		throw std::invalid_argument("Denominator cannot be 0. ");
	}
	return numerator / denominator;
}

int main()
{
	//const ���۷��� ���� ���
	/*std::string someString = "Hello World!";
	printString(someString);
	printString("Hellp World!");
	return 0;*/

	//����ó��
	try {
		std::cout << divideNumbers(2.5, 0.5) << std::endl;
		std::cout << divideNumbers(2.3, 0) << std::endl;
		std::cout << divideNumbers(4.5, 2.5) << std::endl;
	}
	catch (const std::invalid_argument& exception) {
		std::cout << "Exception caught: " << exception.what() << std::endl;
	}
}
