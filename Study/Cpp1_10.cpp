// 입출력 
//  1. printf : c++ 이 아닌 c 언어의 출력 방식. 
//				하지만, print에 사용되는 형식 문자열이 다른 언어에도 사용되기도 하고 널리 사용됨. 
//				때문에 알아두면 편함. 

// Prints formatted output to stdout - > 형식화된 아웃풋을 stdout 에 출력한다


//	1) Format string 형식 문자열
//		- Format specifier 가 포함된 문자열 
//		- 최종 문자열 형태는 Format specifier 의 부분이 확정되어야 결정이 된다. 
//		- printf의 첫번째 인자 

//	2) Format specifier 형식 지정자 
//		- %d, %o 등 특수한 형태로 해당 서식의 형태를 결정 해준다. 

#include<cstdio> // = stdio.h
#pragma warning(disable: 4996)

int main() {
	// %d %i : 10진수
	printf("%d + %d = %i\n", 2,3, 2+3); // "%d + %d = %i" : 형식 문자열 %d , %i : 형식 지정자

	// %u : unsigned integer
	printf("%u \n", -1);

	// %c : single char
	printf("%c \n", 'a');

	// %f : float
	printf("%f-%f = %1f\n", 2.0, 3.0f, -1.0f); //printf 는 가변 인자이기 때문에 뒤에 오는 모든 f,l,1f는 double형으로 승급됨.

	//  %o : 8진수 ,%x : 16진수 x 와 X 차이 : 대.소문자
	printf("%o + %x = %X\n", 10, 10, 10);

	// %hh :  1byte  %hhx :  16진수 
	printf("%hhx \n", 255); // 16진수 최대값 256 : ff overflow 시 0 으로 나타남. 

	// %0(숫자)(형) : 숫자만큼 전체 개수를 맞춰줌. (빈자리는 0으로 대신함. ) 
	// 실수형은 무조건 printf로 출력 시 자릿수 6자리를 출력 함. 
	printf("%10d\n", 1); // 공백은 빈칸으로 (오른쪽)
	printf("%-10d\n", 1); // 공백은 빈칸으로 (왼쪽)
	printf("%010d\n", 1); 
	printf("%010d\n", -1);
	printf("%010f\n", 1.1);
	printf("%010f\n", -1.1);

	printf("%010.1f\n", 1.1); // 소숫점 부터는 1자리로 표현한다는 뜻. 

	// % 출력시 
	printf("%%\n"); 

	//콘솔 화면은 "stdout" 에 연결되어있다. 
	freopen("output.txt", "w", stdout); // 해당 로직을 사용하게 되면, 
	//콘솔 화면이 아니라 지정된 파일로 연결이 되게 해주겠다는 의미 ( text file 이 없으면, 생성됨 ) 
	//"w" : 이 파일에 쓰기를 하겠다고 알려주는 것. 
	printf("hello world!");
}