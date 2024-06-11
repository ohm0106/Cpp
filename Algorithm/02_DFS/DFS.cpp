// 백준 2023 골드 5

/*
 (문제)
    수빈이가 세상에서 가장 좋아하는 것은 소수이고, 취미는 소수를 이용해 노는 것이다. 
    요즘 수빈이가 가장 관심있어 하는 소수는 7331이다. 
    7331은 신기하게도 733도 소수, 73도 소수, 7도 소수이다. 즉, 왼쪽 부터 1자리, 2자리, 3자리, 4자릿수 모두 소수이다. 
    수빈이는 이런 소수를 신기한 소수라고 이름 붙였다.

    수빈이는 N자리 숫자중 어떤 수들이 신기한 소수인지 궁굼해졌다. 숫자 N이 주어졌을 때 N자리 숫자 중 신기한 소수를 모두 찾아보자.

(입력)
    1 <= N <= 8
*/

#include <iostream>
#include <vector>

using namespace std;

static int N;

void DFS(int number,int jarisu);
bool isPrime(int number);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    cin >> N;

    DFS(2, 1); // 파라미터 1 : 소수 파라미터 2 : 해당 소수의 자릿수
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}

void DFS(int number,int jarisu){

    if(jarisu == N) // 원하는 자릿수까지 옴.
    {
        //소수이면 출력
        if(isPrime(number)){
            cout << number << "\n";
        }
        return;
    }    
     
    for(int i = 1 ; i < 10 ; i++){
        if(i%2 == 0)
            continue;

        if(isPrime(number*10 + i)){
            DFS(number*10 + i, jarisu +1 );
        }
    }
}

bool isPrime(int number){

    for(int i = 2; i <= number/2 ; i++){
        if(number%i == 0)
            return false;
    }

    return true;
}