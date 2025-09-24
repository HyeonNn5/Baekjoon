#include <iostream>
#include <cmath>

using namespace std;

void xy(int &num, int m){
    for (int i=0;i<m;i++){
        int a;
        cin >> a;
        num+=a*pow(10,m-(i+1));
    }
}
int check(int arr[], int &x, int &y,int &m , int &n){
    int cnt=0;
    for(int i=0;i<n;i++){
        int num=0;
        int index=i;
        for (int j=0;j<m;j++){
            num+=arr[index]*pow(10,m-(j+1));
            index=(index+1)%n;
        }
        if (num>=x && num<=y) cnt++;
    }
    return cnt;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int n,x=0,y=0,m,start;
        cin >> n >> m;
        xy(x,m);
        xy(y,m);
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << check(arr,x,y,m,n)<< endl;
    }
    
}
