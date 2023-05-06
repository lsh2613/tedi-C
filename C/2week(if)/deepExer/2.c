#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum=0;
    if (a>=b)
    {
        sum+=b;
        if (a+b>c)
        {
            sum+=c;
            if (a>b+c)
                sum+=b+c;
            else
                sum+=a;            
        }
        else{
            sum+=b;
            sum+=2*a;
        }
    }

    else if (a<b)
    {
        //생략
    }
    printf("%d", sum);

}