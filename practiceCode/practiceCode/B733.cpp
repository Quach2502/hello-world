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
//	std::unordered_map<std::string, std::string> dict;
//	ll number(0);
//	int max = 1;
//	std::vector<std::pair<ll,ll>> leftD;
//	std::vector<std::pair<ll,ll>> rightD;
//	ll left(0),right(0);
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		ll l,r;
//		std::cin >> l>>r;
//		left +=l;
//		right += r;
//		if ( l>= r)
//			leftD.push_back(std::make_pair(l-r,i));
//		else
//			rightD.push_back(std::make_pair(r-l,i));
//	}
//	std::sort(leftD.begin(), leftD.end());
//	std::sort(rightD.begin(), rightD.end());
//	if (left > right)
//	{
//		ll dif = left - right;
//		if (rightD.size() == 0)
//		{
//			if (leftD[leftD.size()-1].first > 2*dif)
//				std::cout<<leftD[leftD.size()-1].second + 1;
//			else
//				std::cout<<0;
//		}
//		else
//		{
//			if((2*leftD[leftD.size()-1].first - dif) > (dif + 2*rightD[rightD.size()-1].first ))
//				std::cout<<leftD[leftD.size()-1].second + 1;
//			else
//				std::cout<<rightD[rightD.size()-1].second + 1;
//		}
//	}
//	if (left < right)
//	{
//		ll dif = right - left;
//		if (leftD.size() == 0)
//		{
//			if (rightD[rightD.size()-1].first > 2*dif)
//				std::cout<<rightD[rightD.size()-1].second + 1;
//			else
//				std::cout<<0;
//		}
//		else
//		{
//			if((2*rightD[rightD.size()-1].first - dif) > (dif + 2*leftD[leftD.size()-1].first ))
//				std::cout<<rightD[rightD.size()-1].second + 1;
//			else
//				std::cout<<leftD[leftD.size()-1].second + 1;
//		}
//	}
//	if (left == right)
//	{
//		if(rightD.size()==0)
//			std::cout<<0;
//		else
//		{
//		if (leftD[leftD.size()-1].first <= rightD[rightD.size()-1].first)
//			std::cout<<rightD[rightD.size()-1].second + 1;
//		else
//			std::cout<<leftD[leftD.size()-1].second + 1;}
//	}
//}