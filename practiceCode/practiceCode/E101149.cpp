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
//	ll number(0);
//	ll max (0);
//	ll below(0);
//	std::vector<std::pair<ll,ll>> input;
//	ll count(0);
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		ll l,r;
//		std::cin >> l>>r;
//		if(r > max)
//		{
//			max = r;
//		}
//		if(l > below)
//		{
//			below =  l;
//		}
//		input.push_back(std::make_pair(r,l));
//	}
//	for (int i = 0; i < number; i++)
//	{
//		if(input[i].first >= below)
//			count++;
//	}
//	std::cout<<count;
//
//}