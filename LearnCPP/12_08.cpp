//#include <iostream>
//#include <array>
//#include <vector>
//#include <string>
//#include <initializer_list>
//
//void Struct_binding()
//{
//	//Structing binding
//	std::array<int, 3> values = { 11,22,33 };
//	auto [x, y, z] = values;
//	std::cout << x << y << z << std::endl;
//
//	struct Point { double mX, mY, mZ; };
//	Point point;
//	point.mX = 1.0; point.mY = 2.0; point.mZ = 3.0;
//	auto [mx, my, mz] = point;
//	std::cout << mx << my << mz << std::endl;
//
//}
//
//void Range_Based()
//{
//	//Range Based for
//	std::array<int, 4> arr = { 1, 2, 3, 4 };
//	for (int i : arr)
//	{
//		std::cout << i << std::endl;
//	}
//}
//
//int InitializerList(std::initializer_list<int> lst)
//{
//	//Initializer List
//	int total=0;
//	for (int value : lst)
//		total += value;
//	return total;
//}
//
//int main()
//{ 
//	std::cout << InitializerList({ 1, 2 ,3 });
//}
