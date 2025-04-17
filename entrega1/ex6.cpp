//Pointers

#include <stdio.h>


void update(int *a,int *b) {
    int c = *a;
    *a = *a + *b;
   if (c-*b >0){
    *b = c - *b;
   }
   else {
    *b = *b - c;
   }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}