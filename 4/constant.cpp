#include <iostream>
#define BUFLEN 10 //새로운 글로벌 변수 BUFLEN 설정
using namespace std;
int main(){
	int arr[BUFLEN]; //10개의 요소를 갖는 배열 생성
	int i;

	for (i=0; i<BUFLEN; i++){
			arr[i]=BUFLEN-i; //각 배열 요소의 값을 할당하는 for 문
		}
	cout << "arr[0] = " << arr[0] << endl;  
	cout << "arr[3] = " << arr[3] << endl;
	cout << "arr[7] = " << arr[7] << endl;
	
	return 0;
	}
