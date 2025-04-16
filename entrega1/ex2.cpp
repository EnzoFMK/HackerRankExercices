//Basic Data types

#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
int d;
char ch;
double lf;
float f;
long ld;

scanf ("%c %lf %f %d %ld", &ch, &lf, &f, &d, &ld);


printf ("%c %lf %f %d %ld", ch, lf, f, d, ld);

return 0;
}