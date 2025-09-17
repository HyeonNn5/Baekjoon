#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    queue<int> que;
    queue<int> res;
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        que.push(i);
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<k-1;j++){
            que.push(que.front());
            que.pop();
        }
        res.push(que.front());
        que.pop();
    }
    cout << "<";
    for(int i=1;i<n;i++){
        cout << res.front()<<", ";
        res.pop();
    }
    cout << res.front()<<">";
}
