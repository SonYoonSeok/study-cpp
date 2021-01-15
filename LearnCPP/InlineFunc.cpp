//#include <iostream>
//
//inline int SQUARE(int x) // inline함수는 컴파일러에 의해서 처리가 된다.
//{
//	return x * x;
//}
//
// 인라인함수는 매크로함수의 단점을 보완하지만 자료형에 의한 데이터 손실이 발생한다.
//
//template <typename T> // 템플릿을 사용하면 이를 보완할 수 있다.
//inline T SQUARE(T x)
//{
//	return x * x;
//}
//
//int main()
//{
//	std::cout << SQUARE(5.5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//}