#include<iostream>
#include<cfloat>

using namespace std;

int main() {
	float num0 = 1.0f;
	float num1 = 0.0f;

	for (int i = 0; i < 1000; i++) {
		num1 = num1 + 0.001;
	}

	if (num0 == num1)
		cout << "Equal 0" << endl;
	if (fabsf(num0 - num1) <= FLT_EPSILON) // �������� ũ�ٸ�, ���� �޶����� ������ �̷� �� �����ڸ� �� �� ����
		cout << "Equal 1" << endl;

	//FLT_EPSILON	---------------------------------
	unsigned int num2 = 0b00111111100000000000000000000000; // 1
	float num3;
	memcpy(&num3, &num2, sizeof(num2)); // memcpy : memory + copy ��, �޸��� ���� �����ϴ� ����� �ϴ� �Լ�.

	cout.precision(64);
	cout << "num 3 : " << num3 << endl;

	unsigned int num4 = 0b00111111100000000000000000000001; // 1���� ũ���� ���� ���� �� 
	float num5;
	memcpy(&num5, &num4, sizeof(num4)); // memcpy : memory + copy ��, �޸��� ���� �����ϴ� ����� �ϴ� �Լ�.

	cout << "num 5 : " << num5 << endl;

	cout << num5 - num3 << endl;
	cout << FLT_EPSILON << endl; // ���Ƿ��� " 1 - (1���� ũ���� ���� ���� �� ) " ���̴�. 

	float num6 = 1.0f;

	unsigned int num7 = 0b00110100000000000000000000000000; 
	
	float num8;
	memcpy(&num8, &num7, sizeof(num7));

	cout.precision(64);
	cout << num6 + num8 << endl;

	//�ε��Ҽ��� �ִ밪 :  cfloat�� ���� (FLT_MAX)
	float num9 = FLT_MAX;

	cout << num9 << endl;

	float num10;
	unsigned int num11_2 = 0b01111111100000000000000000000000; // inf ��� (���Ѵ�� ǥ��)
	unsigned int num11_1 = 0b01111111111111111111111111111111; // nan ��� (�������� ��Ʈ�� �� ���� ������ �ٸ� ����� ��.)
	unsigned int num11 = 0b01111111011111111111111111111111; // ���� �������� �ϳ� 0���� �����ؾ��� 

	memcpy(&num10, &num11, sizeof(num11));
	
	cout << num10 << endl;

	//�ε��Ҽ��� �ּҰ� : cfloat�� ���� (FLT_MIN)

	float numMin = FLT_MIN;
	unsigned int ifltMin;
	memcpy(&ifltMin, &numMin, sizeof(numMin));

	float numTrueMin = FLT_TRUE_MIN; // FLT_MIN���� ���� ��
	unsigned int ifltTrueMin;
	memcpy(&ifltTrueMin, &numTrueMin, sizeof(numTrueMin));

	cout << numMin << endl;
	cout << numTrueMin << endl;

	cout << ifltMin << endl; //8388608 : 0000,0000,1000,0000,0000,0000,0000,0000 (�����ο� 1�� ����. ) = 10^126(2)
	cout << ifltTrueMin << endl; // 1 : 0000,0000,1000,0000,0000,0000,0000,0001 = 10^-126(2)

}