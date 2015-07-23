// make atoi
#include <iostream>
#include <string>
using namespace std;


int ret_atoi(string input){
	int str_size = input.size();
	int jarisu = 1;
	int result = 0;
	
	for (int i = str_size - 1; i >= 0; i--){
		result += (input[i] - '0') * jarisu;
		jarisu *= 10;
	}
	/* string의 마지막 인덱스는 숫자로 따지면 1의 자리이므로 마지막 자리부터 시작하는 for문을 사용합니다.
		예를 들어 123 이라는 입력이 주어지면
		(마지막 자리수의 character - '0') * jarisu
			= 3 * 1
		그 다음부터 jarisu에 10을 곱해줍니다.
	*/
	return result;
}

int main(){
	string input;
	cin >> input;
	cout << ret_atoi(input) << endl;
	return 0;
}