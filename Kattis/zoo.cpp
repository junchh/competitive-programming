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
    int ya=1;
    while(n!=0){
        string arr[10000];
        map<string, int> ani;
        for(int i=0;i<n;i++){
            string g;
            while (g.length()==0 ) 
                getline(cin, g); 
            string res = "";
            for(int j=g.length()-1;j>=0;j--){
                if(g[j]!=' '){
                    res += g[j];
                } else {
                    break;
                }
            }
            string res2="";
            for(int j=res.length()-1;j>=0;j--){
                if(res[j] >= 'A' && res[j] <= 'Z'){
                    res2 += res[j] - 'A' + 'a';
                } else {
                    res2 += res[j];
                }
            }

            if(ani.count(res2)){
                ani[res2]++;
            } else {
                ani[res2]=1;
            }
        }

        cout << "List " << ya << ": " <<el;
        for(auto x:ani){
            cout << x.first << " | " << x.second << el;
        }

        ya++;
        cin >> n;
    }
    return 0;
}