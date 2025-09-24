#include <iostream>
#include <unordered_map>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    unordered_map<string,string> pwd;
    for(int i=0;i<n;i++){
        string adress,password;
        cin >> adress >> password;
        pwd.insert(make_pair(adress,password));
    }
    for(int i=0;i<m;i++){
        string str;
        cin >> str;
        //first(key) second(value)
        cout << pwd.find(str)->second <<endl;
    }
}
