#ifndef MGOHEADERDEF
#define MGOHEADERDEF

#include<cmath>

class MgO{
// Lattice parameters cubic MgO
const double a=4.212; // a=b=c
const double A=M_PI/2;
const double B=M_PI/2;
const double G=M_PI/2;
const double lambda = 1.5406;
// miller indices of base plane
int h;
int k;
int l;

	public:
		MgO();
		MgO(int, int, int);
		double ChiBase(int, int, int);
		double Chi(int, int, int, int, int, int);
		double dSpacing(int, int, int);
		double Theta2(int, int, int);








};


#endif
