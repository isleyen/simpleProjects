#include <iostream>
#include <chrono>

using namespace std;


void slowSum() {
	int sum = 0;
	for (int i = 0; i <= 100000; i++) {
		sum += i;
	}
}

void fastSum() {
	int n = 100000;
	int sum = (n * (n + 1)) / 2;
}

int main() {

	// new commit atýlacak


	return 0;
}