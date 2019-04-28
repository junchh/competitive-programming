#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
int n, link[150005], siz[150005];
list<int> par[150005];

void initDSU(){
    for(int i=1;i<=n;i++){
        link[i]=i;
        siz[i]=1;
        par[i]={i};
    }
}

int find(int v) {
    if (v == link[v])
        return v;
    return link[v] = find(link[v]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (siz[a] < siz[b]){
        swap(a,b);
    }
    siz[a] += siz[b];
    link[b] = a;
    par[a].splice(par[a].end(), par[b]);
}

bool same(int a, int b){
    return (find(a)==find(b));
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    set<ll> st;
    for(int i=1;i<=n;i++){
        ll k;
        cin >> k;
        st.insert(k);
    }

    
    return 0;
}