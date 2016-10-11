//#include <iostream>
//#include <vector>
//#define int long long
//void main()
//{
//	int number(0);
//	std::cin >> number;
//	int output[15][15] = {};
//	for (int i = 1; i <= number; i++)
//	{
//		output[1][i] = 1;
//	}
//	for (int i = 1; i <= number; i++)
//	{
//		output[i][1] = 1;
//	}
//	for (int i = 2; i <= number; i++)
//	{
//		for (int j = 2; j <= number; j++)
//		output[i][j] = output[i - 1][j] + output[i][j - 1];
//	}
//	std::cout << output[number][number];
//}