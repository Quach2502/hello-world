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
//	bool col[100002];
//	bool row[100002];
//	int n(0),m;std::cin>>n>>m;
//	int max = 1;
//	std::vector<ll> input;
//	ll res(n*n);
//	std::fill(col,col+100002,false);
//	std::fill(row,row+100002,false);
//	bool flag = true;
//	ll forrow(0),forcol(0);
//	while(m--)
//	{
//		int x,y;
//		std::cin >> x>>y;
//		if(!col[y])
//		{
//			col[y]= true;
//			forcol++;
//		}	
//		if(!row[x])
//		{
//			row[x]= true;
//			forrow++;
//		}		
//		std::cout<<res-((forrow+forcol)*n-forrow*forcol)<<" ";
//	}
//	
//}