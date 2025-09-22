#include <iostream>
using namespace std;
/*
 * ✅ Bottom line:

fn(int arr[]) = fn(int* arr) in function parameters.

Both mean “pointer to int”. no difference at all. we can use[] with pointer as well.

✅ Summary
int arr[5] is an array of 5 ints (arr is of type int[5]).
Note1: In most expressions, it decays to int*. i.e sizeof() dont work inside function.
Note2: &arr → pointer to the whole array

int* arr / int arr[] in a function → pointer, size lost.
Solution in C:
1. pass size explicitly
2. we can use reference to array (with template) to preserve the size.

int (&arr)[N] → reference to array, size preserved.
 */
template <size_t T> void func_size(int (&arr)[T])
{

	cout<<sizeof(arr)/sizeof(arr[0]);

}
int main() {
	int arr[5]={1,2,3,4,5};
	func_size(arr);
	return 0;
}
