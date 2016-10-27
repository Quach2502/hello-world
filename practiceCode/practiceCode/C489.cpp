//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include<unordered_map>
//typedef long long ll;
//void print(std::vector<int> v)
//{
//	for (int i = 0; i < v.size(); i++)
//		std::cout << v[i];
//}
//void main()
//{
//	std::unordered_map<std::string, std::string> dict;
//	int m, s;
//	std::vector<int> max;
//	std::vector<int> trans;
//	std::vector<int> min;
//	std::cin >> m>>s;
//	int s1 = s-1;
//	if (s == 0 && m == 1)
//	{
//		std::cout << 0 << " " << 0;
//	}
//	else
//	{
//		if (s == 0 || (s > 9 * m))
//			std::cout << -1 << " " << -1;
//		else
//		{
//			while (max.size() < m)
//			{
//				if (s == 0)
//					max.push_back(0);
//				else
//				{
//					if (s >= 9)
//					{
//						s -= 9;
//						max.push_back(9);
//					}
//					else
//					{
//						max.push_back(s);
//						s = 0;
//					}
//				}
//			}
//			while (s1 > 0)
//			{
//				{
//					if (s1 > 9)
//					{
//						s1 -= 9;
//						trans.push_back(9);
//					}
//					else
//					{
//						trans.push_back(s1);
//						s1 = 0;
//					}
//				}
//			}
//			if (trans.size() != m)
//			{
//				while (trans.size() < m)
//				{
//					if (trans.size() == m - 1)
//						trans.push_back(1);
//					else
//						trans.push_back(0);
//				}
//				for (int i = trans.size() - 1; i >= 0; i--)
//					std::cout << trans[i];
//			}
//			else
//			{
//				for (int i = trans.size() - 1; i >= 0; i--)
//				{
//					if (i == trans.size() - 1)
//						std::cout << trans[i] + 1;
//					else
//						std::cout << trans[i];
//				}
//			}
//			std::cout << " ";
//			print(max);
//		}
//	}
//}