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
	ll n(0),m,k,x,s;std::cin>>n>>m>>k>>x>>s;
	std::vector<int> spellFirstE; std::vector<int> spellFirstC; std::vector<int> spellSecondE; std::vector<int> spellSecondC;
	ll output = n*x;
	bool flag = true;
	for (int i = 0; i < m; i++)
	{
		int a;
		std::cin >> a;
		spellFirstE.push_back(a);
	}
	for (int i = 0; i < m; i++)
	{
		int a;
		std::cin >> a;
		spellFirstC.push_back(a);
	}
	for (int i = 0; i < k; i++)
	{
		int a;
		std::cin >> a;
		spellSecondE.push_back(a);
	}
	for (int i = 0; i <k; i++)
	{
		int a;
		std::cin >> a;
		spellSecondC.push_back(a);
	}
	for (int i = 0; i < m; i++)
	{
		int sample = s - spellFirstC[i];
		if (sample < 0)
			sample = s;
		if (sample < spellSecondC[0])
			{
				if(sample != s)
					{
						ll result = n * spellFirstE[i];
						output = std::min(output,result);
					}
				else
					continue; 
			}

		else
		{
			ll result(0);
			auto use = std::lower_bound(spellSecondC.begin(), spellSecondC.end(), sample) - spellSecondC.begin()-1;
			if(s > spellFirstC[i])
				result = (n - spellSecondE[use]) * (spellFirstE[i]);
			else
				result = (n - spellSecondE[use]) * x;
			output = std::min(output, result);
		}
	}
	std::cout << output;
}