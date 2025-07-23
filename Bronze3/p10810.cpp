#include <iostream>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,m;
    cin >> n >> m;
    // 배열 0으로 초기화
    // 바구니에 공 안넣으면 0 출력이기 때문
    int basket[n]={0,};

    // i번 바구니부터 j번 바구니까지에 k 숫자 넣기
    for (int a=0;a<m;a++){
        int i,j,k;
        cin >> i >> j >> k;
        for (int b=i-1;b<j;b++){
            basket[b]=k;
        }
    }

    for (int i=0;i<n;i++){
        cout << basket[i] <<" ";
    }

}
