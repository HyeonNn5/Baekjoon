`#include <stack>`

```cpp
stack<type> stack;
```

---


**▷ 스택에 데이터 추가하기**

```
stack.push(element)
```

**▷ 스택에 데이터 삭제하기** 

```
stack.pop()
```

**▷ 스택의 탑 데이터 반환**

```
stack.top()
```

**▷ 스택의 사이즈 반환**

```
stack.size()
```

**▷ 스택이 비어있는 지 확인** 

리턴값 : Boolean

```
stack.empty()
```

**▷ 스택 SWAP  : 두 스택의 내용 바꾸기**

```
swap(stack1 , stack2)
```


---

**▷ 구조체를 사용한 스택 구현**

```cpp
#include <iostream>
#include <vector>
  
using namespace std;
template <typename T>

struct Stack {
    vector<T> stack;
    
    void push(T data){
        stack.push_back(data);
    }
    
    void pop(){
        if(empty()){
            throw runtime_error("Stack is empty");
        }
        stack.pop_back();
    }

    T top(){
        if(empty()){
            throw runtime_error("Stack is empty");
        }
        return stack.back();
    }

    int size(){
        return stack.size();
    }

    bool empty(){
        return stack.empty();
    }
};
```

---

**▷ 예제 백준 [p10828](https://www.acmicpc.net/problem/10828)**

```cpp
#include <iostream>
#include <vector>
  
using namespace std;
template <typename T>

struct Stack {
    vector<T> stack;
    
    void push(T data){
        stack.push_back(data);
    }
    
    void pop(){
        if(empty()){
            throw runtime_error("Stack is empty");
        }
        stack.pop_back();
    }

    T top(){
        if(empty()){
            throw runtime_error("Stack is empty");
        }
        return stack.back();
    }

    int size(){
        return stack.size();
    }

    bool empty(){
        return stack.empty();
    }
};

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    Stack<int> s;
    cin >> n;
    
    for (int i=0;i<n;i++){
        string str;
        cin >> str;
        
        if (str=="push"){
            int num;
            cin >> num;
            s.push(num);
        }else if(str=="pop"){
            if (s.empty()){
                cout <<-1<< "\n";
            }else{
                cout << s.top()<< "\n";
                s.pop();
            }
        }else if(str=="size"){
            cout << s.size()<< "\n";
        }else if(str=="empty"){
            cout << s.empty()<< "\n";
        }else if(str=="top"){
            if (s.empty()){
                cout << -1<< "\n";
            }else{
                cout << s.top() << "\n";
            }
        }
    }
}
```
