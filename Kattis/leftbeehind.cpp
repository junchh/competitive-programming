#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int x,y;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x >> y;
    while(x+y != 0){
        if(x+y==13){
            cout << "Never speak again." << el;
        } else {
            if(x<y){
                cout << "Left beehind." << el;
            } else if(x>y){
                cout << "To the convention." << el;
            } else {
                cout << "Undecided." << el;
            }
        }
        cin >> x >> y;
    }
    return 0;
}