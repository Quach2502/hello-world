//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cmath>
//typedef long long ll;
//ll pow2(ll n)
//{
//	ll result(1);
//	for(ll i = 1; i<n;i++)
//	{
//		result *= 2;
//	}
//	return result;
//}
//ll log2(ll n)
//{
//	ll x(1);
//	while(pow2(x+1) <= n) x++;
//	return x;
//}
//void main()
//{
//	ll number(0);
//	int max = 1;
//	std::vector<ll> input;
//	ll output;
//	std::cin >> number;
//	for(int i=0;i<number;i++)
//	{
//		ll a(0);
//		std::cin>>a;
//		input.push_back(a);
//	}
//	for(int i=0;i<number;i++)
//	{
//		ll rawSum = input[i]*(input[i]+1)/2;
//		ll x = log2(input[i]);
//		ll subtract = (pow2(x+1) -1)*2;
//		std::cout<<rawSum-subtract<<std::endl;
//	}
//  
//}
