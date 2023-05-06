#include<iostream>
using namespace std;

namespace Tedi
{
    int grade;
    int grade2;
    void printGrade(){
        cout << grade <<endl;
    }
}

namespace School
{
    int grade;
}

int main(){
    Tedi::grade=10;
    Tedi::grade2=20;
    School::grade=30;

    Tedi::printGrade();
    std::cout << Tedi::grade2 << " " << School::grade;
}