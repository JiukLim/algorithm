#include <iostream>
using namespace std;

/* insertion sort�� Ÿ�� ���ڰ� ���� �� �ڸ��� ã�� ���̴�.*/
void insertion_sort(int arr[], int n){
	for (int i = 1; i < n; i++){
		for (int j = 0; j < i; j++){
			if (arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	for (int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}cout << endl;

	insertion_sort(arr, 10);
	
	for (int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}cout << endl;

	return 0;
}