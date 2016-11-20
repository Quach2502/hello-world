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
//	std::vector<ll> input;
//	ll output(1);
//	int cur(0);
//	int check(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//		if(a==1) check++;
//	}
//	if(check==0)std::cout<<0;
//	else
//	{
//	for (int i = 0; i < n; i++)
//	{
//		if(flag)
//		{
//			if(input[i] ==1 ) 
//			{
//				flag = false;
//			}
//		}
//		else
//		{
//			if(input[i]==0)
//				cur++;
//			else
//			{
//				output*=(cur+1);
//				cur=0;
//			}
//		}
//
//	}
//	std::cout<<output;
//	}}