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
//	ll n(0),a,b,c;std::cin>>n>>a>>b>>c;
//	bool flag = true;
//	ll output(0);
//	ll min = std::min(a, b);
//	if (n < min)
//		std::cout << 0;
//	else
//	{
//		if (n < a)
//			std::cout << (n - b) / (b - c) + 1;
//		else
//		{
//			if (n <b)
//				std::cout << n/a;
//			else
//			{
//				if(a<=b-c)
//					std::cout << n / a;
//				else
//				{
//					if(a>=b)
//						std::cout << (n - b) / (b - c) + 1;
//					else
//					{
//						ll  d = (n - b) / (b - c)+1;
//						std::cout << (n-d*(b-c))/a + d;
//					}
//				}
//			
//			}
//		}		
//	}
//	}