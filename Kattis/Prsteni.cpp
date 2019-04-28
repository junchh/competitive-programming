#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n, arr[105];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }

    for(int i=2;i<=n;i++){
        int gc = __gcd(arr[1], arr[i]);
        cout << arr[1]/gc << "/" << arr[i]/gc << el;
    }
    return 0;
}