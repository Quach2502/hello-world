//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//#define ESP 1e-9
//int store[262144] = {};
//
//int change(ll n)
//{
//	std::vector<int> s;
//	while (n>0)
//	{
//		int remain = n%10;
//		if(remain%2==0)
//			s.push_back(0);
//		else
//			s.push_back(1);
//		n = n /10;
//	}
//	int result(0);
//	for(int i = s.size()-1;i>=0;i--)
//	{
//		result+= s[i] * int(pow(2.0,i*1.0)+ESP);
//	}
//	return result;
//}
//int base10(std::string n)
//{
//	int result(0);
//	for(int i = n.size()-1;i>=0;i--)
//	{
//		if(n[i] == '1')
//			result+=  int(pow(2.0,1.0*(n.size()-1-i))+ESP);
//		else
//			continue;
//	}
//	return result;
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	ll number(0);
//	int max = 1;
//	std::vector<ll> input;
//	std::cin >> number;
//	std::cin.clear();
//	std::cin.ignore(10000, '\n');
//	std::vector<int> output;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		ll a;
//		char c;
//		c = getchar();
//		if(c =='+')
//			{
//				std::cin >>a;
//				store[change(a)]++;
//			}
//
//		if(c=='-')
//			{
//				std::cin>>a;
//				store[change(a)]--;
//			}
//		if(c=='?')
//			{
//				std::string b;
//				std::cin>>b;
//				output.push_back(store[base10(b)]);
//			}
//		std::cin.clear();
//		std::cin.ignore(10000, '\n');
//	}
//	for(int i = 0 ; i<output.size();i++)
//		std::cout<<output[i]<<'\n';
//}