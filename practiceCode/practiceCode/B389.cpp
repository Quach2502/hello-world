//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//char table[103][103];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0);std::cin>>n;
//	int sum(0);
//	std::vector<ll> input;
//	int output;
//	bool flag = true;
//	for (int i = 0; i <= 102; i++)
//	{
//		for (int j = 0; j <=102; j++)
//			table[i][j] = '.';
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		std::string a;
//		std::cin >> a;
//		for (int j = 1; j <= n; j++)
//		{
//			if (a[j - 1] == '#') sum++;
//			table[i][j] = a[j-1];
//		}
//	}
//	if (sum == 0) std::cout << "YES";
//	else
//	{
//		if(sum%5 != 0 ) std::cout << "NO";
//		else
//		{
//			while (sum != 0 && flag)
//			{
//				int r(0), c(0);
//				for (int i = 1; i <= n; i++)
//				{
//					for (int j = 1; j <= n; j++)
//					{
//						if (table[i][j] == '#')
//						{
//							r = i; c = j;
//							break;
//						}
//					}			
//				}
//				if (table[r - 1][c] == '.' || table[r - 2][c] == '.' || table[r - 1][c + 1] == '.' || table[r - 1][c - 1] == '.')
//					flag = false;
//				else
//				{
//					sum -= 5; 
//					table[r][c] = '.';
//					table[r - 1][c] = '.'; table[r - 2][c] = '.'; table[r - 1][c-1] = '.'; table[r - 1][c+1] = '.';
//				}
//			}
//			if (flag) std::cout << "YES";
//			else
//				std::cout << "NO";
//		}
//	}
//}