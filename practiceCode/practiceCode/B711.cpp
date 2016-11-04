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
//	std::unordered_set<ll> total;
//	std::unordered_set<ll> expect;
//	int number(0);
//	int max = 1;
//	int row, col;
//	std::vector<std::vector<ll>> input;
//	int output;
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		std::vector<ll> a;
//		for (int j = 0; j < number; j++)
//		{
//			ll b;
//			std::cin >> b;
//			a.push_back(b);
//			if (b == 0)
//			{
//				row = i;
//				col = j;
//			}
//		}
//		input.push_back(a);
//	}
//	int i(0);
//	while (i < number && flag)
//	{
//		if (i == row)
//			i++;
//		else
//		{
//			ll sum(0);
//			for (int j = 0; j < number; j++)
//				sum += input[i][j];
//			if (total.size() == 0)
//				total.insert(sum);
//			else
//			{
//				int size = total.size();
//				total.insert(sum);
//				if (total.size() != size)
//				{
//					flag = false;
//				}
//			}
//			i++;
//		}
//	}
//	i = 0;
//	while (i < number && flag)
//	{
//		if (i == col)
//			i++;
//		else
//		{
//			ll sum(0);
//			for (int j = 0; j < number; j++)
//				sum += input[j][i];
//			if (total.size() == 0)
//				total.insert(sum);
//			else
//			{
//				int size = total.size();
//				total.insert(sum);
//				if (total.size() != size)
//				{
//					flag = false;
//				
//				}
//			}
//			i++;
//		}
//	}
//	if (row != col && flag)
//	{
//		ll sum = 0;
//		for (int x = 0; x < number; x++)
//			sum += input[x][x];
//		if (total.size() == 0)
//			total.insert(sum);
//		else
//		{
//			int size = total.size();
//			total.insert(sum);
//			if (total.size() != size)
//			{
//				flag = false;
//			}
//		}
//	}
//	if ((row + col) != (number - 1) && flag)
//	{
//		ll sum = 0;
//		for (int x = 0; x < number; x++)
//			sum += input[x][number - 1 - x];
//		if (total.size() == 0)
//			total.insert(sum);
//		else
//		{
//			int size = total.size();
//			total.insert(sum);
//			if (total.size() != size)
//			{
//				flag = false;
//			}
//		}
//	}
//	if (flag)
//	{
//		ll sum(0);
//		for (int x = 0; x < number; x++)
//			sum += input[row][x];
//		if (expect.size() == 0)
//			expect.insert(sum);
//		else
//		{
//			int size = expect.size();
//			expect.insert(sum);
//			if (expect.size() != size)
//			{
//				flag = false;
//			}
//		}
//		sum = 0;
//		for (int x = 0; x < number; x++)
//			sum += input[x][col];
//		if (expect.size() == 0)
//			expect.insert(sum);
//		else
//		{
//			int size = expect.size();
//			expect.insert(sum);
//			if (expect.size() != size)
//			{
//				flag = false;
//			}
//		}
//		if (row == col)
//		{
//			ll sum1(0);
//			for (int x = 0; x < number; x++)
//				sum1 += input[x][x];
//			if (expect.size() == 0)
//				expect.insert(sum1);
//			else
//			{
//				int size = expect.size();
//				expect.insert(sum1);
//				if (expect.size() != size)
//				{
//					flag = false;
//				}
//			}
//		}
//		if ((row + col) == (number - 1) && flag)
//		{
//			ll sum1 = 0;
//			for (int x = 0; x < number; x++)
//				sum1 += input[x][number - 1 - x];
//			if (expect.size() == 0)
//				expect.insert(sum1);
//			else
//			{
//				int size = expect.size();
//				expect.insert(sum1);
//				if (expect.size() != size)
//				{
//					flag = false;
//				}
//			}
//		}
//	}
//	if (!flag)
//		std::cout << -1 << '\n';
//	else
//	{
//		ll result = *total.begin() - *expect.begin();
//		if ( result  <= 0)
//			std::cout << -1 << '\n';
//		else
//			std::cout << result << '\n';
//	}
//}