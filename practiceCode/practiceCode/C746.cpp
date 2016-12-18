//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int s,x1,x2,t1,t2,p,d;std::cin>>s>>x1>>x2>>t1>>t2>>p>>d;
//	int state;
//	int train;
//	int timewalk = abs(x2-x1)*t2;
//	if(t1>=t2)
//		{
//			std::cout<<timewalk;
//			return 0;
//		}
//	else
//	{
//		if(p>=x2)
//		{
//			if(d==1)
//			{
//				if(x1 > x2)
//				{
//					train = (s-p+s-x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//				else
//				{
//					train = (s-p+s+x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//			}
//			else
//			{
//				if(x1 > p)
//				{
//					train = (p+s+s-x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//				if(x1<x2)
//				{
//					train = (p+x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//				train = (p-x2)*t1;
//				std::cout<<std::min(train,timewalk);
//				return 0;
//			}
//		}
//		else
//		{
//			if(d==1)
//			{
//				if(x1 < p)
//				{
//					train = (s-p+s+x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//				if(x1>x2)
//				{
//					train = (s-p+s-x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//				train = (x2-p)*t1;
//				std::cout<<std::min(train,timewalk);
//				return 0;
//			}
//			else
//			{
//				if(x1 > x2)
//				{
//					train = (p+s+s-x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//				else
//				{
//					train = (p+x2)*t1;
//					std::cout<<std::min(train,timewalk);
//					return 0;
//				}
//			}
//		}
//	}
//
//}