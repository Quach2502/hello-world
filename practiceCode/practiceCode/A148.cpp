//#include <iostream>
//#include <vector>
//#include<algorithm>
//void main()
//{
//	int k(0), l(0), m(0), n(0), d(0);
//	int max = 0;
//	std::vector<int> input;
//	std::cin >> k >> l >> m >> n >> d;
//	int output = 0;
//	bool flag = true;
//	for (int i = 0; i < d; i++)
//	{
//		input.push_back(i + 1);
//	}
//
//	input.erase(std::remove_if(input.begin(), input.end(), [k](int c) {return c%k==0;}), input.end());
//	input.erase(std::remove_if(input.begin(), input.end(), [l](int c) {return c%l==0; }), input.end());
//	input.erase(std::remove_if(input.begin(), input.end(), [m](int c) {return c%m==0; }), input.end());
//	input.erase(std::remove_if(input.begin(), input.end(), [n](int c) {return c%n==0; }), input.end());
//	std::cout << d-input.size();
//}