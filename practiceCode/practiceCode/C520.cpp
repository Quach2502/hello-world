//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int count[4] = {};
//ll opow(int x, int n)
//{
//	ll res(1);	
//	while(n)
//	{
//		n--;
//		res = (res * x) % 1000000007;
//
//	}
//	return res;
//}
//
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0);std::cin>>n;
//	int max = 1;
//	std::string input("");
//	int output;
//	std::cin>>input;
//	for(int i =0;i<n;i++)
//	{
//		if(input[i] == 'A') count[0]++;
//		if(input[i] == 'G') count[1]++;
//		if(input[i] == 'C') count[2]++;
//		if(input[i] == 'T') count[3]++;
//	}
//	int res = *std::max_element(count,count+4);
//	int c(0);
//	for(int i =0;i<4;i++)
//	{
//		if(count[i] == res) c++;
//	}
//	std::cout<<opow(c,n);
//}