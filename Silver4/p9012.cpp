#include <iostream>
#include <stack>

using namespace std;

string vps(string str){
    stack<char> st;
    for(char c : str){
        if(c == ')'){
            if(st.empty()==false && st.top() == '('){
                st.pop();
            }else{
                return "NO";
            }
        }else{
            st.push(c);
        }
    }
    if (!st.empty()){
        return "NO";
    }else{
        return "YES";
    }
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    string str;
    cin >> n;

    for (int i=0;i<n;i++){
        cin >> str;
        cout << vps(str) << endl;
    }
        
}
