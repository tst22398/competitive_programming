#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << ":" << endl;
    for (int i = 2; i <= n / 2 + 1; i++)
    {
        int num = n / (2 * i - 1);
        if ((num + 1)*i + (num) * (i - 1) == n || num * i + num * (i - 1) == n)
            cout << i << ' ' << i - 1 << endl;
        if (n % i == 0)
            cout << i << ' ' << i << endl;
    }
    return 0;
}
