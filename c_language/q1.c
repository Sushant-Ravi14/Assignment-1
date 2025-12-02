#include <stdio.h>
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    
    for(int r=0; r<3; r++){
        if(r==1){
            for(int c=0; c<3; c++){
                sum += mat[1][c];
            }
        }
    }
    
    printf("Sum :%d",sum);
    return 0;
}

