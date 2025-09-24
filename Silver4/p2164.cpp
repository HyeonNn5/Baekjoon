#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    queue<int> q;
    int n,cnt=0;
    cin >>n;
    
    for( int i=0;i<n;i++){
        q.push(i+1);
    }
    // 0. 제일 위에 있는 카드를 바닥에 버린다
    // 1. 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다
    while(q.size()>1){
        if(cnt==0){
           q.pop(); 
        }if(cnt==1){
            q.push(q.front());
            q.pop();
        }
        cnt=(cnt+1)%2;
    }
    cout << q.front() << endl;


}
