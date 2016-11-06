//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <tuple>
//typedef long long ll;
//bool cmp(const std::tuple<ll,ll,ll> &a, const  std::tuple<ll,ll,ll> &b)
//{
//	if (std::get<0>(a) != std::get<0>(b))
//		return std::get<0>(a) > std::get<0>(b);
//	else
//		{
//			if(std::get<1>(a) != std::get<1>(a))
//				return std::get<1>(a) < std::get<1>(b);
//			else
//				return std::get<2>(a) > std::get<2>(b);
//	}
//}
//
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	ll number(0);
//	ll max(0);
//	ll min(1e9);
//	std::vector<std::tuple<ll,ll,ll>> input;
//	ll output(0);
//	ll current(0);
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		ll a,b;
//		std::cin >> a>>b;
//		max = std::max(max,a);
//		input.push_back(std::make_tuple(a-b,b,a));
//	}
//	std::sort(input.begin(),input.end(),cmp);
//	output  = max;
//	current = max;
//	for(int i =0;i<input.size();i++)
//	{
//		if(current >= std::get<2>(input[i]))
//		{
//			current -= std::get<1>(input[i]);
//		}
//		else
//		{
//			ll dif = std::get<2>(input[i]) - current;
//			output += dif;
//			current = std::get<2>(input[i]);
//			current -=std::get<1>(input[i]);
//		}
//	}
//	std::cout<<output;
//}