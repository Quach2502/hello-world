//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int pow(int x,int y)
//{
//	int r = 1;
//	if (y==0)
//		return 1;
//	else
//	{
//		while(y>0)
//			r *= x;
//	}	
//	return r;
//}
//int log(int x, int base)
//{
//	int result = 0;
//	int e(1);
//	if(x < base)
//		return 1;
//	else
//	{
//		while(e-1<x)
//			{
//				e *= base;
//				result++;
//			}
//	}
//	return result;
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),m;std::cin>>n>>m;
//	int max = 1;
//	std::vector<ll> input;
//	int output(0);
//	int baseN = log(n-1,7);
//	int baseM = log(m-1,7);
//	if( baseN + baseM > 7)
//		std::cout<<0;
//	else
//	{
//		for(int sample = 0;sample<n;sample++)
//		{
//			int i = sample;
//			std::unordered_set<int> t;
//			bool flag = true;
//			while(i>0)
//			{
//				int temp = t.size();
//				t.insert(i%7);
//				if(temp == t.size())
//			{
//				flag = false;
//				break;
//			}
//				i = i/7;
//			}
//			if ( baseN - t.size() > 1)
//				flag = false;
//			if( baseN - t.size() == 1 && flag)
//				{
//					int temp = t.size();
//					t.insert(0);
//					if(temp == t.size())
//						flag = false;
//				}
//			if(flag)
//			{
//				for(int sample2 =0;sample2<m;sample2++)
//			{
//				int j = sample2;
//				std::unordered_set<int> tM (t);
//				bool flag1 = true;
//				int count(0);
//				while(j>0)
//					{
//						int temp = tM.size();
//						tM.insert(j%7);
//						count++;
//						if(temp == tM.size())
//						{
//							flag1 = false;
//							break;
//						}
//						j = j/7;
//					}
//				if ( baseM - count > 1)
//					flag1 = false;
//				if( (baseM - count) == 1 && flag1)
//				{
//					int temp = tM.size();
//					tM.insert(0);
//					if(temp == tM.size())
//						flag1 = false;
//				}
//				if(flag1)output++;
//			}
//			}
//		}
//		std::cout<<output;
//	}
//}