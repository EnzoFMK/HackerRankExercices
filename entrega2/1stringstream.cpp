#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    
    vector<int> result;
    stringstream ss(str);
    int a, b, c;
    char ch;
    
    ss >> a >> ch >> b >> ch >> c;
    
    result.push_back(a);
    result.push_back(b);
    result.push_back(c);
    
    
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
