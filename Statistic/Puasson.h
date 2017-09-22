#include "Ravnomer.h"

void Puasson1(double p)
{
	std::ofstream file;
	file.open("out.txt");
	double P = exp(-p), m = 0;
  for(int i = 0; i < 40; i++)
  {
    P = P / i * p;
	file << "(" << P << ";" << i << ")\n";
  }
	file.close();
}

double Puasson2(int p)
{
  double counter = 0;
  double mul = 1;
  while (mul >= exp(-p))
  {
    mul *= Ravnom(0, 1);
    counter++;
  }
  return --counter;
}