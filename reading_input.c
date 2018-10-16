#include <stdio.h>

int counter(char* input){
    int i = 0;
    while(input[i] != '\0'){
        i++;
    }
    return i-1;
}

int main(void)
{
    char name[20];
    printf("Hello. What's your name?\n");
    //scanf("%s", &name);  - deprecated
    fgets(name,20,stdin);
    printf("Hi there, %s", name);
    printf("%d", counter(name));
    return 0;
}
