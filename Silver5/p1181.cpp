#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
class Word{
public:
    string str;
    int l;

public:
    Word(){}
    Word(string str,int l){
        this->str=str;
        this->l=l;
    }
    string get_str(){
        return str;
    }
};
bool compare(Word a, Word b){
    if(a.l==b.l){
        return a.str < b.str;
    }else{
        return a.l < b.l;
    }
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;
    cin >> n;

    vector<Word> words;
    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        words.push_back(Word(s,s.length()));
    }

    sort(words.begin(), words.end(),compare);

    string temp="";
    for(auto w:words){
        string s=w.get_str();
        // 중복 단어 체크
        if (s!=temp){
            cout << s << "\n";
        }
        temp=s;
    }
}
