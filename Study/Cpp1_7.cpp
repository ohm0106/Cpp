/*
	float 은 실수를 표현한다. ( 부동소수점 = 소수점이 움직인다는 것.)

	부동 소수점		크기		
	float			32			
	double			64
	long double		64~ 128

*/

#include<iostream>
#include <cfloat> // 엡실론

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
	// 접미사가 없을 경우 double이 됨. 

	float num7 = 1.0f;
	double num8 = 1.0;
	long double num9 = 1.0l;

	cout << " -- 부동 소수점 종류 및 크기 비교 -- " << endl;
	cout << "Num 4 : " << sizeof(num4) << endl; // 4
	cout << "Num 5 : " << sizeof(num5) << endl; // 8 
	cout << "Num 6 : " << sizeof(num6) << endl; // 8
	cout << " -- 접미사가 있을 경우 -- " << endl;
	cout << "Num 7 : " << sizeof(num7) << endl; // 4
	cout << "Num 8 : " << sizeof(num8) << endl; // 8 
	cout << "Num 9 : " << sizeof(num9) << endl; // 8
	//------------------------
	/*
		부동 소수점 
		-실수를 표현할 때 소수점의 위치를 고정시키지 않고 지수부와 가수부를 나타내어 표현 

		|1|1|0|1|0|1|1|0|0|0|0|1|1|1|0|1|1|0|0|0|1|1|1|1|0|1|0|1|0|1|0|1|0|0|0|
		부|	지수부(8 bits)|					가수부(23 bits) 
		호|				  |

		ex ) 
		-118.625
		= -(2^6 + 2^5 + 2^4 + 2^2 + 2^1 + 2^(-1) + 2^(-3))
		= -1110110.101(2)
		= -1.110110101(2) * 10^6 
		 부호| 가수부     | 지수부

	*/

	unsigned int num10;
	float num11 = -118.625f;
	memcpy(&num10, &num11, sizeof(num11)); // num11에 있는 값을 num10 으로 카피 (메모리 상에 있는 벨류를 직접 카피)
	cout << " -- 부동소수점의 표현이 메모리상 어떤 식으로 표출되는지 예 -- " << endl;
	cout << "Num 10 : " << num10 << endl; // 3270328320
	cout << "Num 11 : " << num11 << endl; // -118.625

	// 주의 사항
	/*
		10진수 0.1 은 2진수로 표현할 수 없다 ( 0.2 도 마찬가지) 
		근사한 값을 메모리에 두기 때문에 0.1으로 결과값이 나오더라도, 근사값일 뿐 다를 수 있다. 
		아래는 그 예.

		즉, 비교 소수점이 같은지 다른지를 판단할 때 조심해야한다. ( 오차가 있기 때문에 )
	*/
	float num12 = 0.1f;
	float num13 = 0.02f * 5.0f;
	cout << " -- 부동소수점 사용 시 주의 사항 -- " << endl;
	cout.precision(64);
	cout << num12 << endl; // 0.1      0.1000000015
	cout <<  num13 << endl;// 0.1	   0.09999999404

	if (num12 == num13)
		cout << "num12 Equal num13" << endl; // 실행 안됨.
	if(num12 == 0.1f)
		cout << "num12 Equal 0.1f" << endl; // 실행됨.
	if(num12 == 0.1)
		cout << "num12 Equal 0.1" << endl; // 형이 다르기 때문에 실행 안됨. 
	if (num12 == 0.1L)
		cout << "num12 Equal 0.1L" << endl; // 형이 다르기 때문에 실행 안됨.  

	cout << 0.1f << endl;
	cout << 0.1 << endl;
	cout << 0.1L << endl;

	/*
		비교를 무조건 해야한다면 
		'엡실론'을 이용할 것. 

		하지만, 해당 해결법이 항상 오른 것이 아님. * 엡실론 : 1과 1 보다 큰 가장 작은 정수 

		오차율이 아무리 작더라도 누적이 되면, 오차율이 커질 수 있다,. ( 해당 예제는 1_8)
	*/

	if(fabs(num0 - num1) <= FLT_EPSILON)
		cout << "num12 likes num13" << endl; // 실행됨. 
}