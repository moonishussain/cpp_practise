//============================================================================
// Name        : cpp_practise.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void ins_sort(int arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		int k=arr[i];
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
	int a[]={2,3,7,1,2,0,5,4};
	int n=sizeof(a)/sizeof(int);
	ins_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout << "#@!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
