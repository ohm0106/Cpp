//브루트 포스 알고리즘

/*
	#브루트 포스란? 

	직역하면, 무시한 힘을 갖는 알고리즘이라는 뜻으로, 완전 탐색 알고리즘의 한 종류 이지만 
	완전 탐색의 또 다른 이름으로 쓰이기도 한다. 

	모든 경우의 수를 전부 탐색하기 때문에 100% 정확성을 보장하지만, 
	모든 경우의 수를 전부 탐색하기 때문에, 높은 시간 복잡도를 갖는다. 

	#완전 탐색(Exhaustive Search) vs 브루트 포스(Brute Force) 
	둘의 차이는 거의 없기 때문에, 같은 의미로 쓰이기도 한다. 
	
	완전 탐색 알고리즘은 모든 경우의 수를 전부 탐색하는 방식의 알고리즘이며, 
	그 결과를 찾는 것보다 탐색한다는 과정을 중점으로 둔다. 

	브루트 포스 알고리즘은 이와 다르게 결과를 찾는 것에 중점을 둔다.

*/

// 아래는 예시이다. 

#include <iostream>

using namespace std;

void printDivisor(int);

int main() {
	printDivisor(50);

	return 0;
}

void printDivisor(int x) {
	for (int divisor = 1; divisor <= x; divisor++) {
		if (x % divisor == 0) cout << divisor << endl;
	}
}