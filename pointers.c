/*
 Mohammadreza Karimi
 215840853
 */

#include <stdio.h>
#include <math.h>
int isMirrored(int x);

int counter(char* s){
    int count = 0;
    while (s[count] != '\0'){
        count++;
    }
    return count;
}

int main(int argc, const char * argv[]) {
    
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int **ptr2 = &ptr1;
    printf("%d", *(ptr1+2));
    printf("{\"name\":\"%s\", \"number\":\"%s\", \"date\": \"%s\"}\n", "Mohammadreza Karimi", "215840853", "December 17, 1996");
    char* s = "salam";
    
    int count = counter(s);
    
    printf("%d \n", count);
    
    printf("%d \n", isMirrored(10));
    return 0;
}

int isMirrored(int x){
    int save = x;
    int compare = 0;
    int count = 0;
    int i;
    while(x != 0){
        count++;
        x /= 10;
    }
    x = save;
    
    for(i = count; x != 0; i--){
        int digit = x % 10;
        x /= 10;
        compare += digit * pow(10, i-1);
    }
    if(compare == save){
        return 1;
    }
    return 0;
}





