/**
 * @author: Jenniekim
 * @date  : 01-29-2019
 **/
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int g[3];
map<char, int> ma;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> g[0] >> g[1] >> g[2];
    sort(g,g+3);
    ma['A'] = g[0];
    ma['B'] = g[1];
    ma['C'] = g[2];

    string k;
    cin >> k;

    for(int i=0;i<3;i++){
        cout << ma[k[i]] << " ";
    }
 
    return 0;
}