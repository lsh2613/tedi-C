#include <stdio.h>

int solution(int price, char grade){
    
    if (grade=='S')
        price=price*0.95;
    if (grade=='G')
        price=price*0.9;
    if (grade=='V')
        price=price*0.85;
    
    return (int)price;
}

int main(){
    int price;
    char grade;
    scanf("%d %c", &price, &grade);
    printf("%d", solution(price, grade));

}