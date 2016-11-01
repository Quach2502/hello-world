//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <stdlib.h>   
//typedef long long ll;
//ll day(0);
//int inc(int a)
//{
//	if (a == 3)
//	{
//		day++;
//		return 0;
//	}
//	else
//		return a + 1;
//}
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	ll b, d, s;
//	std::vector<ll> input;
//	int slot[4] = { 0,1,2,3 };
//	std::cin >> b >> d >> s;
//	ll max = std::max(b, std::max(d, s));
//	ll miss = 0;
//	int cur;
//	bool flag = true;
//	if (b == d && d == s)
//	{
//		std::cout<< 0;
//		return 0;
//	}
//	if (b == d)
//	{
//		if (d > s)
//			std::cout <<(d-s-1) ;
//		else
//			std::cout << 2 * (s - d - 1);
//		return 0;
//	}
//	if (d == s)
//	{
//		if (d > b)
//			std::cout << (d - b - 1);
//		else
//			std::cout << 2 * (b - d - 1);
//		return 0;
//	}
//	if (b == s)
//	{
//		if (s > d)
//			std::cout << (s - d - 1);
//		else
//			std::cout << 2 * (d - s - 1);
//		return 0;
//	}
//	if(max - b - 1 != -1)
//		miss += max - b - 1;
//	if (max - d - 1 != -1)
//		miss += max - d - 1;
//	if (max - s - 1 != -1)
//		miss += max - s - 1;
//	std::cout << miss;
//	return 0;
//}