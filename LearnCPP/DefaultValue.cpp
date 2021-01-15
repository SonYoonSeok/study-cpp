//#include <iostream>
//
//int BoxVolume(int length, int width, int height) //함수 오버로딩
//{
//	return length * width * height;
//}
//
//int BoxVolume(int length, int width) //함수 오버로딩
//{
//	return length * width * 1;
//}
//
//int BoxVolume(int length) //함수 오버로딩
//{
//	return length * 1 * 1;
//}
//
//int BoxVolume() //함수 오버로딩
//{
//	return 1 * 1 * 1;
//}
//
//int main(void)
//{
//	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
//	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
//	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
//	std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
//	return 0;
//}