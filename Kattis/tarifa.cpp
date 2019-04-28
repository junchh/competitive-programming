#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int x,n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x >> n;
    int sum=0;
    while(n--){
        int a;
        cin >> a;
        sum += x-a;
    }
    cout << sum+x << el;
    return 0;
}