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
//	int n(0);std::cin>>n;
//	std::pair<int,int> input[367];
//	int output(0);
//	bool flag = true;
//	for (int i = 1; i < 367; i++)
//		input[i] = std::make_pair(0, 0);
//	for (int i = 0; i < n; i++)
//	{
//		std::string g; int a, b;
//		std::cin >> g>>a>>b;
//		if (g == "M")
//		{
//			for (int i = a; i <= b; i++)
//			{
//				input[i].first+= 1;
//				input[i].second+=1;
//			}
//		}
//		else
//		{
//			for (int i = a; i <= b; i++)
//			{
//				input[i].second+=1;
//			}
//		}
//	}
//	for (int i = 1; i <=366; i++)
//	{
//		int t = std::min(input[i].first, input[i].second - input[i].first)*2;
//		output = std::max(t, output);
//	}
//	std::cout << output;
//}