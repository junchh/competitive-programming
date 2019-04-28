#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int m[13];

 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> hari;
    hari.push_back("Monday");
    hari.push_back("Tuesday");
    hari.push_back("Wednesday");
    hari.push_back("Thursday");
    hari.push_back("Friday");
    hari.push_back("Saturday");
    hari.push_back("Sunday");
    m[1]=3;
    m[2]=6;
    m[3]=6;
    m[4]=2;
    m[5]=4;
    m[6]=0;
    m[7]=2;
    m[8]=5;
    m[9]=1;
    m[10]=3;
    m[11]=6;
    m[12]=1;
    int d,mo;
    cin >> d >> mo;

    cout << hari[(m[mo]+d-1)%7] << el;
    return 0;
}