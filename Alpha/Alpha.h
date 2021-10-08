#ifndef ALPHAHEADERDEF
#define ALPHAHEADERDEF

#include<cmath>

class Alpha{
// Lattice parameters hexagonal (R -3 c) alpha phase of Ga2o3
const double a=4.997; // a=b
const double c=13.447;
const double A=M_PI/2;
const double B=M_PI/2;
const double G=2*M_PI/3;
const double lambda = 1.5406;
// miller indices of base plane
int h;
int k;
int l;

	public:
		Alpha();
		Alpha(int, int, int);
		double ChiBase(int, int, int);
		double Chi(int, int, int, int, int, int);
		double dSpacing(int, int, int);
		double Theta2(int, int, int);








};


#endif
