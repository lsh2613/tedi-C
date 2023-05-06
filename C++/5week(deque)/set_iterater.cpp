#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    set<int>::iterator it;
    if (it!=s.end())
        cout << "key값이 존해합니다" << endl;        
    else
        cout << "key값이 존재하지 않습니다." << endl;
}