#include "Inc.h"

// Биномиальное распределение

void Binom(const double N, const double p)
{
	std::ofstream file;
	file.open("out.txt");
	double P = pow(1 - p, N), m = 0;
	for(int i = 0; i < N;i++)
	{
		P *= (N - m) * p / (m + 1) / (1 - p);
		printf("%f\n",P);
		file << "(" << i << ";" << P << ")\n";
		m++; 
	}
	file.close();
}