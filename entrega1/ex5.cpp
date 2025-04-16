#include <iostream>
#include <cstdio>
using namespace std;

int maiorvalor (int a, int b, int c, int d){

   int maiorvalor=a;

   if (b > maiorvalor){
    maiorvalor = b;
   }
   if (c > maiorvalor){
    maiorvalor = c;
   }
   if (d>maiorvalor){
    maiorvalor = d;
   }

    return maiorvalor;
}

int main(){

    int a;
    int b;
    int c;
    int d;

scanf("%d %d %d %d", &a, &b, &c, &d);

printf("%d\n", maiorvalor(a,b,c,d));

    return 0;
}