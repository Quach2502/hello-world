//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int count[100001] = {};
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<int,int> dict;
//	std::unordered_set<int> s;
//	int n(0),x;std::cin>>n>>x;
//	int max = 1;
//	std::vector<int> input;
//	int output(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//		count[a]++;
//		dict[a]++;
//	}
//	if(x==0)
//	{
//    	for ( int i = 0; i < n; i++)
//    	{
//    		output += count[i]*(count[i]-1)/2;
//    	}
//    	std::cout<<output;
//	}
//	else
//	{
//	    for (int i = 0; i < n; i++)
//    	{
//    		if(dict.find(x^input[i]) != dict.end())
//    			{
//    				output+= dict[x^input[i]];
//    			}
//    	
//    	}
//    	std::cout<<output/2;
//	}
//	
//}