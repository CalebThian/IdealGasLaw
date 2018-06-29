#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

/*number of particles*/
const int N=5;

/*length of boundary*/
double L=2*pow(10,-7);

/*step size, or said delta t*/
double h=1*pow(10,-1);

/*time for observation/simulation*/
double T=10;

/*bolztzman constant*/
double kb = 1.381*pow(10,-23);

/*speed limit in specific direction*/
double vl=L/3;

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

/*new a particle array*/
Particle  p1[N];

void initParticle();//initialize a particle with position and velocity
void checkGivenValue();//printf given value
void printParticleProp(int a);//printf specific particle property

int main()
{
	srandom(time(NULL));
	checkGivenValue();
	initParticle();
	for(int i=0;i<N;++i)
		printParticleProp(i);
}

void initParticle()
{
	int Lb = L*pow(10,14);
	int vlb = vl*pow(10,-2*log10(vl));
	cout<<"vlb = "<<vlb<<endl;
	for(int i=0;i<N;++i)
	{
		p1[i].x=rand()%Lb*pow(10,-14)-L/2;
		p1[i].y=rand()%Lb*pow(10,-14)-L/2;
		p1[i].z=rand()%Lb*pow(10,-14)-L/2;

		p1[i].xd=rand()%vlb*pow(10,2*log10(vl));
		p1[i].yd=rand()%vlb*pow(10,2*log10(vl));
		p1[i].zd=rand()%vlb*pow(10,2*log10(vl));
	}
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

	printf("vl = ");
	printf("%.4e",vl);
	printf("\n");
}

void printParticleProp(int a)
{
	printf("x = ");
	printf("%.4e",p1[a].x);
	printf("\n");

	printf("y = ");
	printf("%.4e",p1[a].y);
	printf("\n");

	printf("z = ");
	printf("%.4e",p1[a].z);
	printf("\n");

	printf("v_x = ");
	printf("%.4e",p1[a].xd);
	printf("\n");

	printf("v_y = ");
	printf("%.4e",p1[a].yd);
	printf("\n");

	printf("v_z = ");
	printf("%.4e",p1[a].zd);
	printf("\n");
}
