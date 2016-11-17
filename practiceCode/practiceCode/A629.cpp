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
//	int max = 1;
//	int input[101][101];
//	ll output(0);
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum(0);
//		std::string a; std::cin >> a;
//		for (int j = 1; j <= n; j++)
//		{
//			if (a[j - 1] == 'C')
//			{
//				sum++;
//				input[i][j] = 1;
//			}
//			else
//				input[i][j] = 0;
//		}
//		output += sum*(sum - 1) / 2;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int sum(0);
//		for (int j = 1; j <= n; j++)
//		{
//			if (input[j][i] == 1)
//				sum++;
//		}
//		output += sum*(sum - 1) / 2;
//	}
//	std::cout << output;
//}