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
//	int state(0);
//	int current(0);int last(0);
//	std::string a;;std::cin>>a;
//	std::string output("");
//	int i(0);
//	while(i<n)
//	{
//		if(state ==0)
//		{
//			if(i > n-3)
//				output =output + a[i];
//			else
//			{
//				if(a[i]=='o') 
//					state = 1;
//				else
//					output = output + a[i];
//			}
//			i++;
//			continue;
//		}
//		if(state ==1)
//		{
//			if(i==n-1) output = output + a[i-1]+a[i];
//			else
//			{
//				if(a[i]=='g') 
//					state = 2;
//				else
//				{
//					if(a[i]=='o') 
//						output =output + a[i-1];
//					else
//					{
//						output = output + a[i-1] + a[i];
//						state = 0;
//					}
//				}
//			}
//			i++;
//			continue;
//		}
//		if(state ==2)
//		{
//			if(a[i]=='o') 
//			{
//				state = 3;
//				output += "***";
//			}
//			else
//			{
//				output =output + a[i-2]+ a[i-1]+a[i];
//				state =0 ;
//			}
//			i++;
//			continue;
//		}
//		if(state ==3)
//		{
//			if(i==n-1) output = output +a[i];
//			else
//			{
//				if(a[i]=='g') 
//					state = 4;
//				else
//				{
//					if(a[i]=='o') 
//						state = 1;
//					else
//					{
//						output =output + a[i];
//						state =0 ;
//					}
//				}
//			}
//			i++;
//			continue;
//		}
//		if(state == 4)
//		{
//			if(a[i]=='o') 
//				state = 3;
//			else
//			{
//				output =output +a[i-1]+ a[i];
//				state =0 ;
//			}
//		i++;
//		continue;
//		}
//	}
//	std::cout<<output;
//}