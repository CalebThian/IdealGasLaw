#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*number of particles*/
int N=50;

/*length of boundary*/
double L=2*10^-7;

/*step size, or said delta t*/
double h=1*10^-1;

/*time for observation/simulation*/
double tmax=10;

/*struct of a particle, inclue its position and velocity*/
struct Particle
{
	/*position*/
	double x;
	double y;
	double z;

	/*velocity*/
	double xd;
	double yd;
	double zd;
};

void genParticle();//generate a particle with position and velocity


int main()
{
	srandom(time(NULL));

}

void genParticle()
{
}

