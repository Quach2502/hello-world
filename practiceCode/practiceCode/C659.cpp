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
//	int n; ll m; std::cin >> n >> m;
//	int max = 1;
//	std::vector<ll> input;
//	std::vector<ll> store;
//	int output(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		ll a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	std::sort(input.begin(),input.end());
//	int cur(0);
//	int sum(0);
//	for (int i = 1; i <= m &&flag; i++)
//	{
//		if (i == input[cur])
//		{
//			cur++;
//			continue;
//		}
//		else
//		{
//			if (sum + i <= m)
//			{
//				sum += i;
//				output++;
//				store.push_back(i);
//			}
//			else
//				flag = false;
//		}
//	}
//	std::cout << output << '\n';
//	for (int i = 0; i < store.size(); i++)
//		std::cout << store[i] << " ";
//
//}