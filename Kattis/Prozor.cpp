#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int r,s,k;
char arr[105][105];

int countFlies(int x, int y){
    int cnt=0;
    for(int i=x+1;i<=x+k-2;i++){
        for(int j=y+1;j<=y+k-2;j++){
            if(arr[i][j]=='*'){
                cnt++;
            }
        }
    }
    return cnt;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> s >> k;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=s;j++){
            cin >> arr[i][j];
        }
    }
    int fmax=-1;
    for(int i=1;i<=r-k+1;i++){
        for(int j=1;j<=s-k+1;j++){
            fmax = max(fmax, countFlies(i, j));
        }
    }
    int confx=-1, confy=-1;
    for(int i=1;i<=r-k+1;i++){
        for(int j=1;j<=s-k+1;j++){
            if(countFlies(i, j)==fmax){
                confx=i;
                confy=j;
                break;
            }
        }
    }
    cout << fmax << el;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=s;j++){
            if(i==confx || i==confx+k-1){
                if(j > confy+k-1 || j < confy){
                    cout << arr[i][j];
                } else {
                    if(j==confy || j==confy+k-1){
                        cout << '+';
                    } else {
                        cout << '-';
                    }
                }
            } else {
                if(i > confx+k-1 || i < confx){
                    cout << arr[i][j];
                } else {
                    if(j==confy || j==confy+k-1){
                        cout << '|';
                    } else {
                        cout << arr[i][j];
                    }
                }
            }
        }
        cout << el;
    }

    return 0;
}