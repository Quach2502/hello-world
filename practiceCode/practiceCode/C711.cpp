//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//ll cache[101][101][101];
//ll cost[101][101];
//int original[101];
//const ll INF = ll(1e18);
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n,m,k;	std::cin >> n>>m>>k;
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//	{	
//		std::cin >> original[i];
//	}
//	for(int i = 0; i <= n; i++)
//	{
//		for(int j = 0; j <= k; j++)
//		{
//			for(int a = 0; a <= m; a++)
//			{
//				cache[i][j][a] = INF;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			std::cin>>cost[i][j];
//		}
//	}
//	if(original[1] == 0)
//	{
//		for(int i = 1; i <= m; i++)
//		{
//			cache[1][1][i] = cost[1][i];
//		}
//	}
//	else
//	{
//		cache[1][1][original[1]] = 0;
//	}
//	for(int i = 2; i <= n; i++)
//	{
//		for(int j = 1; j <= k; j++)
//		{
//			if(original[i] == 0) //the ith node is currently uncolored
//			{
//				for(int a = 1; a <= m; a++)
//				{
//					cache[i][j][a] = std::min(cache[i][j][a], cache[i-1][j][a] + cost[i][a]); //the last color used is similar to the current color
//					for(int b = 1; b <= m; b++)//the last color used is different from the current color, loop for all possible colors
//					{
//						if(b != a) 
//							cache[i][j][a] = std::min(cache[i][j][a], cache[i-1][j-1][b] + cost[i][a]);
//					}
//				}
//			}
//			else    //the ith node is currently colored
//			{
//				cache[i][j][original[i]] = std::min(cache[i][j][original[i]], cache[i-1][j][original[i]]); //the current color is the same as last used color
//				for(int b = 1; b <= m; b++)
//				{
//					if(b != original[i])
//						cache[i][j][original[i]] = std::min(cache[i][j][original[i]], cache[i-1][j-1][b]);//the current color is different from last used color
//				}
//				//cout << i << ' ' << j << ' ' << c[i] << ' ' << dp[i][j][c[i]] << '\n';
//			}
//		}
//	}
//	ll ans = INF;
//	for(int i = 1; i <= m; i++)
//	{
//		ans = std::min(ans, cache[n][k][i]);
//	}
//	if(ans >= INF) ans = -1;
//	std::cout << ans;
//}