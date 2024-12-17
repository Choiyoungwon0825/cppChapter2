// 얼마나 많은 벽지가 필요한가 계산
#include <iostream>

using namespace std;

int main()
{
	double height = 0.0, width = 0.0, length = 0.0; // 방의 크기
	double perimeter = 0.0;							// 방의 둘레

	const double rollWidth = 21.0; // 표준 롤의 폭
	const double rollLength = 12.0 * 33.0; //표준 롤의 길이(33ft..)

	int strips_per_roll = 0;	// 한 롤에 있는 줄무늬의 개수
	int strips_reqd = 0; // 필요한 줄무늬의 개수
	int nrolls = 0;	// 롤의 전체 개수

	cout << "Enter the height of the room in inches : ";
	cin >> height;

	cout << endl;
	cout << "Now enter the length and width in inches : ";
	cin >> length >>width;

	strips_per_roll = rollLength / height; // 롤 안에 있는 줄무늬 개수 계산
	perimeter = 2.0*(length*width);			// 방의	둘레를 계산
	strips_reqd = perimeter / rollWidth;	// 필요한 총 줄무늬를 얻는다
	nrolls = strips_reqd / strips_per_roll;	// 롤의 개수를 계산한다

	cout << endl
		<< "For your room you need " << nrolls << " rolls of wallpaper."
		<< endl;

	return 0;
}