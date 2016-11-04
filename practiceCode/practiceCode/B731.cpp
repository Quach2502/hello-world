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
//	int number(0);
//	int max = 1;
//	std::vector<int> input;
//	int output;
//	bool coup = false;
//	std::cin >> number;
//	bool flag = true;
//	bool can = true;
//	for (int i = 0; i < number; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	for (int i = 0; i < number && can; i++)
//	{
//		if (input[i] % 2 == 0)
//		{
//			if (!coup)
//				continue;
//			else
//			{
//				if (input[i] == 0)
//				{
//					can = false;
//				}
//				else
//				{
//					continue;
//				}
//			}
//		}
//		else
//		{
//			if (!coup)
//			{
//				coup = true;
//			}
//			else
//			{
//				coup = false;
//			}
//		}
//	}
//	if (can && !coup)
//		std::cout << "YES";
//	else
//		std::cout << "NO";
//}