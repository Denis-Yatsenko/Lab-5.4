// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double S0(const int N)
{
	double s = 0;
	for (int i = 1; i <= N; i++)
		s += (sqrt(1 + cos(sin(1. * i)) * cos(sin(1. * i)))) / (1 + (sin(cos(1. * i)) * sin(cos(1. * i))));
	return s;
}
double S1(const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return (sqrt(1 + cos(sin(1. * i)) * cos(sin(1. * i)))) / (1 + (sin(cos(1. * i)) * sin(cos(1. * i)))) + S1(N, i + 1);
}
double S2(const int N, const int i)
{
	if (i < 1)
		return 0;
	else
		return (sqrt(1 + cos(sin(1. * i)) * cos(sin(1. * i)))) / (1 + (sin(cos(1. * i)) * sin(cos(1. * i)))) + S2(N, i - 1);
}
double S3(const int N, double t, const int i)
{
	t = t + (sqrt(1 + cos(sin(1. * i)) * cos(sin(1. * i)))) / (1 + (sin(cos(1. * i)) * sin(cos(1. * i))));
	if (i >= N)
		return t;
	else
		return S3(N, t, i + 1);
}
double S4(const int N, double t, const int i)
{
	t = t + (sqrt(1 + cos(sin(1. * i)) * cos(sin(1. * i)))) / (1 + (sin(cos(1. * i)) * sin(cos(1. * i))));
	if (i <= 1)
		return t;
	else
		return S4(N, t, i - 1);
}
int main()
{
	int N;
	cout << "N = "; cin >> N;

	cout << "------------------------" << endl;
	cout << "|iter S0        | " << setprecision(3) << S0(N) << " |" << endl;
	cout << "------------------------" << endl;
	cout << "|rec up ++ S1   | " << setprecision(3) << S1(N, 1) << " |" << endl;
	cout << "------------------------" << endl;
	cout << "|rec up -- S2   | " << setprecision(3) << S2(N, N) << " |" << endl;
	cout << "------------------------" << endl;
	cout << "|rec down ++ S3 | " << setprecision(3) << S3(N, 0, 1) << " |" << endl;
	cout << "------------------------" << endl;
	cout << "|rec down -- S4 | " << setprecision(3) << S4(N, 0, N) << " |" << endl;
	cout << "------------------------" << endl;
	return 0;
}
