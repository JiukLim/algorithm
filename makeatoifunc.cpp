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
	/* string�� ������ �ε����� ���ڷ� ������ 1�� �ڸ��̹Ƿ� ������ �ڸ����� �����ϴ� for���� ����մϴ�.
		���� ��� 123 �̶�� �Է��� �־�����
		(������ �ڸ����� character - '0') * jarisu
			= 3 * 1
		�� �������� jarisu�� 10�� �����ݴϴ�.
	*/
	return result;
}

int main(){
	string input;
	cin >> input;
	cout << ret_atoi(input) << endl;
	return 0;
}