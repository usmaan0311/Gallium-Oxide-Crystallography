#include<cmath>
#include"Alpha.h"
#include<cassert>

Alpha::Alpha()
{
h=0;
k=0;
l=1;
}
Alpha::Alpha(int h, int k, int l)
{

this->h=h;
this->k=k;
this->l=l;

}


double Alpha::ChiBase(int h1, int k1, int l1)
{

double phi,V;
V = ( h*h1 + k*k1 + 0.5*(h*k1 + h1*k) + ( 0.75*(a*a*l*l1)/(c*c) )   )/sqrt( ( h*h + k*k + h*k + 0.75*l*l*(a*a/(c*c)) )*( h1*h1 + k1*k1 + h1*k1 + 0.75*l1*l1*(a*a/(c*c)) ) );
phi = acos(V)*180/(M_PI);
assert(phi<180);
return phi;
}

double Alpha::Chi(int h1, int k1, int l1, int h2, int k2, int l2)
{

double phi,V;
V = ( h2*h1 + k2*k1 + 0.5*(h2*k1 + h1*k2) + ( 0.75*(a*a*l2*l1)/(c*c) )   )/sqrt( ( h2*h2 + k2*k2 + h2*k2 + 0.75*l2*l2*(a*a/(c*c)) )*( h1*h1 + k1*k1 + h1*k1 + 0.75*l1*l1*(a*a/(c*c)) ) );
phi=acos(V)*180/(M_PI);
assert(phi<180);
return phi;
}

double Alpha::dSpacing(int h, int k, int l)
{
double d;
d = sqrt( 1/( 4*( h*h + h*k + k*k )/(3*a*a) + (l*l/(c*c)) ) );
return d;
}

double Alpha::Theta2(int h, int k, int l)
{
double theta, d,V;
d=dSpacing(h,k,l);
V = lambda/(2*d);
theta = 2*asin(V)*180/(M_PI);
assert(theta<180);
return theta;

}
