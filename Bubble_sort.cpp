#include <iostream>
using namespace std;

int arr[6] = { 3, 5, 0, 2, 1, 4 };

void swap(int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void bubble_sort(){
	for (int i = 0; i < 6; i++){
		for (int j = i + 1; j < 6; j++){
			if (arr[i] > arr[j]){
				swap(i, j);
			}
		}
	}
}

int main(){
	for (int i = 0; i < 6; i++){
		cout << arr[i] << " ";
	}cout << endl;
	bubble_sort();
	for (int i = 0; i < 6; i++){
		cout << arr[i] << " ";
	}cout << endl;
	return 0;
}