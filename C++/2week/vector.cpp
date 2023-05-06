#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1(10);
    vector<int> v2(10, 1);
    
    for (int k : v1)
    {
        cout << k <<" ";
    }
    
    cout << endl;
    for (int k : v2)
    {
        cout << k <<" ";
    }

}