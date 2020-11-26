#include <ctime>
#include <iostream>
using namespace std;
void Random(int n, int mas[]) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 42 - 21;
		cout << ' ' <<mas[i];
	}

}
void maxMassiv(int n, int mas[], int& max, int& pos_max) {
	pos_max = 0;
	max = mas[0];
	for (int i = 1; i < n; i++) {
		if (mas[i] > max) {
			pos_max = i;
			max = abs(mas[i]);

		}

	}
	cout << "max: " << max << " k: " << pos_max;
	cout << endl;


}