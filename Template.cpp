#include <iostream>
#include <string>

using namespace std;

template <typename T>  // declaring that template parameters called FIRST, SECOND AND THRID are being used 

void sort(T arr[], int n){
	T iMax;

	T temp;

	for (int i = 0; i < n - 1; i++){
		iMax = i;
		for (int j = i + 1; j < n; j++){
			if (arr[j] > arr[iMax]){
				iMax = j;
			}
		}
		if (iMax != i){
			temp = arr[i];
			arr[i] = arr[iMax];
			arr[iMax] = temp;
		}
	}



}



int main(){
	int a[5] = { 5, 3, 18 ,100, 25 };

		sort(a, 5);

	for (int i = 0; i < 5; i++){
		cout << a[i] << " ";

		cout << endl;

		
	}


}