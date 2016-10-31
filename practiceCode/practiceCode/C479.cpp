//#include <iostream>
//#include<set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include<unordered_map>
//typedef long long ll;
//void main()
//{
//	std::unordered_map<std::string, std::string> dict;
//	ll number(0);
//	int max = 1;
//	ll cur(0);
//	std::vector<std::pair<ll,ll>> input;
//	int output;
//	std::cin >> number;
//	for (int i = 0; i < number; i++)
//	{
//		ll a,b;
//		std::cin >> a>> b;
//		input.push_back(std::make_pair(a,b));
//	}
//	std::sort(input.begin(), input.end());
//	cur = input[0].second;
//	for (int i = 1; i < number; i++)
//	{
//		if(input[i].second < cur)
//			cur = input[i].first;
//		else
//			cur = input[i].second;
//	}
//	std::cout<<cur;
//}