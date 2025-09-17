#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

 
int main(void){
    int n;
    cin >> n;
    double arr[n];
    string str;
    cin >> str;
    stack<double> st;
    double num;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(char c:str){
        if(c=='+'){
            double n2 = st.top(); st.pop();
            double n1 = st.top(); st.pop();
            st.push(n1+n2);
        }else if(c=='-'){
            double n2 = st.top(); st.pop();
            double n1 = st.top(); st.pop();
            st.push(n1-n2);
        }else if(c=='*'){
            double n2 = st.top(); st.pop();
            double n1 = st.top(); st.pop();
            st.push(n1*n2);
        }else if(c=='/'){
            double n2 = st.top(); st.pop();
            double n1 = st.top(); st.pop();
            st.push(n1/n2);
        }else{
            st.push(arr[c-'A']);
        }  
    }
    printf("%.2f",st.top());

}
