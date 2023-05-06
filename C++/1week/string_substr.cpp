#include<iostream>
using namespace std;
int main(){
    string test3 = "This is Tedi C++ Class";

    string subString = test3.substr(0,10);

    cout << subString << endl;

    string snum="100";
    int num = stoi(snum);
    cout << "snum을 숫자로 변환: " << num << endl;

    int n = 345;
    string nString = to_string(n);
    cout << nString << endl;
}