#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(0);
    v.push_back(7);
    v.push_back(3);
    v.push_back(-1);
    
    for (int k : v)
    {
        cout << k << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int k : v)
    {
        cout << k << " ";
    }
}