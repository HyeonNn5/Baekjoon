#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,k,n;
    cin >> t;
    int apment[15][15]={0,};
    for(int i=1;i<15;i++){
        apment[0][i]=i;
    }
    for(int i=1;i<15;i++){
        for(int j=1;j<15;j++){
            apment[i][j]=apment[i][j-1]+apment[i-1][j];
        }
    }
    for (int i=0;i<t;i++){
        cin >> k >> n;
        cout << apment[k][n] << "\n";
    }
    
}
// 0층  1  2  3  4  5  6  7  ...
// 1층  1  3  6 (k층 n-1호 + k-1층 n호)
// 2층  1  4  10
