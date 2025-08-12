#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int n,k;
    cin >> n >> k;
    vector<int> p(n),s(n),d(n);

    // 입력 받기
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        cin >> d[i];
    }
    
    // s의 i 번 숫자를 d의 i에 있는 위치로 이동시키기
    for(int j=0;j<k;j++){
        for(int i=0;i<n;i++){
            p[d[i]-1]=s[i];
        }
        s=p;
    }

    for(int i=0;i<n;i++){
        cout << p[i] << " ";
    }
}
