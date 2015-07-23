#include <iostream>
using namespace std;

int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2 , 1};

void swap(int a, int b){
	int temp;
	temp = arr[a]; 
	arr[a] = arr[b];
	arr[b] = temp;
}

void selection_sort(){
	int current_min, current_idx;
	for (int i = 0; i < 10; i++){
		current_min = arr[i]; current_idx = i;
		for (int j = i; j < 10; j++){
			if (arr[j] < current_min){
				current_min = arr[j];
				current_idx = j;
			}
		}
		if (current_idx != -1)
			swap(i, current_idx);
	}
}

int main(){
	for (int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}cout << endl;

	selection_sort();
	for (int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}cout << endl;

	return 0;
}