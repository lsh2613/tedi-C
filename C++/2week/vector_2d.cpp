#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=10;
    vector<vector<int>> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        v[i].resize(n,0);
    }

    for (vector<int> vec_1d : v)
    {
        for (int val : vec_1d)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    
     
}