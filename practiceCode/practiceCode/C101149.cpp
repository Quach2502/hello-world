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
//	int max = 1;
//	std::vector<ll> input;
//	int output;
//	std::cin >> number;
//	bool flag = true;
//	for (ll i = 0; i < number; i++)
//	{
//		input.push_back(-1);
//	}
//	for (ll i = 0; i < number; i++)
//	{
//		ll remain = (i*i) % number;
//		if(input[remain] != -1)
//			continue;
//		else
//			input[remain] = i;
//	}
//	for (int i = 0; i < number; i++)
//	{
//		std::cout<<input[i]<<" ";
//	}
//}