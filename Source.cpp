#include<iostream>
#include<string>
#include"StringSort.h"
using namespace std;

int main()
{
	string src;
	cout << "Please enter a word: ";
	cin >> src;
	cout << "The word sorted is " << sort(src);
	cout << endl;

	return 0;
}