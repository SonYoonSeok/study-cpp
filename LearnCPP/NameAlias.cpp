//#include <iostream>
//using namespace std;
//
//int val = 100;
//
//namespace AAA
//{
//	namespace BBB
//	{
//		namespace CCC
//		{
//			int num1, num2;
//		}
//	}
//}
//
//int SimpleFunc()
//{
//	int val = 20;
//	val += 3; // 지역변수 val의 값 3 증가
//	::val += 7; // 전역변수 val의 값 7 증가
//}
//
//int main()
//{
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	namespace ABC = AAA::BBB::CCC; //  AAA::BBB::CCC에 ABC라는 별칭을 부여
//	cout << ABC::num1 << endl;
//	cout << ABC::num2 << endl;
//}