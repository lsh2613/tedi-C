#include<iostream>
#include<deque>
using namespace std;

void print_deque(deque<int> d){
    while (!d.empty())
    {
        cout << d.front() << " << ";
        d.pop_front();
    }
}

int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);

    cout << "push_back 후" << endl;
    print_deque(dq);
    cout << endl;

    dq.push_front(30);
    dq.push_front(40);

    cout << "push_front 후" << endl;
    print_deque(dq);
    cout << endl;

    dq.pop_back();
    dq.pop_front();
    
    cout << "pop 후" << endl;
    print_deque(dq);
    cout << endl;

    cout << dq[1] << endl;
}