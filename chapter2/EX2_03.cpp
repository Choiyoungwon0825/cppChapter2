#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num1 = 1234, num2 = 5678;

	cout << setw(6) << num1 << setw(6) << num2; // set(n) n��ŭ�� ������ ��� 3 = space �ε�?

	cout << endl << "This is output";
	cout << endl << "\tThis is output after a tab\n";
	cout << "dd" << setw(3) << "dd";

	// �̽������� ������
	//\' ���� �ο� ��ȣ
	// \\ �齽����
	// \b �齺���̽�
	// \t ��
	// \" ���� �ο� ��ȣ
	// \? ����ǥ

	return 0;

}