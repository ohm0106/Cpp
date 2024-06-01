#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void mergeSort(vector<int> &A,int S ,int E);

int main(){
    //최적화
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //입력
    int N;  // n = 배열의 크기 
    cin >> N;
    vector<int> A(N,0);

    for(int i = 0 ; i < N ; i++){
        cin >> A[i];
    }

    mergeSort(A,0,N-1);
    for(int i= 0 ; i < N ; i++){
        cout <<  A[i] << endl;
    }
}

void mergeSort(vector<int> &A,int S ,int E){
    vector<int> Temp(E,0);
    int i = S;
    int k = S;
    int mid = (S + E) / 2;
    int j = mid + 1;

    if(S >= E) return;

    //분할 
    mergeSort(A, S, mid);
    mergeSort(A, mid+1, E);

    while((i <= mid) && (j <= E)){ // 병합
        if(A[i] < A[j]) Temp[k++] = A[i++];
        else Temp[k++] = A[j++];
    }

    while(i<=mid) Temp[k++] = A[i++];
    while(j<=E) Temp[k++] = A[j++];

    for(i = S; i<=E ; i++){
        A[i] = Temp[i];
    }
}