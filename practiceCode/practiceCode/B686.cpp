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
//	int n(0);std::cin>>n;
//	int output(0);
//	std::vector<ll> input;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		ll a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	int dif(0);
//	for (int i = 0; i < n; i++)
//	{
//		auto v = std::min_element(input.begin(),input.end());
//		int index = v - input.begin();
//		for( int j = index;j>0;j--)
//			std::cout<<j+dif <<" "<<j+1+dif<<'\n';
//		input.erase(v);
//		dif++;
//	}
//	
//}