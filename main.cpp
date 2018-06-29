#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

/*number of particles*/
int N=50;

/*length of boundary*/
double L=2*pow(10,-7);

/*step size, or said delta t*/
double h=1*pow(10,-1);

/*time for observation/simulation*/
double T=10;

/*bolztzman constant*/
double kb = 1.381*pow(10,-23);

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
void checkGivenValue();//printf given value

int main()
{
	srandom(time(NULL));
	checkGivenValue();
}

void genParticle()
{
	/**/
}

void checkGivenValue()
{
	printf("N = ");
	printf("%d",N);
    printf("\n");

	printf("L = ");
	printf("%.4e",L);
	printf("\n");

	printf("h = ");
	printf("%.4e",h);
	printf("\n");

	printf("T = ");
	printf("%.4e",T);
	printf("\n");

	printf("kb = ");
	printf("%.4e",kb);
	printf("\n");
}
