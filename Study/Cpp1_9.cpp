// �Ҹ�����
// ���� : ����Ģ�� �������� ǥ���� ������ ���������� ���� ���� �̸����� ����. 

// - true, false �� ǥ���ϴ� Ÿ��
// 1byte (usually) ǥ�ؿ� ���� ����� ���������������� ���������.. 

// ���� -> �Ҹ������� ��ȯ�� �ɶ��� 
// 0 �� �ƴ� ��� �� -> true 
// 0 �ϰ�� -> false;


#include <iostream>

using namespace std;

int main() {
	bool b0 = 0 == 0;
	bool b1 = 0 < 1;
	bool b2 = 0 > 2;

	cout.setf(ios_base::boolalpha); // cout �� �÷��� ���� ( boolean �� ���������� ������ �ϱ� ���� )
	cout << "b0 : " << b0 << endl;
	cout << "b1 : " << b1 << endl;
	cout << "b2 : " << b2 << endl;

}