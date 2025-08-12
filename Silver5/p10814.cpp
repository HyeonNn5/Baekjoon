#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Member{
public:
    int age;
    string name;
    
public:
    Member(){}
    Member(int age,string name){
        this->age=age;
        this->name=name;
    }
    void p(){
        cout << age << " " << name << "\n";
    }

};
bool compare(Member a, Member b){
    return a.age < b.age;
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    vector<Member> members;

    for (int i=0;i<n;i++){
        int num;
        string str;
        cin >> num >> str;
        members.push_back(Member(num,str));
    }
    
    // 그냥 sort는 정렬 하면서 원래 순서가 바뀔 수 있음
    stable_sort(members.begin(),members.end(),compare);

    for(auto m:members){
        m.p();
    }
}
