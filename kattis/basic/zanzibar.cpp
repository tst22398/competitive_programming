#include<bits/stdc++.h>
using namespace std;

//https://open.kattis.com/problems/zanzibar?editsubmit=9694210

int main()
{
    cout << setprecision(0) << fixed;
    int t; cin >> t;
    while (t--){
        int last; cin >> last;
        int curr;
        int ans = 0;
        while (cin >> curr, curr){
            ans += (curr<=2*last)?0:curr-2*last;
            last = curr;
        }
        cout << ans << endl;
    }
    return 0;
}
