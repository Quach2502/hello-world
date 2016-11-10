//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//ll sum[100001] = {};
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),q;std::cin>>n;
//	int max = 1;
//	int output;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		sum[a]++;
//	}
//	for (int i = 1; i < 100001; i++)
//	{
//		sum[i] = sum[i - 1] + sum[i];
//	}
//	std::cin >> q;
//	for (int i = 0; i < q; i++)
//	{
//		int a;
//		std::cin >> a;
//		if (a >= 100000)
//			std::cout << n << '\n';
//		else
//			std::cout << sum[a] << '\n';
//	}
//}