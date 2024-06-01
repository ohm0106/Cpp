
// - Unsigned ( 부호 없는 )
// 8 bit max value = 255
// 16 bit max value = 65535
// 32 bit max value = 4294967295

#include <iostream>
#include <numeric>

using namespace std;

int main() {
	cout << (int) numeric_limits<uint8_t> ::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;
	cout << numeric_limits<uint32_t>::max() << endl;
	cout << numeric_limits<uint64_t>::max() << endl;


	\
	cout << numeric_limits<int16_t>::max() << endl;
	cout << numeric_limits<int32_t>::max() << endl;
	cout << numeric_limits<int64_t>::max() << endl;
}


// - Signed 부호 있는 
// Most Significant Bit ( MSB ) = 부호를 관리 

// 8 bit max value = 127
// 16 bit max value = 32767
// 32 bit max value = 2147483647