#include <iostream>

using namespace std;

int main() {

	int x(1), y = 2, z;

	z = 3;

	std::cout << x << std::endl; // ::  = namespace 를 말함 앞에 적힌 std 안에 내제되어있는 cout 및 endl를 사용하겠다는 의미  
	std::cout << y << std::endl; 
	std::cout << z << std::endl; // cout : character out , endl : endline


	cout << z << endl; 


	// int 연산 ------------------------------- 
	int num0 = 1; 
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;
	


	cout << "num0 = " << num0 << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl; 
	cout << "num3 = " << num3 << endl;
	// 리터럴 : 직접 입력 하는 문자열 ( 표현을 할 수 있는 형태 )  ------------------------------- 
	int num4 = 11; // 10진수 
	int num5 = 011;  // 8 진수 
	int num6 = 0b11; // 2 진수 b: 바이널  
	int num7 = 0x11; // 16 진수  x  : 헥사(?) 


	cout << "num0 = " << num4 << endl;
	cout << "num1 = " << num5 << endl;
	cout << "num2 = " << num6 << endl;
	cout << "num3 = " << num7 << endl;

	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;
	long* longPointer = &longNum;


	cout << "intPointer = " << intPointer << endl;
	cout << "intPointer(Size Of) = " << sizeof(intPointer) << endl; // 해당 변수의 크기를 알 수 있음. 

	cout << "longPointer = " << longPointer << endl;
	cout << "longPointer(Size Of) = " << sizeof(longPointer) << endl; // 해당 변수의 크기를 알 수 있음. // 서버의 환경에 따라 변수 사이즈가 다름 

	// 크기 고정을 하기 위해 아래와 같이 써줄 수 있음. 

	int8_t num8 = 0;
	int16_t num16 = 0;
	int32_t num32 = 0;

	cout << "num8 = " << sizeof(num8) << endl;
	cout << "num16 = " << sizeof(num16) << endl;
	cout << "num32 = " << sizeof(num32) << endl;

}