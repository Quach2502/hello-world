//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <ostream>
//#include<unordered_map>
//typedef long long ll;
//void main()
//{
//	std::unordered_map<std::string, std::string> dict;
//	std::string s;
//	ll number(0);
//	int max = 1;
//	std::vector<ll> input;
//	std::vector<ll> output;
//	std::cin >> number;
//	std::cin.ignore();
//	std::getline(std::cin, s);
//	bool flag = true;
//	for (int i = 0; i < s.size(); i++)
//	{
//		ll a = ll(s[i])-48;
//		if (a != 0 && a != 1)
//			input.push_back(a);
//	}
//	for (int i = 0; i < input.size(); i++)
//	{
//		ll s = input[i];
//
//		if (s == 2 || s == 3 || s == 5 || s == 7)
//			output.push_back(s);
//		if (s == 4)
//		{
//			output.push_back(2); output.push_back(2); output.push_back(3);
//		}
//		if (s == 6)
//		{
//			output.push_back(5); output.push_back(3);
//		}
//		if (s == 8)
//		{
//			output.push_back(7); output.push_back(2); output.push_back(2); output.push_back(2);
//		}
//		if (s == 9)
//		{
//			output.push_back(7); output.push_back(2); output.push_back(3); output.push_back(3);
//		}
//	}
//	std::sort(output.begin(), output.end());
//	for (int i = output.size()-1; i >=0; i--)
//	{
//		std::cout << output[i];
//	}
//}