#include<cmath>
#include"NiO.h"
#include<cassert>

NiO::NiO()
{
h=1;
k=1;
l=1;
}
NiO::NiO(int h, int k, int l)
{

this->h=h;
this->k=k;
this->l=l;

}


double NiO::ChiBase(int h1, int k1, int l1)
{

double phi,V;
V = (h*h1 + k*k1 + l*l1 )/( sqrt( ( h*h + k*k + l*l )*( h1*h1 + k1*k1 + l1*l1 ) ) );
phi = acos(V)*180/(M_PI);
assert(phi<180);
return phi;
}

double NiO::Chi(int h1, int k1, int l1, int h2, int k2, int l2)
{

double phi,V;
V = (h2*h1 + k2*k1 + l2*l1 )/( sqrt( ( h2*h2 + k2*k2 + l2*l2 )*( h1*h1 + k1*k1 + l1*l1 ) ) );
phi=acos(V)*180/(M_PI);
assert(phi<180);
return phi;
}

double NiO::dSpacing(int h, int k, int l)
{
double d;
d = a/(sqrt( h*h + k*k + l*l ));
return d;
}

double NiO::Theta2(int h, int k, int l)
{
double theta, d,V;
d=dSpacing(h,k,l);
V = lambda/(2*d);
theta = 2*asin(V)*180/(M_PI);
assert(theta<180);
return theta;

}
