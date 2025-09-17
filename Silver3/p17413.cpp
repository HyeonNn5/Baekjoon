#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
void stack_flush(stack<char> stack){
    while(!stack.empty()){
        res+=stack.top();
        stack.pop();
    }
}
 
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // 공백과 <> 단위로 끊어서 스택
    stack<char> stack;
    string str,res="";
    getline(cin, str);
    bool b=false;
    for (auto s: str){
        if (s=='<'){
            stack_flush(stack);
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
                stack_flush(stack);
                res+=s;
            }else{
                stack.push(s);
            }
        }
    }
    stack_flush(stack);
    cout << res;
}
