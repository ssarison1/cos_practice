#include <iostream>
#include <cstdlib>
using namespace std;

struct human_st { // human_st struct 생성
    const char* name; // 변경 불가
    int age;
    int gender; // 0 for a man, 1 for a woman
};

int main(int argc, char *argv[]){
    struct human_st* hw;

    hw = (struct human_st *)malloc(sizeof(struct human_st));
    hw->name = "Hyunwoo";
    hw->age = 38;
    hw->gender = 0;

    cout << "name: "<< hw->name << " age: " << hw->age 
	<< " gender: " << hw->gender << endl;

    return 0;
}
