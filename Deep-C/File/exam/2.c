#include <stdio.h>
int main(){

    FILE *fp = fopen("gugudan.txt", "w");
    
    for (int i = 1; i <=9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            fprintf(fp, "%d * %d = %d\n", i, j, i*j);
        }
        fputs("\n",fp);
    }
    fclose(fp);

    char str[255];
    fp = fopen("gugudan.txt", "r");
    while (fgets(str, sizeof(str), fp)!=NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    
}