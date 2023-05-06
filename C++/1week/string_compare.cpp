#include<iostream>
using namespace std;
int main(){
    string test="ABB";
    string test2="ABB";
    string test3="ABC";

    cout << "test와 test2의 비교 결과" <<test.compare(test2) << endl;

    if (test == test2)
        cout << "test와 test3는 같다" << endl;
    else
        cout << "test와 test3는 다르다" << endl;
    

}