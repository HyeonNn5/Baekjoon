#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

stack<char> st;
string res="";

void stack_flush(){
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
}
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // 공백과 <> 단위로 끊어서 스택
    string str;
    getline(cin, str);
    bool b=false;
    for (auto s: str){
        if (s=='<'){
            stack_flush();
            b= true;
        }else if(s=='>'){
            b=false;
            res+=s;
            continue;
        }
        if(b){
            res+=s;
        }else{
            if(s==' '){
                stack_flush();
                res+=s;
            }else{
                st.push(s);
            }
        }
    }
    stack_flush();
    cout << res;
}
