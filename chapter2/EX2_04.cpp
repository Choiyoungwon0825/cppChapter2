// �󸶳� ���� ������ �ʿ��Ѱ� ���
#include <iostream>

using namespace std;

int main()
{
	double height = 0.0, width = 0.0, length = 0.0; // ���� ũ��
	double perimeter = 0.0;							// ���� �ѷ�

	const double rollWidth = 21.0; // ǥ�� ���� ��
	const double rollLength = 12.0 * 33.0; //ǥ�� ���� ����(33ft..)

	int strips_per_roll = 0;	// �� �ѿ� �ִ� �ٹ����� ����
	int strips_reqd = 0; // �ʿ��� �ٹ����� ����
	int nrolls = 0;	// ���� ��ü ����

	cout << "Enter the height of the room in inches : ";
	cin >> height;

	cout << endl;
	cout << "Now enter the length and width in inches : ";
	cin >> length >>width;

	strips_per_roll = rollLength / height; // �� �ȿ� �ִ� �ٹ��� ���� ���
	perimeter = 2.0*(length*width);			// ����	�ѷ��� ���
	strips_reqd = perimeter / rollWidth;	// �ʿ��� �� �ٹ��̸� ��´�
	nrolls = strips_reqd / strips_per_roll;	// ���� ������ ����Ѵ�

	cout << endl
		<< "For your room you need " << nrolls << " rolls of wallpaper."
		<< endl;

	return 0;
}