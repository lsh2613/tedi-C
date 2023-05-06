#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;

    // m.insert({ 10, "Cat"});
    // m.insert({ 20, "Dog"});
    // m.insert({ 43, "Mouse"});
    // m.insert({ 9, "Monkey"});


    map<int,string>::iterator it;
    for (it = m.begin(); it!= m.end();it++)
    {
        cout << "Key : " << it->first << "Value : " << it->second <<endl;
    }
    
}