#include <iostream>
#define BUFLEN 10 //새로운 글로벌 변수 BUFLEN 설정
using namespace std;
void print_result(int *arr, int idx){
	cout << "arr" << idx << "]=" << arr[idx] << endl;
	}

int main(){
	int arr[BUFLEN]; //10개의 요소를 갖는 배열 생성
	int i;

	for (i=0; i<BUFLEN; i++){
			arr[i]=BUFLEN-i; //각 배열 요소의 값을 할당하는 for 문
		}
	  
	print_result(arr, 0);
	print_result(arr, 3);
	print_result(arr, 7);
	
	return 0;
	}
