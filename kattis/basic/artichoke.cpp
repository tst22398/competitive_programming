#include<bits/stdc++.h>

#define endl "\n"


using namespace std;



int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;
    double ans = -1e9;
    auto calc = [&](int i){
        return p*(sin(a*i+b)+cos(c*i+d)+2);
    };
    double mx = 0;
    for (int i=1;i<=n;i++){
        mx = max(mx, calc(i));
        ans = max(ans, mx-calc(i));
    }
    cout << setprecision(10) << fixed << (ans<=0?0:ans) << endl;
    
}
