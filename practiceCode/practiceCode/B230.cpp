//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <math.h>
//typedef long long ll;
//
//#define limit 1e-7
//
//bool checkPrime(ll n)
//{
//	if (n == 1)
//		return false;
//	if (n == 2)
//		return true;
//	else
//	{
//		ll ceil = ll(sqrt(double(n)));
//		ll current = 2;
//		bool flag = true;
//		while (current <= ceil && (flag))
//		{
//			if (n%current == 0)
//				flag = false;
//			else
//				current++;
//		}
//		return flag;
//	}
//}
//
//
//void main()
//{
//	std::ios_base::sync_with_stdio(false);
//	ll number(0);
//	int max = 1;
//	std::vector<ll> input;
//	ll output;
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		ll a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//
//	for (int i = 0; i < number; i++)
//	{
//		ll sqroot = ll(sqrt(double(input[i])));
//		if ((input[i] - sqroot*sqroot) > limit)
//		{
//			std::cout << "NO\n";
//		}
//		else
//		{
//			if (checkPrime(sqroot))
//				std::cout << "YES\n";
//			else
//				std::cout << "NO\n";
//		}
//	}
//}