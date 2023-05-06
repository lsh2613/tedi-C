#include<iostream>
using namespace std;
int main(){
    string test = "AB";

    test.push_back('C');
    cout << "push_back 후 문자열 " << test << endl;
    test.pop_back();
    cout << "pop_back 후 문자열 " << test << endl;

    test.insert(0, "CCC");
    cout << "insert 후 문자열 " << test << endl;

    test.erase(0, 2);
    cout << "erase 후 문자열 " << test << endl;

}