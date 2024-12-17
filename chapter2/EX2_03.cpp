#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num1 = 1234, num2 = 5678;

	cout << setw(6) << num1 << setw(6) << num2; // set(n) n만큼의 폭으로 출력 3 = space 인듯?

	cout << endl << "This is output";
	cout << endl << "\tThis is output after a tab\n";
	cout << "dd" << setw(3) << "dd";

	// 이스케이프 시퀀스
	//\' 단일 인용 부호
	// \\ 백슬래시
	// \b 백스페이스
	// \t 탭
	// \" 이중 인용 부호
	// \? 물음표

	return 0;

}