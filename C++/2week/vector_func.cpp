#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    for (int k : v)
    {
        cout << k << endl;
    }

    cout << v.size() << endl;    
    cout << v.capacity() << endl;    
    cout << v.empty() << endl;    
}