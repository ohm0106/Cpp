#include <iostream>

using namespace std;

int main() {

	int x(1), y = 2, z;

	z = 3;

	std::cout << x << std::endl; // ::  = namespace �� ���� �տ� ���� std �ȿ� �����Ǿ��ִ� cout �� endl�� ����ϰڴٴ� �ǹ�  
	std::cout << y << std::endl; 
	std::cout << z << std::endl; // cout : character out , endl : endline


	cout << z << endl; 


	// int ���� ------------------------------- 
	int num0 = 1; 
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;
	


	cout << "num0 = " << num0 << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl; 
	cout << "num3 = " << num3 << endl;
	// ���ͷ� : ���� �Է� �ϴ� ���ڿ� ( ǥ���� �� �� �ִ� ���� )  ------------------------------- 
	int num4 = 11; // 10���� 
	int num5 = 011;  // 8 ���� 
	int num6 = 0b11; // 2 ���� b: ���̳�  
	int num7 = 0x11; // 16 ����  x  : ���(?) 


	cout << "num0 = " << num4 << endl;
	cout << "num1 = " << num5 << endl;
	cout << "num2 = " << num6 << endl;
	cout << "num3 = " << num7 << endl;

	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;
	long* longPointer = &longNum;


	cout << "intPointer = " << intPointer << endl;
	cout << "intPointer(Size Of) = " << sizeof(intPointer) << endl; // �ش� ������ ũ�⸦ �� �� ����. 

	cout << "longPointer = " << longPointer << endl;
	cout << "longPointer(Size Of) = " << sizeof(longPointer) << endl; // �ش� ������ ũ�⸦ �� �� ����. // ������ ȯ�濡 ���� ���� ����� �ٸ� 

	// ũ�� ������ �ϱ� ���� �Ʒ��� ���� ���� �� ����. 

	int8_t num8 = 0;
	int16_t num16 = 0;
	int32_t num32 = 0;

	cout << "num8 = " << sizeof(num8) << endl;
	cout << "num16 = " << sizeof(num16) << endl;
	cout << "num32 = " << sizeof(num32) << endl;

}