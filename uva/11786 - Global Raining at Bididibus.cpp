#include<bits/stdc++.h>
using namespace std;

//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2886
//Approach 2:
//each position i with s[i] == '/' have a position that corresponding to it

int main(){
    int tt; cin >> tt;
    while (tt--){
        string g;
        cin >> g;
        stack<int> s;
        int ans = 0;
        for (int i=0;i<g.size();i++){
            if (g[i] == '\\')
                s.push(i);
            else if (g[i] == '/' && !s.empty())
                ans += i-s.top(), s.pop();
        }
        cout << ans << endl;
    }
}
