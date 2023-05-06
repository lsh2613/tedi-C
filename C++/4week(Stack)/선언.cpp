#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    stack<int> test;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    test.push(1);
    test.push(2);
    test.push(3);
    
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;

    s.swap(test);
    cout << "swap 후 스택 출력\n" << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}