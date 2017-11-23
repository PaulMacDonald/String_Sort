#include<iostream>
#include<string>
#include"StringSort.h"
using namespace std;

string sort(string &s)
{
	string sorted;

	int x = 1; // x is where we are in "s" (starts at 1 instead of 0 because we already added the first one down below
	int y = 0; // y is where we are in "sorted"

	sorted = s[0]; // Add the first letter of "s" to "sorted"

	while (x < s.length())
	{
		while (y <= x)//find insertion point
		{
			if (s[x] < sorted[y])
				break;

			y++;
		}

		if (y < x)
		{
			sorted.insert(y, 1, s[x]);//insert if not at end of sorted
		}

		else
		{
			sorted.append(s.substr(x, 1));//if at end of sorted, just append to sorted
		}

		y = 0;

		x++;
	}

	return sorted;
}