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
//	int sum(0);
//	int input[110];
//	int output;
//	bool chose[110];
//	std::fill(chose,chose+110,false);
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input[i]=a;
//		sum+=a;
//	}
//	int each = sum*2/n;
//	for (int i = 1; i <= n; i++)
//	{
//		if(!chose[i])
//		{
//			std::cout<<i<<" ";
//			bool flag = false;
//			chose[i] = true;
//			int need = each - input[i];
//			for(int j =1; j<=n && !flag;j++)
//			{
//				if(!chose[j] && input[j] == need)
//				{
//					chose[j] = true;
//					flag = true;
//					std::cout<<j<<'\n';
//				}
//			}
//		}
//	}
//
//
//}