//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include<unordered_map>
//typedef long long ll;
//void main()
//{
//std::unordered_map<std::string, std::string> dict;
//	ll n,m;
//	int max = 1;
//	std::vector<ll> input;
//	ll output(0);
//	std::cin >> n>>m;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		ll a;
//		std::cin >> a;
//		if(a < 0)
//			input.push_back(a*(-1));
//	}
//	std::sort(input.begin(), input.end());
//	int i(input.size()-1);
//	while (m > 0 && i>=0)
//	{
//		output += input[i];
//		i--;
//		m--;
//	}
//	std::cout << output;
//}