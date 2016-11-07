//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//bool locate[100001];
//std::vector<std::pair<int, ll>> adj[100001];
//
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n, m, k; std::cin >> n >> m >> k;
//	ll min = 1000000001;
//	int output;
//	for (int i = 0; i < 100001; i++)
//	{
//		locate[i] = false;
//	}
//	bool flag = true;
//	for (int i = 0; i < m; i++)
//	{
//		ll l; int u, v;
//		std::cin >> u>>v>>l;
//		adj[u].push_back(std::make_pair(v, l));
//		adj[v].push_back(std::make_pair(u, l));
//	}
//	for (int i = 0; i < k; i++)
//	{
//		int a; std::cin >> a;
//		locate[a] = true;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (locate[i])
//		{
//			for (int j = 0; j < adj[i].size(); j++)
//			{
//				if (!locate[adj[i][j].first])
//					min = std::min(min, adj[i][j].second);
//			}
//		}
//	}
//	if(min == 1000000001)
//		std::cout << -1;
//	else
//		std::cout << min;
//}