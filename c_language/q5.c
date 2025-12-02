#include <stdio.h>

struct Students{
    int id;
    char name[20];
    int marks;
};

int main(){
    struct Students s1 = {1, "Sushant", 85};

    printf(" Roll=%d \n", s1.id);
    printf("Name=%s \n",s1.name);
    printf("Marks=%d \n",s1.marks);
    
    return 0;
}
