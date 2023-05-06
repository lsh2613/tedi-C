#include<iostream>
#include<stack>
#include<string>
using namespace std;

//a>=b이면 참
bool comparePriority(char a, char b){
    if (a=='*' || a=='/'){
        return true;
    }
    else if (a=='+' || a=='-'){
        if (b=='*'||b=='/')
        {
            return false;
        }
        return true;        
    }
    else
        return false;
}

int main(){
    string str;
    stack<char> s;

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        // cout << i <<" "<< str[i] << endl;
        //스택에 있는 연산자가 문자열의 연산자보다 우선순위가 높으면 계속 pop해서 출력
        if (str[i]=='+' || str[i]=='-' || str[i]=='*'||str[i]=='/')
        {
            // cout << "여긴 if문" << i <<" "<< str[i] << endl;
            if (!s.empty())
            {
                while (comparePriority(s.top(), str[i]))
                {
                    cout << "while문" << endl;
                    cout << s.top() << " ";
                    s.pop();
                }
            }
            s.push(str[i]);
        }
        //피연산자는 그냥 출력
        else
            cout << str[i] << " ";
    }

    //만약 스택에 남아있는 연산자가 있다면 모두 출력
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    
}