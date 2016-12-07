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
//int gcd(int a, int b)
//{
//	if (a < b) return gcd(b, a);
//	int remain = a%b;
//	if (remain == 0) return b;
//	else
//		return gcd(b, remain);
//}
//int lcm(int a, int b)
//{
//	return (a*b) / gcd(a, b);
//}
//bool checkcycle(int start,int n)
//{
//	int t(1);
//	int temp(start);
//	while(t<=n)
//	{
//		if(temp == input[start]) 
//		{
//			if (t % 2 == 0)
//				radius.insert(t / 2);
//			else
//				radius.insert(t);
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
//	ll output = -1;
//	bool flagR(true);
//	for(int i =1 ; i <= n && flagR;i++)
//	{
//		flagR = checkcycle(i,n);
//	}
//	if(!flagR) std::cout<<-1;
//	else
//	{
//		int total(1);
//		for (auto i = radius.begin(); i != radius.end(); i++)
//			total *= *i;
//		std::vector<int> solve;
//		for (auto i = radius.begin(); i != radius.end(); i++)
//		{
//			solve.push_back(*i);
//		}
//		output = solve[0];
//		for (int i = 1; i < solve.size(); i++)
//		{
//			output = lcm(output, solve[i]);
//		}
//		std::cout << output;
//	}
//}