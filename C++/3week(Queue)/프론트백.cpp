#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "queue의 front " << q.front() << endl;
    cout << "queue의 back " << q.back() << endl;
}