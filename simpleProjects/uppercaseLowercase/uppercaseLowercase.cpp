#include <iostream>

using namespace std;

void buyukten_kucuge(char *cp);
void kucukten_buyuge(char *cp);
void donustur();

int main() {
	donustur();
	return 0;
}

void  buyukten_kucuge(char* cp) {
	*cp += 32;
}

void kucukten_buyuge(char* cp) {
	*cp -= 32;
}

void donustur() {
	char c;  

	while (true) {
		cout << "Girdi: ";
		cin >> c;

		if (c == '0') {
			return;
		}
		if (c >= 'A' && c <= 'Z') {
			buyukten_kucuge(&c);
		}
		else {
			kucukten_buyuge(&c);
		}
		cout << "Sonuc: " << c << endl;
	}

}