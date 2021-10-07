#include<cmath>
#include"Epsilon.h"
#include<cassert>

Epsilon::Epsilon()
{
h=0;
k=0;
l=1;
}
Epsilon::Epsilon(int h, int k, int l)
{

this->h=h;
this->k=k;
this->l=l;

}
double Epsilon::ChiBase(int h1, int k1, int l1)
{

double phi,V;
V = ( ( h*h1/(a*a) ) +  ( k*k1/(b*b) ) + ( l*l1/(c*c) ) )/sqrt( ( (h*h/(a*a)) + (k*k/(b*b)) + (l*l/(c*c)) )*( (h1*h1/(a*a)) + (k1*k1/(b*b)) + (l1*l1/(c*c))  )   );

phi = acos(V)*180/(M_PI);
assert(phi<180);
return phi;
}

double Epsilon::Chi(int h1, int k1, int l1, int h2, int k2, int l2)
{

double phi,V;
V = ( ( h2*h1/(a*a) ) +  ( k2*k1/(b*b) ) + ( l2*l1/(c*c) ) )/sqrt( ( (h2*h2/(a*a)) + (k2*k2/(b*b)) + (l2*l2/(c*c)) )*( (h1*h1/(a*a)) + (k1*k1/(b*b)) + (l1*l1/(c*c))  )   );

phi=acos(V)*180/(M_PI);
assert(phi<180);
return phi;
}

double Epsilon::dSpacing(int h, int k, int l)
{
double d;
d = sqrt( 1/( (h*h/(a*a)) + (k*k/(b*b)) + (l*l/(c*c)) ) );
return d;
}

double Epsilon::Theta2(int h, int k, int l)
{
double theta, d,V;
d=dSpacing(h,k,l);
V = lambda/(2*d);
theta = 2*asin(V)*180/(M_PI);
assert(theta<180);
return theta;

}
