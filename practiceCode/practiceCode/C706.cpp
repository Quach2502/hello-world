//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//std::string rev(std::string x)
//{
//	std::string y;
//	for (int i = x.size() - 1; i >= 0; i--)
//		y += x[i];
//	return y;
//}
//bool compare(std::string a, std::string b)
//{
//	int min = std::min(a.size(), b.size());
//	for (int i = 0; i < min; i++)
//	{
//		if (a[i] < b[i])
//			return false;
//		else
//		{
//			if (a[i] > b[i])
//				return true;
//			else
//				continue;
//		}
//	}
//	return a.size() >= b.size();
//
//}
//ll cache[100001][2];
//int cost[100001];
//std::string input[100001];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0);std::cin>>n;
//	int max = 1;
//	int output;
//	bool flag = true;
//	for (int i =0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		cost[i] = a;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		std::string a;
//		std::cin >> a;
//		input[i] = a;
//	}
//	for (int i = 0; i < n; i++)
//	{
//			cache[i][0] = 100000000000000;
//			cache[i][1] = 100000000000000;
//	}
//	cache[0][0] = 0;
//	cache[0][1] = cost[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (compare(input[i], input[i - 1]))
//			cache[i][0] = std::min(cache[i][0], cache[i - 1][0]);
//		if (compare(input[i], rev(input[i - 1])))
//			cache[i][0] = std::min(cache[i][0],cache[i - 1][1]);
//		if (compare(rev(input[i]), input[i - 1]))
//			cache[i][1] = std::min(cache[i][1], cache[i - 1][0] + cost[i]);
//		if (compare(rev(input[i]), rev(input[i - 1])))
//			cache[i][1] = std::min(cache[i][1], cache[i - 1][1] + cost[i]);
//	}
//	if (cache[n - 1][0] == 100000000000000 && cache[n - 1][1] == 100000000000000)
//		std::cout << -1;
//	else
//		std::cout << std::min(cache[n-1][0], cache[n-1][1]);
//}
