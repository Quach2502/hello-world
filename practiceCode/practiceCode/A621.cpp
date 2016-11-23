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
//	ll n(0);std::cin>>n;
//	int max = 1;
//	std::vector<ll> input;
//	ll output(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		ll a;
//		std::cin >> a;
//		if (a % 2 == 0)
//			output += a;
//		else
//			input.push_back(a);
//	}
//	std::sort(input.begin(), input.end());
//	if (n == 1)
//	{
//		if (output == 0) std::cout << 0;
//		else std::cout << output;
//	}
//	else
//	{
//		int t = input.size();
//		for (int i = 0; i < input.size(); i++)
//			output += input[i];
//		if (t % 2 == 1)
//			output -= input[0];
//		std::cout << output;
//	}
//}