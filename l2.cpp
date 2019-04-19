#include <iostream>



using namespace std;



void printDog() {

	cout << "DOG";

}

void printSum(int a, int b) {

	cout << a << " + " << b << " = " << a + b;

}

void Print(void(*fun)()) {

	cout << "what? ";

	fun();

	cout << "?\n";

}

void Print(void(*fun)(int,int)) {

	cout << "what? ";

	fun(2,6);

	cout << "?\n";

}

int main() {

	Print(printDog);

	Print(printSum);

}
