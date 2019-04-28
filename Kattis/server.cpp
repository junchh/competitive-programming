#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n,t, arr[100];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> t;
    int cnt=0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }

    int i=1;
    int sum=0;
    while(i<=n && sum <= t){
        sum += arr[i];
        cnt++;
        i++;
    }
    if(sum > t){
        cnt--; 
    }
    cout << cnt << el;
    return 0;
}