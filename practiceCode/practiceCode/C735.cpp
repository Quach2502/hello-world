//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//ll cache[1000] = {};
//ll dp(int n)
//{
//	if (cache[n] != 0) return cache[n];
//	else
//	{
//		cache[n] = dp(n - 1) + dp(n - 2);
//	}
//	return cache[n];
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	ll n(0);std::cin>>n;
//	cache[1] = 1;
//	cache[2] = 1;
//	int i = 1;
//	while (dp(i) <= n)
//	{
//		i++;
//	}
//	std::cout << i-1;
//}