//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//ll len(int x1,int y1,int x2,int y2)
//{
//	return 1ll*(x1-x2)*(x1-x2) + 1ll*(y1-y2)*(y1-y2);
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),x1,y1,x2,y2;std::cin>>n>>x1>>y1>>x2>>y2;
//	ll maxfor2(0);
//	std::vector<ll> dist1,dist2;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int x,y;
//		std::cin >> x>>y;
//		dist1.push_back(len(x1,y1,x,y));
//		dist2.push_back(len(x2,y2,x,y));
//		maxfor2 = std::max(maxfor2,len(x2,y2,x,y));
//	}
//	ll min  = maxfor2;
//	for (int i = 0; i < n; i++)
//	{
//		ll r1 = dist1[i];
//		ll max2(0);
//		for (int j = 0; j < n; j++)
//		{
//			if(dist1[j] <= r1)continue;
//			else
//				max2 = std::max(max2,dist2[j]);
//		}
//		min = std::min(min,max2+r1);
//	}
//	std::cout<<min;
//}