#include<bits/stdc++.h>
using namespace std;

int getScore(int x, int y)
{
    if (x<y)
        swap(x, y);
    if(x==2 && y==1)
        return 12000;
    if (x==y)
        return x*1000;
    return 10*x+y;
}

int main()
{
    cout << setprecision(0) << fixed;
    int s0, s1, r0, r1;
    while (cin >> s0 >> s1 >> r0 >> r1, s0)
    {
        int p1 = getScore(s0, s1);
        int p2 = getScore(r0, r1);
        if (p1>p2)
            cout << "Player 1 wins.\n";
        else if (p2>p1)
            cout << "Player 2 wins.\n";
        else
            cout << "Tie.\n";
    }
    return 0;
}
