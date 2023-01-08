#include<stdio.h>
#include<iostream>
#include<deque>
using namespace std;

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	// cout.tie(NULL);

    int n;
    cin >> n;

    deque<int> dq;

    dq.push_back(n);
    for (int i = n-1; i >0; i--)
    {
        dq.push_front(i);
        for (int j = 0; j < i; j++)
        {
            int tmp = dq.back();
            dq.pop_back();
            dq.push_front(tmp);

        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << dq[i] << " ";
    }
    

}