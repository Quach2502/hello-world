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
//	int a1,a2;std::cin>>a1>>a2;
//	int count(0);
//	while(a1>2 || a2 >2)
//	{
//		if(a1>=a2)
//		{
//			if(a1%2!=0)
//			{
//				int sub = (a1 -1) /2;
//				a1 = 1;
//				a2 += sub;
//				count+=sub;
//			}
//			else
//			{
//				int sub = a1/2;
//				a1 = 2;
//				a2 += sub-1;
//				count+= sub-1;
//			}
//		}
//		else
//		{
//			if(a2%2!=0)
//			{
//				int sub = (a2 - 1) /2;
//				a2 = 1;
//				a1 += sub;
//				count+=sub;
//			}
//			else
//			{
//				int sub = a2/2;
//				a2 = 2;
//				a1 += sub-1;
//				count+= sub-1;
//			}
//		}
//	}
//	if(a1==1&&a2==1) std::cout<<count;
//	else std::cout<<count+1;
//}