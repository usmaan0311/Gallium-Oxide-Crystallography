#include<iostream>
#include"Alpha.h"
#include"color.h"

int main(int argc, char* argv[])
{
int h,k,l,h1,k1,l1,value;
double chib, chi, theta2, ds;
Alpha eps;


std::cout<<"What do you want to calculate:\n"<<"Enter the number corresponding to the property to be calculated:\n"<<std::endl;
std::cout<<"1. Chi from the basal plane (0 0 1)\n"<<std::endl;
std::cout<<"2. Chi between plane (h1 k1 l1) and (h2 k2 l2)\n"<<std::endl;
std::cout<<"3. d spacing of plane (h k l)\n"<<std::endl;
std::cout<<"4. 2theta value of plane (h k l)\n"<<std::endl;
std::cout<<"5. Chi, d and 2theta value of plane (h k l)\n"<<std::endl;

std::cin>>value;
if(value==1)
{
std::cout<<"Enter the value of h k l\n";
std::cin>>h>>k>>l;
chib=eps.ChiBase(h,k,l);
std::cout<<"Chi with basal plane is :\t"<<hue::red<<hue::on_bright_white<<chib<<hue::reset<<hue::light_green<<std::endl;

}
else if(value==2)
{

	std::cout<<"enter h1 k1 l1"<<std::endl;
	std::cin>>h>>k>>l;
	std::cout<<"Now enter h2 k2 l2"<<std::endl;
	std::cin>>h1>>k1>>l1;
	chi=eps.Chi(h,k,l,h1,k1,l1);
	std::cout<<"Angle between planes :\t( "<<h<<" "<<k<<" "<<l<<" ) and ( "<<h1<<" "<<k1<<" "<<l1<<" ) is :\t"<<hue::green<<hue::on_bright_white<<chi<<hue::reset<<hue::light_green<<std::endl;

}
else if(value==3)
{
	std::cout<<" Enter the plane h k l"<<std::endl;
	std::cin>>h>>k>>l;
	ds=eps.dSpacing(h,k,l);
	std::cout<<" d spacing of plane ( "<<h<<" "<<k<<" "<<l<<" ) is:\t"<<hue::blue<<hue::on_bright_white<<ds<<hue::reset<<hue::light_green<<std::endl;

}
else if(value==4)
{

	std::cout<<" Enter the plane indices h k l"<<std::endl;
	std::cin>>h>>k>>l;
	theta2=eps.Theta2(h,k,l);
	std::cout<<" 2Theta value of plane ( "<<h<<" "<<k<<" "<<l<<" ) is:\t"<<hue::green<<hue::on_light_red<<theta2<<hue::reset<<hue::light_green<<std::endl;


}
else
{


	std::cout<<" Enter the plane Miller indices h k l"<<std::endl;
	std::cin>>h>>k>>l;
	chib=eps.ChiBase(h,k,l);
	ds=eps.dSpacing(h,k,l);
	theta2=eps.Theta2(h,k,l);
	std::cout<<" d spacing of plane ( "<<h<<" "<<k<<" "<<l<<" ) is:\t"<<hue::blue<<hue::on_bright_white<<ds<<hue::reset<<hue::light_green<<std::endl;
	std::cout<<"Chi with basal plane is :\t"<<hue::red<<hue::on_bright_white<<chib<<hue::reset<<hue::light_green<<std::endl;
	std::cout<<" 2Theta value of plane ( "<<h<<" "<<k<<" "<<l<<" ) is:\t"<<hue::black<<hue::on_light_green<<theta2<<hue::reset<<hue::light_green<<std::endl;


}






return 0;
}
