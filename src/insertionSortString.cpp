//============================================================================
// Name        : cpp_practise.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
// just replace int with string.
void ins_sort(string arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		string k=arr[i];
		int j;
		for(j=i-1;j>=0;)
		{
			if(arr[j]>k)
			{
				arr[j+1]=arr[j];
				j--;
			}
			else
			{
				//j--;// not needed
				break;
			}
		}
		arr[j+1]=k;

	}

}
int main() {
	string a[]={"yahya","moonis", "abdul", "hanya", "afren", "bush"};
	int n=sizeof(a)/sizeof(a[0]);
	ins_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout << "#@!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
