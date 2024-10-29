#include <iostream>
using namespace std;

double menghitungkinetik;

void hitungEK(double massa, double kecepatan) {
	menghitungkinetik = 0.5 * massa * kecepatan * kecepatan;
}

int main() {
	double massa, kecepatan, energiKinetik;

	cout << "Masukkan massa total dari sepeda + berat andi: ";
	cin >> massa;
	cout << "Masukkan kecepatan: ";
	cin >> kecepatan;


	hitungEK(massa, kecepatan);
	cout << "Energi kinetik: " << menghitungkinetik << endl;

	return 0;
}