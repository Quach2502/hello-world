//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <iomanip>
//typedef long long ll;
//std::vector<ll> w;
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n1,n2,n(0);std::cin>>n>>n1>>n2;
//	ll sum(0);
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		w.push_back(a);
//	}
//	std::sort(w.begin(), w.end());
//	for(int i = int(w.size())-n1-n2;i<int(w.size());i++)
//	{
//		sum+= w[i];
//	}
//	int mi = std::min(n1,n2); int ma= std::max(n1,n2);
//	ll temp(0);
//	for(int i = int(w.size())-n1-n2;i<=int(w.size())-n1-n2-1+ma;i++)
//	{
//		temp += w[i];
//	}
//	double r = 1.0*(ma*sum - (ma-mi)*temp)/(n1*n2);
//	std::cout<<std::setprecision(20)<<r;
//}