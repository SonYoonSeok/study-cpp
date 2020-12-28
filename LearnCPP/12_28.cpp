#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 1~5의 숫자를 Vector에 저장
	vector<int> v1;
	for (int i = 1; i <= 5; i++)
		v1.push_back(i);

	// Iterator로 Vector의 아이템을 출력
	// begin() : 첫번째 위치의 Iterator를 리턴
	// v1.end() : 마지막 아이템 다음 위치의 Iterator를 리턴
	for (auto i = v1.begin(); i != v1.end(); ++i)
		cout << *i << " ";

	// 반대 방향으로 아이템을 출력
	// rbegin(), rend()는 역순(reverse)의 Iterator를 리턴
	cout << "\n";
	for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
		cout << *ir << " ";

	// 배열처럼 Vector[index] 으로 아이템 출력
	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	// Vector.at(index)로 아이템 출력
	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";

	return 0;
}
