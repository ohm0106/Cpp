//큌 정렬 Quick Sort


// 백준 온라인 저지 11004 (실버 5) 
// Q ) N개가 주어진다. A를 오름차순 정렬했을 때 앞에서부터 K번째 있는 수를 구하는 프로그램을 작성해라 (제한시간 2초)
// 입력 : 1번 째 줄에 N(1 <= N <= 5,000,000) 과 K (1 <= K <= N), 2번 째 줄에 A1,A2,...,AN이 주어진다. (-10^9 <= Ai <= 10^9)
// 출력 : K번째 오는 숫자를 구해라. 

//---------------------------------------------
// 시간 복잡도 구하기 
// - 데이터의 크기 범위를 확인 ( N 이 500만 ) => 1초 사용 시 100,000,000 까지 가능한데, 이미 N의 값 즉, 입력값의 크기가 500만 이기 때문에 O(N^2)인 
// 버블 정렬, 삽입, 선택은 사용하지 못한다.  

//---------------------------------------------
// 사실 Sort함수를 사용하면 N^2가 아니기때문에 해당 문제는 Sort함수로 풀 수 있지만, 연습을 위해 퀵 정렬로 푸는 것...! 
//
// **** Quick 정렬은 pivot 선택에 따라 최악의 시간 복잡도가 n^2이므로 해당 문제는 병합 정렬을 이용하는게 더 안전 
// But. Quick 정렬 풀 수 있으며 해당 알고리즘으로 풀 때의 유리함은 있음. 
//---------------------------------------------

/*
< 해당 문제의 pivot 을 정하는 방법 >
- pivot == k  k번째 수를 찾은 것으로 알고리즘을 종료 
- pivot > k pivot 의 왼쪽 부분에 K가 있으므로, 왼쪽 (S~ pivot -1)만 정렬을 수행한다.
- pivot < k pivot의 오른쪽 부분에 K가 있으므로, 오른쪽 (pivot + 1 ~ E )만 정렬을 수행한다. 
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int partition(vector<int> &A, int S ,int E );
void quickSort(vector<int> &A, int S, int E, int K);
void swap(vector<int> &A, int S ,int E );

int main(){
    // 최적화 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 입력 
    int N,K;
    cin >> N >> K;
    vector<int> A(N,0);

    for(int i =0 ; i < N ; i ++){
        cin >> A[i];
    }
    
    quickSort(A,0,N-1,K-1);

    cout<< A[K-1];    
}

/**
 * @brief 퀵 정렬 함수 
 * 
 * @param A k 인덱스에 들어오는 값을 찾기 위한 배열 
 * @param S Start 인덱스 
 * @param E End 인덱스 
 * @param K 찾고 싶은 인덱스 번호 
 */
void quickSort(vector<int> &A, int S, int E, int K){
    int pivot = partition(A,S,E);

    if(pivot == K){
        return ;
    }else if(pivot < K){
        //오른쪽만 보면 됨. 
        quickSort(A,S,pivot-1,K);

    }else if(pivot > K){
        // 왼쪽만 보면 됨. 
        quickSort(A,pivot+1,E,K);
    }
}

/**
 * @brief 피벗 구하기 
 * 
 * @param A 
 * @param S 
 * @param E 
 * @return pivot 값 
 */
int partition(vector<int> &A, int S ,int E ){

    if(S+1 == E) // 이미 많이 쪼개져서 2개만 있을 때는 for 문을 도는 것 보단, 바로 교환을 해주는 것. 
    {
        if(A[S] < A[E]) swap (A[S], A[E]); 
        return E;
    }

    //새로운 시작점(S), 끝점(E) , 기준점(pivot) Setting 
    int M = (S + E) / 2; // 시작 값과 끝 값의 중간 값을 구함. 
    swap(A,S,M); // pivot값을 맨 처음으로 가져오기. 
    int pivot = A[S];
    int i = S+1;
    int j = E;

    
    while(i <= j) {
        while (pivot < A[j]&& j > 0) j--; // pivot보다 끝값이 크고, 끝값이 0보다 클 때
        while (pivot > A[i]&& i < A.size()-1) i++; // pivot보다 시작값이 작고, A배열 사이즈 안넘을 때 
        if(i <= j) swap(A, i++, j--);
    }

    A[S] = A[j];
    A[j] = pivot; //다시 pivot을 중간 값으로 변경 

    return j; // j = pivot을 가리키는 index 
}

void swap(vector<int> &A, int S ,int E ){
    int temp = A[S];
    A[S] = A[E];
    A[E] = temp;
}

