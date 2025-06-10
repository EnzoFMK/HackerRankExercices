#define toStr(x) #x
#define io(v) for (size_t i = 0; i < v.size(); ++i) cin >> v[i];  
#define FUNCTION(name, op) \
    template <typename T> void name(T& a, T b) { if (a op b) a = b; }
#define INF 1000000000  
#define foreach(v, i) for (size_t i = 0; i < v.size(); ++i)
 
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v);
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}