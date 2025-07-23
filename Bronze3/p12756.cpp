#include <iostream>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int arr[2][2];
    cin >> arr[0][0] >> arr[0][1];
    cin >> arr[1][0] >> arr[1][1];
    // 둘 중 한명이 0이 돨때까지 피 깎기
    while(arr[0][1]>0 && arr[1][1]>0){
        arr[0][1]-=arr[1][0];
        arr[1][1]-=arr[0][0];
    }
    if (arr[0][1]<=0 && arr[1][1]<=0){
        cout << "DRAW";
    }else if (arr[0][1]<=0){
        cout << "PLAYER B";
    }else if (arr[1][1]<=0){
        cout << "PLAYER A";
    }
}
