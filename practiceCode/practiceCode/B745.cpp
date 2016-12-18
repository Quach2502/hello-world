//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int row[500]; int col[500];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),m;std::cin>>n>>m;
//	for (int i = 0; i < n; i++)
//	{
//		std::string temp; std::cin>>temp;
//		for (int j  = 0; j < m; j++)
//		{
//			if(temp[j]=='X') 
//				{
//					col[j]++;
//					row[i]++;
//				}	
//		}
//	}
//	bool flag = true;
//	for (int i = 0; i < n-1; i++)
//	{
//		if(row[i+1]!=0 && row[i] != 0)
//		{
//			if(row[i+1] != row[i]) flag = false;
//		}
//	}
//	for (int i = 0; i < m-1; i++)
//	{
//		if(col[i+1]!=0 && col[i] != 0)
//		{
//			if(col[i+1] != col[i]) flag = false;
//		}
//	}
//	if(flag) std::cout<<"YES";
//	else std::cout<<"NO";
//}