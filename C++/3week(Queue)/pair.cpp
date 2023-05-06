#include<iostream>
#include<utility>
using namespace std;
int main(){
    // 아마 컴파일러의 문제로 p 선언이 안 되는 듯
    pair<int, string> p = {1, "모찌"};
    pair<int, string> p2 = make_pair(2, "소바");

    cout << "p.first: " << p.first << endl;
    cout << "p.second: " << p.second << endl;
}