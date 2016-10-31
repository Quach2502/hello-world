//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include<unordered_map>
//typedef long long ll;
//void main()
//{
//std::unordered_map<std::string, std::string> dict;
//	ll number(0);
//	ll max(0);
//	std::vector<ll> input;
//	std::vector<ll> output;
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		ll a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	output.push_back(0);
//	max = input[input.size()-1];
//	for (int i = input.size()-2; i >= 0; i--)
//	{
//		if(input[i]> max)
//			{
//				output.push_back(0);
//				max = input[i];
//		}
//		else
//		{
//			output.push_back(max+1 - input[i]);
//		}
//	}
//	for (int i = output.size()-1; i >= 0; i--)
//	{
//		std::cout<<output[i]<<" ";
//	}
//}