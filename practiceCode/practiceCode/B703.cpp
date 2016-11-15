//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int input[100001];
//bool c[100001];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),k;std::cin>>n>>k;
//	std::vector<int> cap;
//	int max = 1;
//	ll output(0);
//	ll sum(0);
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//	{
//		c[i] = false;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input[i] = a;
//		sum+=a;
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		int a;
//		std::cin >> a;
//		cap.push_back(a);
//		c[a] = true;
//	}
//	for(int i = 0;i<k;i++)
//	{
//		output += input[cap[i]] * (sum - input[cap[i]]);
//		sum -= input[cap[i]];
//	}
//	for (int i = 1; i < n; i++)
//	{
//		if(!c[i] && !c[i+1])
//			output += input[i]*input[i+1];
//	}
//	if(!c[n]&&!c[1])
//		output += input[n]*input[1];
//	std::cout<<output;
//}