#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;
#include <iostream>

class BadLengthException : public exception {

private:
    int len;

public:
        BadLengthException(int n){len=n;}

    int what(){return len;}
};
/* Define the exception here */

