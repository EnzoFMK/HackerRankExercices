#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
template<typename T>
class AddElements {
public:
    AddElements(T arg) : element(arg) {}
    T add(T other) {
        return element + other;
    }
private:
    T element;
};
template<>
class AddElements<string> {
public:
    AddElements(string arg) : element(arg) {}
    string concatenate(string other) {
        return element + other;
    }
private:
    string element;
};

int main () {