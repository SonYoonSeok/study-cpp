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
//	val += 3; // �������� val�� �� 3 ����
//	::val += 7; // �������� val�� �� 7 ����
//}
//
//int main()
//{
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	namespace ABC = AAA::BBB::CCC; //  AAA::BBB::CCC�� ABC��� ��Ī�� �ο�
//	cout << ABC::num1 << endl;
//	cout << ABC::num2 << endl;
//}