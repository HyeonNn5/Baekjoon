
`#include <algorithm>`

```cpp
// 기본 오름차순
sort(arr,arr+(배열의 길이 = 마지막 주소 + 1));
sort(arr,arr+(배열의 길이 = 마지막 주소 + 1),less<자료형>());
// 내림차순
sort(arr,arr+(배열의 길이 = 마지막 주소 + 1),greater<자료형>());
```

---

사용자 정의 정렬 방식 `compare()`

```cpp
// name 과 age가 포함된 Student 클래스 예시
bool compare(Student a, Student b){
    if(a.name == b.name){   //이름이 같음 > 나이가 적은 순
        return a.age < b.age;
    }else{                  //이름 다름 > 이름 사전순
        return a.name < b.name;
    }
}
```

---

+ 연산자 오버로딩
