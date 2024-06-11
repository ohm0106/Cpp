

//백준 10989 실버 5

// 계수 정렬 
// 숫자의 크기가 10000 이하 < 즉, 작은 숫자의 데이터를 저장하는 것이기 때문에 기수 정렬보다 계수 정렬이 더 적합하다. 

// 제약 조건
// 1. 입력 데이터가 양수여야 한다. 
// 2. 데이터의 크기가 매우 작아야 한다. ( 데이터의 사이즈와 무관 / 데이터 하나의 값들이 매우 작아야 한다는 말임.)
// 3. 자연수여야 한다. 

// 핵심 이론
// 1. 10,001 자리 크기의 배열을 선언 (데이터의 최대 크기 + 1 )
// 데이터를 인덱스로 보는 것 !!!!
// 2. 해당 데이터 인덱스 자리에 1을 증가 시켜준다. 
// 3. 0 ~ index 까지 반복하여 1 이상인 곳을 출력해준다. ( 데이터 값이 2면, 두번 출력!) while문으로 해줘도 될 듯?!?!
#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int count[10001] = {0}; // 0으로 초기화 
    int number = 0; // 현재의 수를 받는 값

    for(int i= 0 ; i < N; i++){
        cin >> number;
        count[number]++;
    }


    for(int i= 0; i < 10001 ; i++){
        if(count[i] != 0){
            for(int j = 0 ; j < count[i]; j++){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    

}