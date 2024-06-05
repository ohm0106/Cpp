// 기수 정렬 (Radix Sort )

#include<iostream>
#include<queue>
#include<cstdlib>

using namespace std;

int main(){

    int data[] = {13,56,68,23,44,98,23,12};
    
    radixSort(data, 99,data.size());

}

void radixSort(int *data, int max, int size){
    queue<int> *q = new queue<int>[10]; // 큐 생성
    int radix = 1; // 최대 자릿수

    while(true){ // 가장 큰 수의 자릿수 확인 . 
        if(radix > max) break;
        radix *= 10; 
    }

    for(int cipher = 1; cipher < radix; cipher *= 10){ // cipher : 자릿수 
        // Queue push
        for(int i = 0 ; i < size ; i++){
            int value = (data[i]/cipher) %10;
            q[value].push[data[i]];
        }

        // Queue Pop and push data in array
        int index =0 ;
        for(int i = 0 ; i< 10 ; i++){
            while (!q[i].empty())
            {
                data[index] = q[i].front();
                q[i].pop();
                index++;
            }
            
        }
    }
}