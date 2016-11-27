//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int input[101];
//ll preS[101];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),m;std::cin>>n>>m;
//	ll sum(0);
//	int output;
//	bool flag = true;
//	for (int i = 1; i <=n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input[i] = a;
//	}
//	preS[0]= 0;
//	preS[1] = input[1];
//	for (int i = 2; i <=n; i++)
//	{
//		preS[i] = preS[i-1] + input[i]; 
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int l,r;
//		std::cin >> l>>r;
//		ll check= preS[r]-preS[l-1];
//		if(check > 0)
//			sum+= check;
//	}
//	std::cout<<sum;
//}