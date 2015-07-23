/*배열이 주어지고 이 배열에서 최대값을 찾는 것이다.*/

#include <iostream>
using namespace std;

int findMax(int arr[], int n){
	/* 예외 처리 */
	if (n < 1)
		return -1;
	/* 비교 할 수 */
	int maxvalue = arr[0];

	/* 2번째 수 부터 끝까지 최대값과 비교해서 계속 갱신해준다.*/
	for (int i = 1; i < n; i++){
		if (maxvalue < arr[i])
			maxvalue = arr[i];
	}
	return maxvalue;
}

int main(){
	int arr[10] = { 3, 8, 10, 21, 22, 1, 2, 3, 4, 7 };

	if (findMax(arr, 10) == -1){
		cout << "비교 할 숫자가 없습니다" << endl;
 	}
	else{
		cout << findMax(arr, 10) << endl;
	}

	return 0;
}