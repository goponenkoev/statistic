#include"Ravnomer.h"

void Geom1(double p)
{
	std::ofstream file;
	file.open("out.txt");
	double P = p, m = 0;
	for(int i = 0; i < 50; i++)
	{
		file << "(" << i << ";" << P << ")\n";
		P *= (1 - p);	
		i++;
	}
	file << "(" << 50 << ";" << P << ")\n";
	file.close();
}

double Geom2(double p)
{
	int counter = 0;
	while (R(0, 1) < p)
	{
		counter++;
	}
	return counter + 1;
}
