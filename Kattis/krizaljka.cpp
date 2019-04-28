#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

string a,b;

bool comp(pair<int,int> a, pair<int,int> b){
    return a.first+a.second  < b.first+b.second;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b;
    pair<int,int> q;
    vector<pair<int,int>> ha;
    for(int i=0;i<a.length();i++){
        for(int j=0;j<b.length();j++){
            if(a[i]==b[j]){
                ha.push_back(make_pair(i, j));
            }
        }
    }
    sort(ha.begin(), ha.end());
    q = ha[0];
    for(int i=0;i<b.length();i++){
        for(int j=0;j<a.length();j++){
            if(i==q.second){
                cout << a[j];
            } else {
                if(j==q.first){
                    cout << b[i];
                } else {
                    cout << ".";
                }
            }
        }
        cout << el;
    }
    return 0;
}