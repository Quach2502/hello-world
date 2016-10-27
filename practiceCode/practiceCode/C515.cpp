#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<unordered_map>
typedef long long ll;
void main()
{
std::unordered_map<std::string, std::string> dict;
	ll number(0);
	int max = 1;
	std::vector<ll> input;
	int output;
	std::cin >> number;
	bool flag = true;
	for (int i = 0; i < number; i++)
	{
		ll a;
		std::cin >> a;
		input.push_back(a);
	}
	std::sort(input.begin(), input.end());
	for (int i = 0; i < number; i++)
	{
		std::cout << input[i] << " ";
	}
  system("pause");
}