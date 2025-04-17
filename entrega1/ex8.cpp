#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main (){
    int n, q;
    scanf("%d %d", &n, &q);
    vector<vector<int>>arr(n);

    for (int i=0; i<n; i++){
        int k;
        scanf("%d", &k);
        arr[i].resize(k);

    
    for (int j = 0; j < k; j++){
        
        scanf("%d", &arr[i][j]);
    }
}
    
    for (int i = 0; i < q; i++) {
        int idx, jdx;
        scanf("%d %d", &idx, &jdx); 
        
        
        printf("%d\n", arr[idx][jdx]);
    }

    

    return 0;
}