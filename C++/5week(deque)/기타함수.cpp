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
    // deque<int> dq = {10,20,30,40};
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    cout << "Deque의 크기: " << dq.size() << endl;
    cout << "Deque.empty()의 값: " << dq.empty() << endl;
    
    cout << "기존" << endl;
    print_deque(dq);
    cout << endl;

    dq.insert(dq.begin()+0, 50);
    cout << "insert 후 " << endl;
    print_deque(dq);
    cout << endl;

    dq.erase(dq.begin(), dq.end());
    cout << "erase 후" << endl;
    print_deque(dq);
}