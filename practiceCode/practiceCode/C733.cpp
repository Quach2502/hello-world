#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
typedef long long ll;
typedef std::vector<ll>::const_iterator vec_iter;
void path(vec_iter first, vec_iter last,ll comp)
{
	std::vector<ll> newVec(first,last);
	while(newVec.size()!=1)
	{
		ll cur(0);
		while(cur<newVec.size()-1)
		{
			if(newVec[cur] == newVec[cur+1])
				cur++;
			else
				break;
		}
		if(newVec[cur] > newVec[cur+1])
			{
				std::cout<<cur+1+comp<<" R\n";
				newVec[cur]+= newVec[cur+1];
				newVec.erase(newVec.begin()+cur+1);
		}	
		else
			{
				std::cout<<cur+2+comp<<" L\n";
				newVec[cur+1]+= newVec[cur];
				newVec.erase(newVec.begin()+cur);
		}	 
	}
}
void main()
{
	std::unordered_map<std::string, std::string> dict;
	ll n(0),k(0);
	int max = 1;
	std::vector<ll> before;
	std::vector<ll> after;
	std::vector<std::pair<ll,ll>> print;
	int output;
	ll cur(0);
	std::cin >> n;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		ll a;
		std::cin >> a;
		before.push_back(a);
	}
	std::cin>>k;
	for (int i = 0; i < k; i++)
	{
		ll a;
		std::cin >> a;
		after.push_back(a);
	}
	int i(0);
	while(i < k)
	{
		ll temp = cur;
		bool check = false;
		ll cum(0);
		ll sum = after[i];
		while(cur < n && (cum < sum))
		{
			if( cur !=0)
			{
				if(before[cur] != before[cur-1])
					check = true;
			}
			cum +=  before[cur];
			cur++;
		}
		if (cum == sum)
		{
			if(!check)
				break;
			else
			{
				print.push_back(std::make_pair(temp,cur-1));
				i++;
			}
		}
		else
		{
			flag = false;
			break;
		}
	}
	if (i == k && cur == n)
		{
			std::cout<<"YES\n";
			for(int x = 0 ;x < k;x++)
				path(before.begin()+print[x].first,before.begin()+print[x].second,x);
		}	
	else
		std::cout<<"NO";
	system("pause");
}