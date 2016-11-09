//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//
//class Node
//{
//public:
//	Node(int);
//	int data;
//	Node* parent;
//	Node* left;
//	Node* right;
//};
//Node::Node(int n)
//{
//	data = n;
//	left = nullptr;
//	right = nullptr;
//	parent = nullptr;
//}
//class BST
//{
//public:
//	BST();
//	int add(int,Node*);
//	Node* root;
//	bool isEmpty();
//};
//
//BST::BST()
//{
//	root = nullptr;
//}
//bool BST::isEmpty()
//{
//	if (root == nullptr)
//		return true;
//	else
//		return false;
//}
//int BST::add(int n,Node* r)
//{
//	if (n > r->data)
//	{
//		if (r->right == nullptr)
//		{
//			Node* s= new Node(n);
//			s->parent = r;
//			r->right = s;
//			return r->data;
//		}
//		else
//			return add(n, r->right);
//	}
//	else
//	{
//		if (r->left == nullptr)
//		{
//			Node* s = new Node(n);
//			s->parent = r;
//			r->left = s;
//			return r->data;
//		}
//		else
//			return add(n, r->left);
//	}
//}
//void main()
//{
//	BST c;
//	std::vector<int> parent;
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0);std::cin>>n;
//	for (int i = 0; i < n; i++)
//	{
//		int a;	std::cin >> a;
//		if (c.isEmpty())
//		{
//			c.root = new Node(a);
//		}
//		else
//		{
//			parent.push_back(c.add(a, c.root));
//		}
//	}
//	for (int i = 0; i < parent.size(); i++)
//	{
//		std::cout << parent[i] << " ";
//	}
//}