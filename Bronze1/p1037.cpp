#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    // 진짜 약수 1개인 제곱수일때도 arr[0]*arr[0] = 제곱수
    cout << arr[0]*arr[n-1];
}
