//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//typedef long long ll;
//void main()
//{
//	std::unordered_map<std::string, std::string> dict;
//	std::ios_base::sync_with_stdio(false);
//	ll n(0), m(0);
//	int max = 1;
//	std::vector<std::string> input;
//	ll output;
//	std::cin >> n >> m;
//	bool flag = true;
//	for (int i = 0; i < m; i++)
//	{
//		std::string a;
//		std::string b;
//		std::cin >> a >> b;
//		if (a.length() <= b.length())
//		{
//			dict[a] = a;
//			dict[b] = a;
//		}
//		else
//		{
//			dict[a] = b;
//			dict[b] = b;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		std::string a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << dict[input[i]] << " ";
//	}
//}
