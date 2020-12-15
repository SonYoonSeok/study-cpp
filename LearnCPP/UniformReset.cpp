//#include <iostream>
//
//struct CircleStruct
//{
//	int x, y;
//	double radius;
//};
//
//class CircleClass
//{
//public:
//	CircleClass(int x, int y, double radius)
//		: mX(x), mY(y), mRadius(radius) {}
//private:
//	int mX, mY;
//	double mRadius;
//};
//
////C++11 이전
//CircleStruct myCircle1 = { 10, 10, 2.5 };
//CircleClass myCircle2(10, 10, 2.5);
//
////C++11 이후
//CircleStruct myCircle3{ 10, 10, 2.5 };
//CircleClass myCircle4{ 10, 10, 2.5 };
//
////동적배열
//int* pArray = new int[4]{ 0, 1, 2 ,3 };