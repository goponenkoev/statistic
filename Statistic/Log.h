#include "Ravnomer.h"

void Log(double q)
{
	std::ofstream file;
	file.open("out.txt");
	double m = 1, P = -1 / log(1 - q) * (1 - q) / m;
	for (int m = 0; m < 40; m++)
	{
		P *= (1 - q) / m;
		file << "(" << P << ";" << m << ")\n";
	}
	file.close();
}
