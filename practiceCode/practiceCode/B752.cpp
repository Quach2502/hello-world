//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//bool check[26];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<char, std::unordered_set<char>> dict;
//	std::string s,t;std::cin>>s>>t;
//	std::fill(check,check+26,false);
//	for(int i=0;i<s.length();i++)
//	{
//		dict[s[i]].insert(t[i]);
//	}
//	std::vector<std::pair<char,char>> result;
//	int output(0); bool flag= true;
//	for(auto i = dict.begin();i!=dict.end()&&flag;i++)
//	{
//		if(int(i->second.size()) > 1) flag= false;
//		else
//		{
//			char source = i->first;
//			char target = *i->second.begin();
//			if(!check[int(source)-97])
//			{
//				check[int(source)-97] = true;
//				check[int(target)-97] = true;
//				if(source != target)
//				{
//					if(dict[target].empty())
//					{
//						dict[target].insert(source);
//						output++;
//						result.push_back(std::make_pair(source,target));
//					}
//					else
//					{
//						if(*dict[target].begin() == source)
//						{
//							result.push_back(std::make_pair(source,target));
//							output++;
//						}
//						else
//							flag= false;
//					}
//				}
//			}
//		}
//	}
//	if(flag)
//	{
//	std::cout<<output<<'\n';
//	for(int i=0;i<result.size();i++)
//	{
//		std::cout<<result[i].first<<" "<<result[i].second<<'\n';
//	}
//	}
//	else
//		std::cout<<-1;
//
//}