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
//	ll n(0),m;std::cin>>n>>m;
//	int max = 1;
//	std::vector<ll> input;
//	int min(100000);
//	bool flag = true;
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		std::cin >> l>>r;
//		min = std::min(min, r - l+1);
//	}
//	std::cout << min << '\n';
//	int i(0);
//	while (n > 0)
//	{
//		std::cout << i << " ";
//		if (i == min - 1)
//			i = 0;
//		else
//			i++;
//		n--;
//	}
//}