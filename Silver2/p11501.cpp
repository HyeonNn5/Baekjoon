#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int day,max=0;
        cin >> day;
        vector<int> v;
        for(int i=0;i<day;i++){
            int num;
            cin >> num;
            v.push_back(num);
        }
        long maxProfit=0;
        for(int i=day-1;i>=0;i--){
            if (v[i]>max){
                max=v[i];
            }else{
                maxProfit+=max-v[i];
            }
        }
        cout << maxProfit << endl;
    }
}
