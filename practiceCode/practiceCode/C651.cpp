#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
typedef long long ll;
void main()
{
	std::ios::sync_with_stdio(false);
	std::unordered_map<std::string, std::string> dict;
	int n(0);std::cin>>n;
	int max = 1;
	std::vector<ll> input;
	int output;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		ll a;
		std::cin >> a;
		input.push_back(a);
	}
	std::sort(input.begin(), input.end());
	for (int i = 0; i < n; i++)
	{
		std::cout << input[i] << " ";
	}
  system("pause");
}