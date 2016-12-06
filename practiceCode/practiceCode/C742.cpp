//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//std::unordered_set<int> radius;
//int input[101];
//bool checkcycle(int start,int n)
//{
//	int t(1);
//	int temp(start);
//	while(t<=n)
//	{
//		if(temp == input[start]) 
//		{
//			radius.insert(t);
//			return true;
//		}
//
//		else 
//			{
//				start = input[start];
//				t++;
//			}
//	}
//	return false;
//}
//int go(int start,int t)
//{
//	while(t>0)
//	{
//		start = input[start];
//		t--;
//	}
//	return start;
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0);std::cin>>n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input[i] = a;
//	}
//	int output = -1;
//	bool flagR(true);
//	for(int i =1 ; i <= n && flagR;i++)
//	{
//		flagR = checkcycle(i,n);
//	}
//	if(!flagR) std::cout<<-1;
//	else
//	{
//		int total(1);
//		for(auto i = radius.begin();i!=radius.end();i++)
//			total *= *i;
//	for(int t =1;t<=total;t++)
//	{
//		bool flag = true;
//		bool check[101];
//		std::fill(check,check+101,false);
//		for(int i =1;i<=n && flag;i++)
//		{
//			if(!check[i])
//				{
//					int y = go(i,t);
//					if( i == go(y,t))
//					{
//						check[i] = true; check[y] = true;
//					}
//					else
//						flag =false;
//				}
//		}
//		if(flag) 
//			{
//				output =t; 
//				break;
//			}
//	}
//	std::cout<<output;
//	}
//}