#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

const int N = 1e6+1;

int main(){
	ios::sync_with_stdio(false); 
	cin.tie(nullptr); 
	cout.tie(nullptr);

	int n; cin >> n;
	vector<int> heights(N+1);
	for (int i=0;i<n;i++){
		int tmp;
		cin >> tmp;
		if (heights[tmp+1] > 0)
			heights[tmp+1]--;
		heights[tmp]++;
	}


	long long sum = 0;
	for (int i=0;i<N+1;i++)
		sum += heights[i];

	cout << sum;

	return 0;


}
