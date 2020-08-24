#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1e9;

int main() {
	double n, s;
	cin >> n >> s;
	assert(1<=n&&n<=100000);
	assert(1<=s&&s<=mxN);
	cout << fixed << setprecision(0) << ceil(s/n) << "\n";
}
