//============================================================================
// Name        : cpp_practise.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 * ✅ Summary of return types

new T → T*
new T[] → T*
new T* → T**
new T*[N] → T**
 */
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// just replace int with string.
void ins_sort(char* arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		char* k=arr[i];
		int j;
		for(j=i-1;j>=0;)
		{
			if(strcmp(arr[j],k)>0)
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
	char s1[]="yahya";
	char s2[]="aahya";
	char s3[]="hya";
	char s4[]="bahya";
	char *arr[]={s1,s2,s3,s4}; // writable
	//string a[]={"yahya","moonis", "abdul", "hanya", "afren", "bush"};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	ins_sort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout << "#@!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
/*
 * 🔑 Key Differences
Aspect				char str[M][N]						char* arr[M]
Memory layout	Contiguous 2D block						Array of pointers, each pointing anywhere
String length	Fixed max length (N)					Variable length
Flexibility		Less flexible (all rows same size)		More flexible
Allocation		Static at compile time					Can point to static/dynamic strings
Access			str[i] is a char* to row i				arr[i] is already a char*

🔑 Key takeaway

char* arr[] itself is an array of pointers → the pointers are writable.

Whether the strings they point to are writable depends on how they were created:

"literal" → read-only.

char s[] = "..." → writable.
 */

