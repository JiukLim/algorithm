/*�迭�� �־����� �� �迭���� �ִ밪�� ã�� ���̴�.*/

#include <iostream>
using namespace std;

int findMax(int arr[], int n){
	/* ���� ó�� */
	if (n < 1)
		return -1;
	/* �� �� �� */
	int maxvalue = arr[0];

	/* 2��° �� ���� ������ �ִ밪�� ���ؼ� ��� �������ش�.*/
	for (int i = 1; i < n; i++){
		if (maxvalue < arr[i])
			maxvalue = arr[i];
	}
	return maxvalue;
}

int main(){
	int arr[10] = { 3, 8, 10, 21, 22, 1, 2, 3, 4, 7 };

	if (findMax(arr, 10) == -1){
		cout << "�� �� ���ڰ� �����ϴ�" << endl;
 	}
	else{
		cout << findMax(arr, 10) << endl;
	}

	return 0;
}