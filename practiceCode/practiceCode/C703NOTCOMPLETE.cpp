//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int sumX[1000001];
//int sumSet[1000001];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	std::unordered_set<int> s;
//	int n(0);std::cin>>n;
//	int sum(0);
//	int sample(0);
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//	{
//		int temp = s.size();
//		int a;
//		std::cin >> a;
//		s.insert(a);
//		sum ^= a;
//		if(temp != s.size())
//			sample^= a;
//		sumSet[i] = sample;
//		sumX[i] = sum;
//	}
//	int query;std::cin>>query;
//	for (int i = 0; i < query; i++)
//	{
//		int l,r;std::cin>>l>>r;
//		ll result = sumSet[l]^sumSet[r]^sumX[l]^sumX[r];
//		std::cout<<result<<'\n';}
//	
//}