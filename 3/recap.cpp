#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	int x{};
	cout << "Enter first int:" << endl;
	cin >> x;
	int y{};
	cout << "Enter second int:" << endl;
	cin >> y;
	if (x < y){
		cout << "first < second" << endl;
		cout << (y - x + 1)*(x + y)/2 << endl;
		}
	else{
		cout << "x => y이므로 프로그램을 종료합니다." << endl;
		}
return 0;
}
