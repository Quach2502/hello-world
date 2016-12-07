//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int count[100001] = {};
//bool visit[100001];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<int,int> dict;
//	std::unordered_set<int> s;
//	int n(0),x;std::cin>>n>>x;
//	std::fill(visit, visit + 100001, false);
//	int max = 1;
//	std::vector<int> input;
//	ll output(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//		count[a]++;
//		s.insert(a);
//	}
//	if(x==0)
//	{
//    	for (auto i = s.begin(); i != s.end(); i++)
//    	{
//				output += 1ll *count[*i] * (count[*i] - 1) / 2;
//    	}
//    	std::cout<<output;
//	}
//	else
//	{
//
//	    for (int i = 0; i < n; i++)
//    	{
//			if (!visit[input[i]])
//			{
//				if (s.find(x^input[i]) != s.end())
//				{
//					output +=1ll* count[x^input[i]]*count[input[i]];
//					visit[x^input[i]] = true;
//					visit[input[i]] = true;
//				}
//			}
//    	
//    	}
//    	std::cout<<output;
//	}
//	
//}