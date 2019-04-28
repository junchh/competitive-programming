#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x[3], y[3];
    int xmin=1000000;
    int ymin=1000000;
    int xmax=-1;
    int ymax=-1;
    for(int i=0;i<3;i++){
        int a,b;
        cin >> a >> b;
        x[i]=a;
        y[i]=b;
        xmin = min(xmin, a);
        xmax = max(xmax, a);
        ymin = min(ymin, b);
        ymax = max(ymax, b);
    }
    for(int i=0;i<3;i++){
        x[i] -= xmin;
        y[i] -= ymin;
    }

    
    return 0;
}