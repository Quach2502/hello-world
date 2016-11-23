//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <iomanip>
//typedef long long ll;
//ll diva(ll l, ll r,ll p)
//{
//	ll result = r / p - (l - 1) / p;
//	return result;
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	ll n(0),p;std::cin>>n>>p;
//	int max = 1;
//	std::vector<std::pair<ll,ll>> input;
//	long double output(0);
//
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		ll l,r;
//		std::cin >> l>>r;
//		input.push_back(std::make_pair(l,r));
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		ll diva1 = diva(input[i].first, input[i].second, p);
//		ll diva2 = diva(input[i+1].first, input[i+1].second, p);
//		long double prob1 = 1.0*(input[i].second - input[i].first + 1 - diva1) / (input[i].second - input[i].first + 1);
//		long double prob2 = 1.0*(input[i + 1].second - input[i + 1].first + 1- diva2) / (input[i+1].second - input[i+1].first + 1);
//		long double prob = (1 - prob1 * prob2)*2000;	
//		output += prob;
//	}
//	ll diva1 = diva(input[0].first, input[0].second, p);
//	ll diva2 = diva(input[n-1].first, input[n-1].second, p);
//	long double prob1 = 1.0*(input[0].second - input[0].first + 1 - diva1) / (input[0].second - input[0].first + 1);
//	long double prob2 = 1.0*(input[n - 1].second - input[n - 1].first + 1 - diva2) / (input[n - 1].second - input[n - 1].first + 1);
//	long double prob = (1 - prob1 *prob2)*2000;
//	output += prob;
//	std::cout << std::fixed << std::setprecision(20) << output << '\n';
//}