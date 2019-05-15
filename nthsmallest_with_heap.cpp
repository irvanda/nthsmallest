#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int arr[] = {2,5,4,7,12,1,3,13,15,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int n = 3;

	vector<int> v2;
	v2.resize(0);
	
	//converting vector into a heapcheck
	make_heap(v2.begin(), v2.end());
	
	for (int i=0; i<size; i++){
		if(v2.size()==n){
			if(v2.front() > arr[i]){
				
				pop_heap(v2.begin(),v2.end());
				v2.pop_back();
				v2.push_back(arr[i]);
				push_heap(v2.begin(), v2.end());
			}
		}
			
		else{
			
			v2.push_back(arr[i]);
			push_heap(v2.begin(),v2.end());
		}
	}
	
	cout << v2.front();
	
	return 0;
}