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
//	int k, n(0);std::cin>>n>>k;
//	int g,t;
//	std::string s; std::cin>>s;
//	for (int i = 0; i < n; i++)
//	{
//		if(s[i] == 'G') g= i;
//		if(s[i] == 'T') t=i;
//	}
//	if(g > t)
//	{
//		int i(g);
//		while(i > t)
//		{
//			i = i - k;
//			if(s[i] =='#') break;
//		}
//		if(i==t) std::cout<<"YES";
//		else
//			std::cout<<"NO";
//	}
//	else
//	{
//		int i(g);
//		while(i < t)
//		{
//			i = i + k;
//			if(s[i] =='#') break;
//		}
//		if(i==t) std::cout<<"YES";
//		else
//			std::cout<<"NO";
//	}
//}