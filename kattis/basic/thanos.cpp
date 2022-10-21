#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        long long p, r, f; cin >> p >> r >> f;
        int cnt = 0;
        while (p<=f){
            cnt++;
            p*=r;
        }
        cout << cnt << endl;
    }
    return 0;
}
