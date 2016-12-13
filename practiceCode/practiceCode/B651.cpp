//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int count[1001] = {};
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0);std::cin>>n;
//	std::vector<std::unordered_set<int>> s;
//	int output(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		count[a]++;
//	}
//	while(flag)
//	{
//		std::vector<int> t;
//		flag = false;
//		for(int i =1;i<=1000;i++)
//		{
//			if(count[i] != 0 )
//			{
//				flag = true;
//				count[i]--;
//				t.push_back(i);
//			}
//		}
//		if(flag) output += int(t.size())-1;
//	}
//	std::cout<<output;
//}