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
string s;
int convert(string k){
    int res=0;
    int j=0;
    for(int i=k.length()-1;i>=0;i--){
        res += floor(pow(10, j))*(k[i]-'0');
        j++;
    }
    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> s;
        if(s=="P=NP"){
            cout << "skipped" << el;
        } else {
          int indexplus=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+'){
                indexplus=i;
                break;
            }
        } 



        cout << convert(s.substr(0, indexplus))+convert(s.substr(indexplus+1, s.length()-indexplus)) << el;
        }
    }
 
    return 0;
}