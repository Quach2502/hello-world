//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0), m, k; std::cin >> n >> m >> k;
//	int co[100001] = {0};
//	int max = 1;
//	int l[5001] = {0}; int c[5001] = {0};
//	bool flag = true;
//	for (int i = 1; i <= k; i++)
//	{
//		int a;
//		int op, color;
//		std::cin >> a;
//		if (a == 2)
//		{
//			std::cin >> op >> color;
//			co[i] = color;
//			c[op] = i;
//		}
//		else
//		{
//			std::cin >> op >> color;
//			co[i] = color;
//			l[op] = i;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//			std::cout << co[std::max(l[i], c[j])] << " ";
//		std::cout << "\n";
//	}
//}