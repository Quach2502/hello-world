//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),h,k;std::cin>>n>>h>>k;
//	ll s (0);
//	std::vector<ll> input;
//	ll current(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if(i!=n-1)
//		{
//			if(current+ input[i] <= h)
//				current += input[i];
//			else
//			{
//				ll dif(0);
//				if((current+input[i]-h)%k==0)
//					 dif = ll((current+input[i]-h)/k);
//				else
//					 dif = ll((current+input[i]-h)/k)+1;
//				s += dif;
//				current -= dif *k;
//				if(current<0)
//					current =0;
//				current += input[i];
//			}
//		}
//		else
//		{
//			if(current+ input[i] <= h)
//				current += input[i];
//			else
//			{
//				ll dif(0);
//				if((current+input[i]-h)%k==0)
//					 dif = ll((current+input[i]-h)/k);
//				else
//					 dif = ll((current+input[i]-h)/k)+1;
//				s += dif;
//				current -= dif *k;
//				if(current<0)
//					current =0;
//				current += input[i];
//			}
//			if(current%k==0)
//				s+= ll(current/k);
//			else
//				s+= ll(current/k) + 1;
//		}
//	}
//  std::cout<<s;
//}