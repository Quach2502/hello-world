//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int spine[100001] = {};
//int cache[100001] = {};
//std::vector<int> adj[100001];
//int dp(int cur, int n)
//{
//	bool flag = true;
//	if (cur == 1)
//		return cache[cur];
//	if (cache[cur] != 0)
//		return cache[cur];
//	else
//	{
//		for (int i = 0; i < adj[cur].size(); i++)
//		{
//			if (adj[cur][i] < cur)
//			{
//				flag = false;
//				int temp = cache[cur];
//				cache[cur] = std::max(dp(adj[cur][i], n) + 1, cache[cur]);
//			}
//		}
//		if (flag)
//		{
//			cache[cur] = 1;
//		}
//		return cache[cur];
//	}
//
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n, m; std::cin >> n >> m;
//	int max = 1;
//	std::vector<ll> input;
//	ll output(0);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		std::cin >> a >> b;
//		spine[a]++; spine[b]++;
//		adj[a].push_back(b);
//		adj[b].push_back(a);
//	}
//	cache[1] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		dp(i, n);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		output = std::max(output, 1ll * cache[i]*spine[i]);
//	}
//	std::cout << output;
//}