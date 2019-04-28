#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int a,b,c;
pair<int,int> arr[3];

bool inside(pair<int,int> len, int x){
    if(x > len.first && x <= len.second){
        return true;
    } else {
        return false;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    for(int i=0;i<3;i++){
        int k,l;
        cin >> k >> l;
        arr[i] = make_pair(k, l);
    }
    int cost=0;
    for(int i=1;i<=100;i++){
        int many=0;
        for(int j=0;j<3;j++){
            if(inside(arr[j], i)){
                many++;
            }
        }
        switch(many){
            case 1:
                cost += a;
                break;
            case 2:
                cost += 2*b;
                break;
            case 3:
                cost += 3*c;
                break;
        }
    }
    cout << cost << el;
    return 0;
}