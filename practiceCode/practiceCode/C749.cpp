//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//#include <map>
//typedef long long ll;
//std::set<int> remo;
//std::set<int> depub;
//void main()
//{
//	int r(0),d(0);
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0);std::cin>>n;
//	std::string s;std::cin>>s;
//	for (int i = 0; i < n; i++)
//	{
//		if(s[i]=='D')
//		{
//			d++;
//			depub.insert(i+1);
//		}
//		else
//		{
//			r++;
//			remo.insert(i+1);
//		}
//	}
//	while(r && d)
//	{
//		for(int i =0;i<n&&r&&d;i++)
//		{
//			if(s[i] =='D')
//			{
//				if(depub.find(i+1) != depub.end())
//				{
//					r--;
//					if(remo.upper_bound(i+1)!=remo.end())
//					{
//						remo.erase(remo.upper_bound(i+1));
//					}
//					else
//					{
//						remo.erase(remo.begin());
//					}
//				}
//			}
//			else
//			{
//				if(remo.find(i+1) != remo.end())
//				{
//					d--;
//					if(depub.upper_bound(i+1)!=depub.end())
//					{
//						depub.erase(depub.upper_bound(i+1));
//					}
//					else
//					{
//						depub.erase(depub.begin());
//					}
//				}
//			}
//		}
//	}
//	if(r==0) 
//		std::cout<<"D";
//	else
//		std::cout<<"R";
//	
//}