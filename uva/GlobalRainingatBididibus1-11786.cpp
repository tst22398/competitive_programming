#include<bits/stdc++.h>
using namespace std;

//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2886
//Approach 1: 
// for each position satisfied that s[current_position] == '\\': store the this position to pos[current_height]
// for each position satisfied that s[current_position] == '/': ans += (current_position - pos[current_height])

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int sz = s.size() + 5;
        int pos[sz * 2] = {}; //sz -> 0
        int height = sz, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '\\') {
                pos[height] = i + 1;
                height --;
            } else if (s[i] == '/') {
                height++;
                if (pos[height])
                    ans += i + 1 - pos[height];
            }
        }
        cout << (ans) << endl;
    }
}
