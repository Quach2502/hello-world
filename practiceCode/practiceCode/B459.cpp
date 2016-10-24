//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//typedef long long ll;
//void main()
//{
//	ll number(0);
//	ll max = 0;
//	ll ways(0);
//	std::vector<ll> input;
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
//	max = input[number-1] - input[0];
//	if (max == 0)
//		ways = number*(number - 1) / 2;
//	else
//	{
//		ll i(0),j(number-1);
//		ll a(0), b(0);
//		while (i < number-1)
//		{
//			if (input[i] == input[i + 1])
//				i++;
//			else
//			{
//				a = i+1;
//				break;
//			}
//		}
//		while (j > 0)
//		{
//			if (input[j] == input[j - 1])
//				j--;
//			else
//			{
//				b = number -j ;
//				break;
//			}
//		}
//		ways = a*b;
//	}
//	std::cout << max << " " << ways;
//}
