//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//typedef long long ll;
//void main()
//{
//	ll number(0);
//	int max = 1;
//	int a(0), b(0);
//	std::vector<ll> input;
//	std::vector<ll> first;
//	std::vector<ll> second;
//	int output;
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		ll a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	std::sort(input.begin(), input.end());
//	for (int i = 0; i < number-1; i++)
//	{
//		ll a;
//		std::cin >> a;
//		first.push_back(a);
//	}
//	std::sort(first.begin(), first.end());
//	for (int i = 0; i < number-2; i++)
//	{
//		ll a;
//		std::cin >> a;
//		second.push_back(a);
//	}
//	std::sort(second.begin(),second.end());
//	int i(0);
//	while( i < number-1 )
//	{
//		if (first[i] == input[i])
//			i++;
//		else
//		{
//			a = input[i];
//			break;
//		}
//	}
//	if (a == 0)
//		a = input[number - 1];
//	i = 0;
//	while (i < number - 2)
//	{
//		if (first[i] == second[i])
//			i++;
//		else
//		{
//			b = first[i];
//			break;
//		}
//	}
//	if (b == 0)
//		b = first[number - 2];
//	std::cout << a << std::endl << b << std::endl;
//}
