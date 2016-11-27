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
//	int n,k;std::cin>>n>>k;
//	int max = 1;
//	int input[101];
//	int mi(110),ma(0);
//	bool min[101];
//	bool flag = true;
//	for (int i = 1; i <= 101; i++)
//	{
//		min[i]=false;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		std::cin >> a;
//		mi = std::min(a,mi);
//		ma = std::max(a,ma);
//		input[i] = a;
//		min[a]=true;
//	}
//	if(ma - mi > k)
//	{
//		std::cout<<"NO";
//	}
//	else
//	{
//		std::cout<<"YES\n";
//        for (int i = 1; i <= n; ++i)
//		{
//			for (int j = 1; j <=input[i]; j++)
//			{
//				if(j<=mi)
//					std::cout<<"1 ";
//				else
//					std::cout<<j-mi<<" ";
//				std::cout <<'\n';
//			}
//		}
//    }
//}