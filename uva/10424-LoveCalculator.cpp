#include<bits/stdc++.h>
using namespace std;

int getScore(string s)
{
    int ans = 0;
    for (int i=0; i<s.size(); ++i)
        if (isalpha(s[i]))
            ans += (s[i]>='a' && s[i]<='z')?s[i]-'a'+1:s[i]-'A'+1;
    while (ans>=10)
    {
        int sum = 0;
        while (ans)
        {
            sum += ans%10;
            ans/=10;
        }
        ans = sum;
    }
    return ans;
}

int main()
{
    string s1, s2;
    cout << setprecision(2) << fixed;
    while (getline(cin, s1))
    {
        getline(cin, s2);
        int sc1 = getScore(s1);
        int sc2 = getScore(s2);
        cout << 100*double(min(sc1, sc2))/max(sc1, sc2) << " %" << endl;
    }
}
