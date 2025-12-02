#include <stdio.h>

int main(){
    int n;
    int f1 = 0;
    int f2 = 1;
    int f3;
    scanf("%d",&n);
    printf("fibonacci series :%d\nfibonacci series :%d\n",f1,f2);
    for(int i=0; i<n; i++){
            f3=f1+f2;
            printf("fibonacci series :%d\n",f3);
            f1=f2;
            f2=f3;
            i++;
    }

    return 0;
}
