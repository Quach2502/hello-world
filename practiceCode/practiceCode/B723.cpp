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
//	int n;std::string a;std::cin>>n>>a;
//	int outside(0),inside(0);
//	int state(0);
//	int temp(0);
//	for (int i = 0; i < n; i++)
//	{
//		if(state==0)
//		{
//			if(a[i] == '(')
//			{
//				outside = std::max(outside,temp);
//				temp = 0 ;
//				state = 1;
//			}
//			if(a[i]== '_')
//			{
//				outside = std::max(outside,temp);
//				temp =0;
//			}
//			if(a[i] != '('&&a[i] != '_')
//				temp++;
//		}
//		else
//		{
//			if(state ==1)
//			{
//				if(a[i] == '_')
//					state = 2;			
//				if(a[i] == ')')
//					state = 0;
//				if(a[i] != ')'&& a[i] != '_')
//				{
//					inside++;
//					state = 3;
//				}
//			}
//			else
//			{
//				if(state == 2)
//				{
//					if(a[i] == ')')					
//						state = 0;
//					if(a[i] != ')'&& a[i] != '_')
//					{
//						inside++;
//						state = 3;
//					}
//				}
//				else
//				{
//					if(state ==3)
//					{
//						if(a[i] == '_')
//							state = 2;			
//						if(a[i] == ')')
//							state = 0;
//					}
//				}
//			}
//	}
//	}
//	outside = std::max(outside,temp);
//    	std::cout<<outside<<" "<<inside;	
//}