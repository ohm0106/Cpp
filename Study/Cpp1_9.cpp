// 불리언형
// 유래 : 논리법칙의 수학적인 표현을 개발한 연구소학자 조지 불의 이름에서 따옴. 

// - true, false 를 표현하는 타입
// 1byte (usually) 표준에 따로 사이즈가 정해져있진않지만 통상적으로.. 

// 정수 -> 불리언으로 전환이 될때는 
// 0 이 아닌 모든 값 -> true 
// 0 일경우 -> false;


#include <iostream>

using namespace std;

int main() {
	bool b0 = 0 == 0;
	bool b1 = 0 < 1;
	bool b2 = 0 > 2;

	cout.setf(ios_base::boolalpha); // cout 의 플래그 세팅 ( boolean 을 직관적으로 프린팅 하기 위해 )
	cout << "b0 : " << b0 << endl;
	cout << "b1 : " << b1 << endl;
	cout << "b2 : " << b2 << endl;

}