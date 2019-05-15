#include <iostream>
#include <stdio.h>

/* 
Find the nth smallest number:

Given input: ([] array, n)

output: nth smallest number of array

ex:
array[]={3,2,5,7}
output(array[],3)=5


Common Running Time
There are some common running times when analyzing an algorithm:

O(1) - Constant Time Constant time means the running time is constant, it¡¯s not affected by the input size.

O(n) - Linear Time When an algorithm accepts n input size, it would perform n operations as well.

O(log n) - Logarithmic Time Algorithm that has running time O(log n) is slight faster than O(n). Commonly, algorithm divides the problem into sub problems with the same size. Example: binary search algorithm, binary conversion algorithm.

O(n log n) - Linearithmic Time This running time is often found in "divide & conquer algorithms" which divide the problem into sub problems recursively and then merge them in n time. Example: Merge Sort algorithm.

O(n2) - Quadratic Time Look Bubble Sort algorithm!

O(n3) - Cubic Time It has the same principle with O(n2).

O(2n) - Exponential Time It is very slow as input get larger, if n = 1000.000, T(n) would be 21000.000. Brute Force algorithm has this running time.

O(n!) - Factorial Time THE SLOWEST !!! Example : Travel Salesman Problem (TSP)
 */
using namespace std;

int min(int arr[], int size, int n);

int main(){

	int a[]={2,5,4,7};
	int size = sizeof(a)/sizeof(a[0]);
	cout << min(a,size,4);
	return 0;
}


int min(int arr[], int size, int n){
	int min;
	int index;
	
	for (int i=0; i<n; i++){
		min = arr[i];
		bool isMin=true;
		for (int j=i; j<size; j++){
			
			if (arr[j] < min){
				min = arr[j];
				index = j;
				isMin = false;
			}
			else if(isMin)
				index = i;
		}
		int tmp = arr[i];
		arr[i]=min;
		arr[index]=tmp;
			
	}
	
	
	return min;
	
}