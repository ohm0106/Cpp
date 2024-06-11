#include<iostream>

using namespace std;

void eratos(int n);

void main(){

    int n;
    cin >> n; 
    eratos(n);

}

void eratos(int n){
    if(n<=1) return;

    bool* PrimeArray = new bool[n+1]; // n+1 하는 이유 : 인덱스 0과 1을 사용하지 않기 때문.
    //(소수일 경우 true , 소수가 아닐 경우 false)

    //초기값 셋팅 : 모두 true로 줌.
    for(int i = 2 ; i <= n ; i++){
        PrimeArray[i] = true;
    }

    /*
        에라토스테네스의 체에 맞게 소수를 구함.

        PrimeArray[i]가 true 이면, i 이후의 i 배수는 약수로 i를 가지고 있는 것이 되므로, i 이후의 i 배수에 대해 false 를 해준다.
        PrimaArray[i]가 false 이면, i는 이미 소수가 아니므로 검사할 이유가 없다. 

        또한, i * k (k < i) 까지는 이미 검사가 되어있으므로, 이중 for문의 시작값인 j는 i*2 에서 i*i로 개선가능하다.  
    */
   
    for(int i = 2 ; i * i <= n ;i++){
        if(PrimeArray[i])
        {
            for(int j = i * i ; j <= n ; j += i){
                PrimeArray[j] = false;
            }
        }    
    }
}