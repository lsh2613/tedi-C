#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    queue<int> q2;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "q의 크기 " << q.size() << endl;
    cout << "q.empty() " << q.empty() << endl;
    cout << "q2.empty " << q2.empty() << endl;
}