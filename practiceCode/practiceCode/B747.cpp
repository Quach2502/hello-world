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
//	int a(0), c(0), g(0), t(0), ques(0);
//	std::string s; std::cin >> s;
//	if (n % 4 != 0) std::cout << "===";
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (s[i] == 'A') a++;
//			if (s[i] == 'G') g++;
//			if (s[i] == 'C') c++;
//			if (s[i] == 'T') t++;
//			if (s[i] == '?') ques++;
//		}
//		int ch = n / 4;
//		if (a > ch || g > ch || c > ch || t > ch)
//			std::cout << "===";
//		else
//		{
//			for (int i = 0; i < n; i++)
//			{
//				if (s[i] == '?')
//				{
//					if (a < ch)
//					{
//						s[i] = 'A'; a++; continue;
//					}
//					if (c < ch)
//					{
//						s[i] = 'C'; c++; continue;
//					}
//					if (g < ch)
//					{
//						s[i] = 'G'; g++; continue;
//					}
//					if (t < ch)
//					{
//						s[i] = 'T'; t++; continue;
//					}
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				std::cout << s[i];
//			}
//		}
//	}
//
//}