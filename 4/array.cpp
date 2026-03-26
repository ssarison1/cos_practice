#include <iostream>
using namespace std;
int main(){
	int arr[10]; //10개의 요소를 갖는 배열 생성
	int i;

	for (i=0; i<10; i++){
			arr[i]=10-i; //각 배열 요소의 값을 할당하는 for 문
		}
	cout << "arr[0] = " << arr[0] << endl;  
	cout << "arr[3] = " << arr[3] << endl;
	cout << "arr[7] = " << arr[7] << endl;
	
	return 0;
	}
