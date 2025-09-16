#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;
    long p=1;
    int cnt=0;
    cin >> n;
    for (int i=2;i<=n;i++){
        p*=i;
        while (p%10==0){
            cnt++;
            p/=10;
        }
        // 뒷부분이 0이 아니면 카운트 멈춤
        // 굳이 앞부분 신경쓸 필요 없어서 p에 제한 걸어둠
        p %= 1000000000;
    }
    
    cout << cnt;
}
