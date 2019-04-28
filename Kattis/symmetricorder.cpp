/**
 * @author: Jenniekim
 * @date  : 01-29-2019
 **/
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
    int sett=1;
    while(n!=0){
        string g[n+1];
        for(int i=1;i<=n;i++){
            cin >> g[i];
        }
        cout << "SET " << sett << el;
        sett++;
        if(n%2==0){
            for(int i=1;i<=n;i += 2){
                cout << g[i] << el;
            }
            for(int i=n;i>=0;i-=2){
                cout << g[i];
                if(i!=2){
                    cout << el;
                }
            }
        } else {
            for(int i=1;i<=n;i += 2){
                cout << g[i] << el;
            }
            for(int i=n-1;i>=0;i-=2){
                cout << g[i];
                if(i!=2){
                    cout << el;
                }
            }
        }
        cin >> n;
    }
 
    return 0;
}