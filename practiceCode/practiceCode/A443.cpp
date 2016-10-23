//#include <iostream>
//#include<string>
//#include <vector>
//#include<algorithm>
//void main()
//{
//	std::vector<char> store;
//	std::string input("");
//	std::getline(std::cin, input);
//	int output = 0;
//	for (int i = 0; i < input.length(); i++)
//		store.push_back(input[i]);
//	store.erase(std::remove_if(store.begin(), store.end(), [](char c) {return (c == '{') || (c == '}') || (c == ',') || (c == ' '); }), store.end());
//	std::sort(store.begin(), store.end());
//	auto var = std::unique(store.begin(),store.end());
//	store.erase(var, store.end());
//	std::cout << store.size();
//}