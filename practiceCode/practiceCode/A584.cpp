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
//	int n(0),t;std::cin>>n>>t;
//	int max = 1;
//	std::vector<ll> input;
//	std::string output("1");
//	bool flag = false;
//	if (n == 1)
//	{
//		if (t < 10) std::cout << t;
//		else
//			std::cout << -1;
//	}
//	else
//	{
//		int temp(n);
//		if (t == 2 || t == 4 || t == 8 || t==5||t==10)
//		{
//			if (n == 2) std::cout << 80;
//			if (n == 3) std::cout << 160;
//			if(n>3)
//			{
//				temp--;
//				while (temp > 3)
//				{
//					output += "0";
//					temp--;
//				}
//				std::cout << output + "160";
//			}
//		}
//		if (t == 3 || t == 6 || t == 9)
//		{
//			temp--;
//			while (temp > 1)
//			{
//				output += "0";
//				temp--;
//			}
//			std::cout << output + "8";
//		}
//		if (t == 7)
//		{
//			int res;
//			if (n == 2) std::cout << 14;
//			if (n == 3) std::cout << 105;
//			if (n > 3)
//			{
//				int remain = (n-1) % 3;
//				if (((n-1) / 3) % 2 == 0)
//				{
//					if (remain == 1) res = 3;
//					if (remain == 0) res = 1;
//					if (remain == 2) res = 2;
//				}
//				else
//				{
//					if (remain == 1) res = 4;
//					if (remain == 0) res = 6;
//					if (remain == 2) res = 5;
//
//				}
//				temp--;
//				while (temp > 1)
//				{
//					output += "0";
//					temp--;
//				}
//				std::cout << output << 7 - res;
//			}
//
//		}
//		
//	}
//}