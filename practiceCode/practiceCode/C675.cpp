//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int input[100001];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	int count(0);
//	std::unordered_map<std::string, std::string> dict;
//	ll n(0);std::cin>>n;
//	std::vector<ll> preS;
//	int max = 1;
//	int cur(1);
//	int output;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input[i] = a;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//			preS.push_back(input[i]);
//		else
//		{
//			ll sum = preS[i - 1] + input[i];
//			preS.push_back(sum);
//		}
//	}
//	std::sort(preS.begin(), preS.end());
//	for (int i = 1; i < preS.size(); i++)
//	{
//		if (preS[i] == preS[i - 1])
//		{
//			cur++;
//			if (cur > max)
//				max = cur;
//		}
//		else
//		{
//			cur = 1;
//			if (cur > max)
//				max = cur;
//		}
//	}
//	std::cout << n - max;
//}