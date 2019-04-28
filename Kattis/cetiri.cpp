#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int arr[3];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);

    int selisih1=arr[1]-arr[0];
    int selisih2=arr[2]-arr[1];
    if(selisih1==selisih2){
        cout << arr[2] +selisih1 << el;
    } else if(selisih2>selisih1){
        cout << arr[1]+selisih1 << el;
    } else {
        cout << arr[0]+selisih2 << el;
    }
    return 0;
}