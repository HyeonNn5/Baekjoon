#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,m;
    cin >> n >> m;
    int basket[n];
    for(int i=0;i<n;i++){
        basket[i]=i+1;
    }
    int i,j;
    for (int k=0;k<m;k++){
        cin >> i>>j;
        // 노가다
        //int temp=basket[i];
        //basket[i]=basket[j];
        //basket[j]=temp;

        // 함수 사용
        swap(basket[i-1],basket[j-1]);
    }
    for(int i=0;i<n;i++){
        cout << basket[i] << " ";
    }
}
