//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//ll number, k, x;
//std::vector<ll> input;
//std::vector<std::vector<ll>> cache;
//ll dp(ll n, ll k)
//{
//	if (n == 0)
//		return 1;
//	if (cache[n][k] != 1000000001)
//		return cache[n][k];
//	else
//	{	
//			cache[n][k] = std::min(dp(n - 1, k - 1)*(input[n - 1] + x), std::min(dp(n - 1, k)*input[n - 1], dp(n - 1, k - 1)*(input[n - 1] - x)));
//			return cache[n][k];
//	}
//}
//std::vector<std::pair<int, ll>> graph[5001];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	std::cin >> number >> k >> x;
//	for (int i = 0; i < number; i++)
//	{
//		ll a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	std::vector<ll> cut;
//	for (int i = 0; i <= k; i++)
//	{
//		cut.push_back(0);
//	}
//	for (int i = 0; i < number; i++)
//	{
//		cache.push_back(cut);
//	}
//	for (int i = 0; i < number; i++)
//	{
//		cache[i][0] = 1;
//		for (int j = 0; j <= i; j++)
//		{
//			cache[i][0] *= input[j];
//		}
//	}
//	for (int i = 0; i < number; i++)
//	{
//		for (int j = 1; j <= k; j++)
//		{
//			cache[i][j] = 1000000001;
//		}
//	}
//	bool flag = true;
//	std::cout << dp(number, k);
//	system("pause");
//}