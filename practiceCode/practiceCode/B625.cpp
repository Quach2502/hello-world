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
	std::string g,a;
	std::getline(std::cin, g); 
	std::getline(std::cin, a);
	int max = 1;
	std::vector<ll> input;
	int output(0);
	int current(0);
	for (int i = 0; i < g.length(); i++)
	{
		if (input[i] != a[current])
		{
			current = 0;
		}
		else
		{
			if (current == a.length() - 1)
			{
				output++;
				current = 0;
			}
			else
			{
				current++;
			}
		}
	}
	std::cout << output;
}