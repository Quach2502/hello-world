//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	std::unordered_set<int> set;
//	int n; std::cin>>n;
//	int count(0);
//	std::vector<int> input;
//	int output;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		set.insert(a);
//	}
//	if( set.size() <= 2)
//	{
//		std::cout<<"YES";
//	}
//	else
//	{
//		if(set.size()>=4)
//			std::cout<<"NO";
//		else
//		{
//	for (auto i = set.begin();i != set.end();i++)
//		input.push_back(*i);
//	std::sort(input.begin(),input.end());
//	if ( input[0] + input[2] == 2*input[1])
//		std::cout<<"YES";
//	else
//		std::cout<<"NO";
//		}
//	}
//}