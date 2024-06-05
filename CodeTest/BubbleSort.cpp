//버블 정렬
//백준 온라인 저지 1377번 (골드 2 문제)

// 핵심 이론 > 버블 정렬의 이중 for 문에서 안쪽 for 문 전체를 돌 때, swap이 일어나지 않았다는 것은 이미 모든 데이터가 정렬됐다는 의미. 
// 안쪽 for 문 확인 방법 
// 1. swap 이 일어나는지 bool 값으로 저장하여 확인. 
// 2. 왼쪽으로 오는 데이터는 더이상 swap 이 되지 않는다. 즉, 특정 데이터가 안쪽루프에서 swap으로 왼쪽으로 이동할 수 있는 거리가 1이라는 뜻. 
//    (데이터의 정렬 전 index와 정렬 후 index를 비교해 왼쪽으로 많이 이동한 값) + 1 을 찾으면 이 문제를 해결 할 수 있다. 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    //최적화 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 

    int N;
    cin >> N; // N입력 
    vector<pair<int,int>> A(N); // 벡터에 인덱스를 사용하기 위해 pair를 사용. (인덱스 값이 변경되는 것이 민감할 경우 해당 내용 처럼 이차원 배열을 사용해도 됨!)

    for(int i = 0 ; i < N ; i++){
        cin >> A[i].first;
        A[i].second = i; // 인덱스 값
    }

    sort(A.begin(), A.end()); // 오름차순 정렬  

    int Max = 0; 
    for(int i = 0; i < N ; i++){
        if(Max < A[i].second - i) // 정렬 전 index - 정렬 후 index 
        {
            Max = A[i].second - i;
        }

    }

    cout << Max + 1 << endl; // +1 인 이유는 swap 이 일어나지 않는 반복문이 한 번 더 실행되는 것을 감안해 최대값이 1을 더하는 것. 
}