/**
 * @author: Jenniekim
 * @date  : 01-29-2019
 **/
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

string a,b;

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
    cin >> a >> b;
    string newa="";
    string newb="";

    int lena=a.length();
    int lenb=b.length();
    if(lena > lenb){
        int dif=lena-lenb;
        for(int i=0;i<lena;i++){
            int j = i-dif;
            if(j < 0){
                newa += a[i];
            } else {
                if(a[i] > b[j]){
                    newa += a[i];
                } else if(a[i] < b[j]){
                    newb += b[j];
                } else {
                    newa += a[i];
                    newb += b[j];
                }
            }
        }
    } else {
        int dif=lenb-lena;
        for(int i=0;i<lenb;i++){
            int j = i-dif;
            if(j < 0){
                newb += b[i];
            } else {
                if(b[i] > a[j]){
                    newb += b[i];
                } else if(b[i] < a[j]){
                    newa += a[j];
                } else {
                    newa += a[j];
                    newb += b[i];
                }
            }
        }
    }

    if(newa==""){
        cout << "YODA" << el;
    } else {
        cout << convert(newa) << el;
    }
    if(newb==""){
        cout << "YODA" << el;
    } else {
        cout << convert(newb) << el;
    }
 
    return 0;
}