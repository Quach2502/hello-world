//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <math.h>
//typedef long long ll;
//bool check(ll n)
//{
//	ll a = ll(sqrt(double(n)));
//	for(ll i=2;i<=a;i++)
//		{
//			if(n%i==0) return false;
//		}
//	return true;
//}
//
//void main()
//{
//	ll sum(0);
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	ll n(0);std::cin>>n;
//	if(check(n)) std::cout<<1;
//	else
//	{
//		if(n%2==0) std::cout<<2;
//		else
//		{
//			while(n>1)
//			{
//				if(check(n)) 
//					{
//						sum++;
//						break;
//					}
//				else
//				{
//					if(n==2) 
//						{
//							sum++;
//							break;
//						}
//					else
//					{
//						ll temp = n-2;
//						while(!check(temp))
//							temp --;
//						sum++;
//						n -= temp;
//					}
//				}
//			}
//			if(sum>3) 
//				std::cout<<3;
//			else
//				std::cout<<sum;
//		}
//	}
//}