#include <stdio.h>
int main(){

    char line[255];
    FILE* file = fopen("file.txt", "r");

    if (file==NULL)
        return 0;

    while (fgets(line, sizeof(line), file)!=NULL)
    {
        printf("%s", line);
    }
        
    
}