#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n, arr[100005];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int fmin=1000000005;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        fmin = min(fmin, arr[i]);
    }

    for(int i=1;i<=n;i++){
        if(arr[i]==fmin){
            cout << i-1 << el;
            break;
        }
    }
    return 0;
}