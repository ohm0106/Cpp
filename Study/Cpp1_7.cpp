/*
	float �� �Ǽ��� ǥ���Ѵ�. ( �ε��Ҽ��� = �Ҽ����� �����δٴ� ��.)

	�ε� �Ҽ���		ũ��		
	float			32			
	double			64
	long double		64~ 128

*/

#include<iostream>
#include <cfloat> // ���Ƿ�

using namespace std;
int main() {
	float num0 = 1.5;
	float num1 = num0 * 1.5;
	float num2 = num0 / 2;
	float num3 = num0 - 3;

	cout << "Num 0 : " << num0 << endl;
	cout << "Num 1 : " << num1 << endl;
	cout << "Num 2 : " << num2 << endl;
	cout << "Num 3 : " << num3 << endl;

	//------------------------
	float num4 = 1.0;
	double num5 = 1.0; 
	long double num6 = 1.0;
	// ���̻簡 ���� ��� double�� ��. 

	float num7 = 1.0f;
	double num8 = 1.0;
	long double num9 = 1.0l;

	cout << " -- �ε� �Ҽ��� ���� �� ũ�� �� -- " << endl;
	cout << "Num 4 : " << sizeof(num4) << endl; // 4
	cout << "Num 5 : " << sizeof(num5) << endl; // 8 
	cout << "Num 6 : " << sizeof(num6) << endl; // 8
	cout << " -- ���̻簡 ���� ��� -- " << endl;
	cout << "Num 7 : " << sizeof(num7) << endl; // 4
	cout << "Num 8 : " << sizeof(num8) << endl; // 8 
	cout << "Num 9 : " << sizeof(num9) << endl; // 8
	//------------------------
	/*
		�ε� �Ҽ��� 
		-�Ǽ��� ǥ���� �� �Ҽ����� ��ġ�� ������Ű�� �ʰ� �����ο� �����θ� ��Ÿ���� ǥ�� 

		|1|1|0|1|0|1|1|0|0|0|0|1|1|1|0|1|1|0|0|0|1|1|1|1|0|1|0|1|0|1|0|1|0|0|0|
		��|	������(8 bits)|					������(23 bits) 
		ȣ|				  |

		ex ) 
		-118.625
		= -(2^6 + 2^5 + 2^4 + 2^2 + 2^1 + 2^(-1) + 2^(-3))
		= -1110110.101(2)
		= -1.110110101(2) * 10^6 
		 ��ȣ| ������     | ������

	*/

	unsigned int num10;
	float num11 = -118.625f;
	memcpy(&num10, &num11, sizeof(num11)); // num11�� �ִ� ���� num10 ���� ī�� (�޸� �� �ִ� ������ ���� ī��)
	cout << " -- �ε��Ҽ����� ǥ���� �޸𸮻� � ������ ǥ��Ǵ��� �� -- " << endl;
	cout << "Num 10 : " << num10 << endl; // 3270328320
	cout << "Num 11 : " << num11 << endl; // -118.625

	// ���� ����
	/*
		10���� 0.1 �� 2������ ǥ���� �� ���� ( 0.2 �� ��������) 
		�ٻ��� ���� �޸𸮿� �α� ������ 0.1���� ������� ��������, �ٻ簪�� �� �ٸ� �� �ִ�. 
		�Ʒ��� �� ��.

		��, �� �Ҽ����� ������ �ٸ����� �Ǵ��� �� �����ؾ��Ѵ�. ( ������ �ֱ� ������ )
	*/
	float num12 = 0.1f;
	float num13 = 0.02f * 5.0f;
	cout << " -- �ε��Ҽ��� ��� �� ���� ���� -- " << endl;
	cout.precision(64);
	cout << num12 << endl; // 0.1      0.1000000015
	cout <<  num13 << endl;// 0.1	   0.09999999404

	if (num12 == num13)
		cout << "num12 Equal num13" << endl; // ���� �ȵ�.
	if(num12 == 0.1f)
		cout << "num12 Equal 0.1f" << endl; // �����.
	if(num12 == 0.1)
		cout << "num12 Equal 0.1" << endl; // ���� �ٸ��� ������ ���� �ȵ�. 
	if (num12 == 0.1L)
		cout << "num12 Equal 0.1L" << endl; // ���� �ٸ��� ������ ���� �ȵ�.  

	cout << 0.1f << endl;
	cout << 0.1 << endl;
	cout << 0.1L << endl;

	/*
		�񱳸� ������ �ؾ��Ѵٸ� 
		'���Ƿ�'�� �̿��� ��. 

		������, �ش� �ذ���� �׻� ���� ���� �ƴ�. * ���Ƿ� : 1�� 1 ���� ū ���� ���� ���� 

		�������� �ƹ��� �۴��� ������ �Ǹ�, �������� Ŀ�� �� �ִ�,. ( �ش� ������ 1_8)
	*/

	if(fabs(num0 - num1) <= FLT_EPSILON)
		cout << "num12 likes num13" << endl; // �����. 
}