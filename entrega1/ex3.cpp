//Conditional Statements

#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
int d;    
scanf("%d", &d);

if(d==1){

    printf("um");
}
else if(d==2){
    printf("dois");
}
else if (d==3){
    printf("tres");
}
else if (d==4){
    printf("quatro");
}
else if (d==5){
    printf ("cinco");
}
else if (d==6){
    printf ("seis");
}
else if (d==7){
    printf ("sete");
}
else if (d==8){
    printf ("oito");
}
else if (d==9){
    printf ("nove");
}
else if (9<d){
    printf ("maior que nove");
}
else {
    printf ("menor que um");
}
    return 0;
}