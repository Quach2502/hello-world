//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int input[1002][1002];
//bool row1[1002];
//bool col1[1002];
//std::pair<int,int> row[1002];
//std::pair<int,int> col[1002];
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),m;std::cin>>n>>m;
//	int max = 1;
//	int output(0);
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//		row1[i] = false;
//	for (int i = 1; i <= m; i++)
//		col1[i] = false;
//	for (int i = 1; i <= n; i++)
//	{
//		int max(0),min(10000);
//		for (int j = 1; j <= m; j++)
//		{
//			int a;
//			std::cin>>a;
//			if(a==1)
//				{
//					row1[i] = true;
//					if(min ==10000) min = j;
//					max=j;
//				}
//			input[i][j]= a;
//		}
//		row[i] =std::make_pair(min,max);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int max(0),min(10000);;
//		for (int j = 1; j <= n; j++)
//		{
//			if(input[j][i]==1)
//			{
//				col1[i] = true;
//				if(min ==10000) min = j;
//				max=j;
//			}
//		}
//		col[i] =std::make_pair(min,max);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if(input[i][j] ==1)continue;
//			if(col1[j]){
//
//			if(i<col[j].first)output++;
//			else
//			{
//					if(i<col[j].second)output+=2;
//					else
//						output++;
//			}}
//			if(row1[i]){	
//				if(j<row[i].first)output++;
//				else
//				{
//					if(j<row[i].second)output+=2;
//					else
//						output++;
//				}
//			}
//		}
//	}
//	std::cout<<output;
//}