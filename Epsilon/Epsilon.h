#ifndef EPSILONHEADERDEF
#define EPSILONHEADERDEF

#include<cmath>

class Epsilon{
// Lattice parameters orthorhombic epsilon phase of Ga2o3
const double a=5.0566;
const double b=8.6867;
const double c=9.3035;
const double A=M_PI/2;
const double B=M_PI/2;
const double G=M_PI/2;
const double lambda = 1.5406;
// miller indices of base plane
int h;
int k;
int l;

	public:
		Epsilon();
		Epsilon(int, int, int);
		double ChiBase(int, int, int);
		double Chi(int, int, int, int, int, int);
		double dSpacing(int, int, int);
		double Theta2(int, int, int);








};


#endif
