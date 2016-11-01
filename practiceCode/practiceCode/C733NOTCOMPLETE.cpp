//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//typedef std::vector<ll>::const_iterator vec_iter;
//void path(vec_iter first, vec_iter last,ll comp)
//{
//	std::vector<ll> newVec(first,last);
//	ll pos = std::max_element(newVec.begin(),newVec.end()) - newVec.begin();
//	ll temp = pos;
//	if (newVec.size() == 1)
//		return;
//	if (pos == 0 )
//	{
//		while (*(newVec.begin() + pos) == *(newVec.begin() + pos + 1))
//			pos++;
//		for (int i = 0; i < newVec.size() - 1 - pos; i++)
//			std::cout << (pos +1+ comp) << " R\n";
//		while (pos > 0)
//		{
//			std::cout << pos + 1 + comp << " L\n";
//			pos--;
//		}
//	}
//	else
//	{
//		while (pos > 0)
//		{
//			std::cout << pos + 1 + comp << " L\n";
//			pos--;
//		}
//		for (int i = 0; i < newVec.size() - 1 - temp; i++)
//			std::cout << 1 + comp << " R\n";
//	}
//}
//void main()
//{
//	std::unordered_map<std::string, std::string> dict;
//	ll n(0),k(0);
//	int max = 1;
//	std::vector<ll> before;
//	std::vector<ll> after;
//	std::vector<std::pair<ll,ll>> print;
//	int output;
//	ll cur(0);
//	std::cin >> n;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		ll a;
//		std::cin >> a;
//		before.push_back(a);
//	}
//	std::cin>>k;
//	for (int i = 0; i < k; i++)
//	{
//		ll a;
//		std::cin >> a;
//		after.push_back(a);
//	}
//	int i(0);
//	while(i < k)
//	{
//		ll temp = cur;
//		bool check = false;
//		ll cum(0);
//		ll sum = after[i];
//		while(cur < n && (cum < sum))
//		{
//			if( cur !=0)
//			{
//				if(before[cur] != before[cur-1])
//					check = true;
//			}
//			cum +=  before[cur];
//			cur++;
//		}
//		if (cum == sum)
//		{
//			if (!check && (cur != temp+1))
//			{
//				break;
//			}
//			else
//			{
//				print.push_back(std::make_pair(temp,cur-1));
//				i++;
//			}
//		}
//		else
//		{
//			flag = false;
//			break;
//		}
//	}
//	if (i == k && cur == n)
//		{
//			std::cout<<"YES\n";
//			for(ll x = 0 ;x < k;x++)
//			{
//				path(before.begin()+print[x].first,before.begin()+print[x].second+1,x);
//			}
//		}	
//	else
//		std::cout<<"NO";
//}