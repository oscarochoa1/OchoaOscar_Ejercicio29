#include<iostream>
#include <fstream>
#include <sstream>
#include <math.h> 
#include<cmath>
using std::cout;
using std::endl;

    float nx=30;
float deltat=1/nx;
float deltax=2/nx;
float num=10;
float xlim=-1;
float xlim2=1;
int yviejo[30][30];
int y[30][30];
float D=5;
float x=1;
float t=1;
void ecua(float D, float x, float t, float nx, int yviejo, int y, float deltat, float deltax);

int main(){

float ese=2;
	ecua(D,x,t,nx,yviejo, y, deltat, deltax);
	return 0;
}



void ecua(float D, float x, float t, float nx, int yviejo, int y, float deltat, float deltax){
    
    for (int i = 1; i < nx; i++){
        for (int j = 1; j < nx+1; j++){
            yviejo[i][j]=0;
            y[i][j+1]= yviejo + (D*deltat/(deltax*deltax))*((y[i+1][j])-2*(y[i][j])+(y[i-1][j]))+deltat*2;
                
                x+=deltax;
            t+= deltat;
            cout << y << " " << endl;
        }

}
}