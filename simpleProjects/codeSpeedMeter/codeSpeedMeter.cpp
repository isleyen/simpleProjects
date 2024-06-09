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

	auto start = chrono::high_resolution_clock::now();
	slowSum();
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> slowDuration = end - start;
	double milliseconds1 = slowDuration.count() * 1000;
	cout << "Slow sum took " << milliseconds1 << " seconds." << endl;

	start = std::chrono::high_resolution_clock::now();
	fastSum();
	end = chrono::high_resolution_clock::now();
	chrono::duration<double> fastDuration = end - start;
	double milliseconds2 = fastDuration.count() * 1000;
	std::cout << "Fast sum took " << milliseconds2 << " seconds." << std::endl;

	return 0;
}