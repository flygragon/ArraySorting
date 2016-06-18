// ArraySorting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"Sort0-1-2Array.h"
using namespace std;

int main()
{
	vector<int> arr(10);
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	Solution S1;
	S1.sortColors(arr);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << '\n';
    return 0;
}

