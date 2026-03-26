#include <iostream>
using namespace std;
int main()
{
	short svar; //short: 메모리를 적게 사용하는 작은 범위의 정수 유형
	int i, ivar;
	unsigned int uvar;        
	svar = 20000;
	ivar = 20000;
	uvar = 20000;   
	i=0;
	while (i<7){
		cout << "svar: " << svar << "\tivar: " << ivar << " \tuvar:" << uvar << endl;
		svar -= 20000; ivar -= 20000; uvar -=20000;
		i++;
	}
	return 0;
}
