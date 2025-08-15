#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void full_house(vector<int> vc){
    if(vc[0]==vc[1] && vc[3]==vc[4]){
        if(vc[2]==vc[0] || vc[2]==vc[4]){
            cout << "Yes";
            return ;
        }
    }
    cout << "No";
    return ;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    vector<int> v(5);
    for (int i=0;i<5;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    full_house(v);
}
