//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//const int max_n = 1000000;
//
//ll n, m, k;
//ll x, s;
//int a[max_n], b[max_n], c[max_n], d[max_n];
//
//int max_complete(int money_left)
//{
//	int l = 0, r = k;
//	while (l < r)
//	{
//		int m = (l + r + 1) / 2;
//		if (d[m] <= money_left) l = m; else r = m - 1;
//	}
//	return c[l];
//
//}
//
//void main()
//{
//	ios_base::sync_with_stdio(false);
//	cin >> n >> m >> k;
//	cin >> x >> s;
//	a[0] = x;
//	b[0] = 0;
//	c[0] = 0;
//	d[0] = 0;
//	for (int i = 1; i <= m; i++) cin >> a[i];
//	for (int i = 1; i <= m; i++) cin >> b[i];
//	for (int i = 1; i <= k; i++) cin >> c[i];
//	for (int i = 1; i <= k; i++) cin >> d[i];
//	ll ans = n * x;
//	for (int i = 0; i <= m; i++)
//	{
//		int money_left = s - b[i];
//		if (money_left < 0) continue;
//		ans = std::min(ans,  (n - max_complete(money_left)) * a[i]);
//	}
//	cout << ans << endl;
//}