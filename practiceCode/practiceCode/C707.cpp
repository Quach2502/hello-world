#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
typedef long long ll;
#define ESP 1e-9
void main()
{
	std::ios::sync_with_stdio(false);
	std::unordered_map<std::string, std::string> dict;
	ll n;
	int output;
	std::cin >> n;
	bool flag = true;
	ll m(0), k(0);
	for (m = 1; m <= n / 2 && flag; m++)
	{
		k = n*n - m*m;
		ll r = ll(sqrt(double(k)));
		if (abs(r*r - k) < ESP)
		{
			flag = false;
			std::cout << m << " " << r;
		}
	}
	if (flag)
	{

	}
	
  system("pause");
}