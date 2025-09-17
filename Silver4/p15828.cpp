#include <iostream>
#include <queue>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    queue<int> que;
    int n;
    cin >> n;
    int packet=0;
    while(1){
        cin >> packet;
        if (packet<0) break;
        if (packet==0){
            que.pop();
        }else{
            if(que.size()<n){
                que.push(packet);
            }
        }
    }
    if(que.empty()){
        cout << "empty";
    }else{
        while(!que.empty()){
            cout << que.front()<< " ";
            que.pop();
        }
    }
}
