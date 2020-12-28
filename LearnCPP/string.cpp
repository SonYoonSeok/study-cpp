//#include <iostream>
//using namespace std;
//
//char* copyString(const char* str)
//{
//	//기존의 C언어는 '\0'를 신경쓰지 않고 복사를 해버리면 메모리 오류가 발생한다
//	//char* result = new char[strlen(str)]; //한칸 부족
//	char* result = new char[strlen(str) + 1]; //지저분하다
//	strcpy(result, str);
//	return result;
//
//	//sizeof와 strlen의 차이점
//	char text[] = "abcdef";
//	size_t s1 = sizeof(text); //7
//	size_t s2 = strlen(text); //6
//	//sizeof는 '\0'까지 포함한다.
//	//따라서 문자의 길이를 알고자 할 때 sizeof가 아닌 strlen을 사용해야한다.
//	
//}
//
//int main()
//{
//
//}