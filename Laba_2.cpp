// Laba_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;


//Variant 2

int main()
{
	double p1, p2, p3, p4;
	double prof1, prof2, prof3, prof4;
	double m1, m2, v1, v2, sigma1, sigma2, cv1, cv2;
	cout << "Enter possibilities: " << endl;
	cin >> p1 >> p2 >> p3 >> p4;
	cout << "Enter profits: " << endl;
	cin >> prof1 >> prof2 >> prof3 >> prof4;
	m1 = p1 * prof1 + p2 * prof2;
	m2 = p3 * prof3 + p4 * prof4;
	cout << "Mathematical expectation: " << endl;
	cout << " M1: " << m1 << endl;
	cout << "M2: " << m2 << endl;
	v1 = pow(prof1 - m1, 2) * p1 + pow(prof2 - m1, 2) * p2;
	v2 = pow(prof3 - m2, 2) * p3 + pow(prof4 - m2, 2) * p4;
	cout << "Dispersion: " << endl;
	cout << " V1: " << v1 << endl;
	cout << "V2: " << v2 << endl;
	sigma1 = sqrt(v1);
	sigma2 = sqrt(v2);
	cout << "Standard deviation: " << endl;
	cout << " Sigma1: " << sigma1 << endl;
	cout << "Sigma2: " << sigma2 << endl;
	if (sigma1 > sigma2) {
		cout << "Optimal choice is second action!" << endl;
	}
	else {
		cout << "Optimal choice is first action!" << endl;
	}
	cv1 = sigma1 / m1;
	cv2 = sigma2 / m2;
	cout << "Variation coeff: " << endl;
	cout << " CV1: " << cv1 << endl;
	cout << "CV2: " << cv2 << endl;
	if (cv1 > cv2) {
		cout << "Optimal choice is second action!";
	}
	else {
		cout << "Optimal choice is first action!";
	}

}


