#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "스택의 크기: " << s.size() << endl;
    cout << "empty()의 값 : " << s.empty() << endl;
}