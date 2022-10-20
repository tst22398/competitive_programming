#include<bits/stdc++.h>
using namespace std;

//https://open.kattis.com/problems/temperature

int main()
{
    double X, Y;
    cin >> X >> Y;
    if (Y==1 && X==0)
        cout << 0 << endl;
    else if (Y==1)
        cout << "IMPOSSIBLE" << endl;
    else cout << setprecision(10) << fixed << (X/(1-Y)) << endl;
    return 0;
}

