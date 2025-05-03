#include<bits/stdc++.h>

using namespace std;

class Box{
    private:
    int l, b, h;

    public: 
    Box (){
        l=b=h=0;
    }
    Box (int len, int bre, int hei){
        l=len;
        b=bre;
        h=hei;
    }
    Box (const Box &B){
        l=B.l;
        b= B.b;
        h= B.h;
    }
    int getLen() const{return l;}
    int getBre() const{return b;}
    int getei() const{return h;}
    long long CalculateVolume() const{return (long long)l * b * h;}

    bool operator<(const Box &B) const {
        if (l< B.l) return true;
        if (l==B.l && b< B.b) return true;
        if (l==B.l && b==B.b && h<B.h) return true;
        return false;
    }
    friend ostream& operator<<(ostream& out, const Box &B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }



} ;
