//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <tuple>
//typedef long long ll;
//void main()
//{
//	std::unordered_map<std::string, std::string> dict;
//	ll n(0),d(0);
//	ll sum(0);
//	ll max(0);
//	std::vector<std::pair<ll,ll>> input;
//	std::cin >> n>>d;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		ll a(0),s(0);
//		std::cin>>a>>s;
//		input.push_back(std::make_pair(a,s));
//	}
//	std::sort(input.begin(), input.end());
//	int l(0), r(0);
//	while(l < n)
//	{
//		while(r < n && (input[r].first - input[l].first < d))
//		{
//			sum += input[r].second;
//			r++;
//		}
//		if (sum > max)
//			max = sum;
//		sum -= input[l].second;
//		l++;
//	}
//	std::cout<<max;
//}