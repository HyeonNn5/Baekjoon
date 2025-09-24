#include <iostream>
#include <unordered_map>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    //해시맵
    unordered_map<string,string> pwd;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin >> s1 >> s2;
        pwd.insert(make_pair(s1,s2));
    }
    for(int i=0;i<m;i++){
        string str;
        cin >> str;
        cout << pwd.find(str)->second <<endl;
    }
}
