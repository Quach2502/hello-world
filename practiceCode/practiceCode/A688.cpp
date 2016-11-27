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
//	int n(0),d;std::cin>>n>>d;
//	int max = 1;
//	std::vector<ll> input;
//	int output(0);
//	int con(0);
//	bool flag = true;
//	for (int i = 0; i < d; i++)
//	{
//		bool flag = false;
//		std::string a;
//		std::cin >> a;
//		for (int j = 0; j < n; j++)
//		{
//			if (a[j] == '0')
//			{
//				flag = true;
//				break;
//			}
//		}
//		if(flag)
//		{
//			con++;
//			output = std::max(output, con);
//		}
//		else
//		{
//			output = std::max(output, con);
//			con = 0;
//		}
//	}
//	std::cout << output;
//}