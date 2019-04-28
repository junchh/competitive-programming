#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        int arr[t+1];
        for(int k=1;k<=t;k++){
            cin >> arr[k];
        }

        int idx=-1;
        for(int i=2;i<=t;i++){
            if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1] && arr[i+1] > arr[i-1]){
                idx=i;
                break;
            } else if(arr[i] <= arr[i-1] && arr[i-1] < arr[i+1]){
                idx=i;
                break;
            }
        }
        cout << idx << el;
    }
    return 0;
}