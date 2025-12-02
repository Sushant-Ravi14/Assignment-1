#include <stdio.h>
int main(){
    char ch = 'x';
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
        printf("It is a vowel");
    }
    else{
        printf("It is a consonant");
    }

    return 0;
}
