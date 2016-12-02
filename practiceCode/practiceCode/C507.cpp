//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <math.h>
//typedef long long ll;
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int h; ll n(0); std::cin >> h >> n;
//	ll output(1);
//	int level(0);
//	char c = 'L';
//	while (level < h)
//	{
//		if (level == h - 1)
//		{
//			if (n == 1 && c == 'R')
//				output++;
//			if (n == 2 && c == 'L')
//				output++;
//			level++;
//		}
//		else
//		{
//			if (n > std::pow(2.0, h - level-1))
//			{
//				if (c == 'R')
//				{
//					output++;
//					c = 'L';
//					n -= std::pow(2.0, h - level - 1);
//					level++;
//			
//				}
//				else
//				{
//					output += std::pow(2.0, h - level) - 1;
//					n -= std::pow(2.0, h - level - 1);
//					output++;
//					level++;
//				
//				}
//			}
//			else
//			{
//				if (c == 'L')
//				{
//					output++;
//					c = 'R';
//					level++;
//				}
//				else
//				{
//					output += std::pow(2.0, h - level) - 1;
//					output++;
//					level++;
//				}
//			}
//		}
//	}
//	std::cout << output;
//}