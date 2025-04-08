#include<stdio.h>

int main() {
    int A;
    int B;
   
    scanf("%d\n", &A); 
    scanf("%d\n", &B);

    if (A > B) {
        printf(">");
    }
    else if (A < B) {
        printf("<");
    }
    else {
        printf("==");
    }

    return 0;
}
