#include <iostream>
#include <math.h>

using namespace std;

float posicionx(float x, float y, float z);
int main()
{
    int num;
    float graved=9.8;

    cout<<"elija el caso que desea usar escribiando del 1 al 4";
    cin>>num;
    float posxO, posyO,posx0O, posy0O, posxD=60, posyD=20,  time=0, d=60, xd=0, yd=0, angO=30, angD, velxO, velyO, velxD, velyD, vel0O=30, vel0D;


    switch(num){
        case(1):{
        cout<<"ingrese la posicion inicial en Y del cañon enemigo";
        cin>>posy0O;
        cout<<"ingrese la posicion inicial en X del cañon enemigo";
        cin>>posx0O;
        angO=(angO*3,1416)/180;
        velxO=vel0O*cos(angO);
        velyO=vel0O*sin(angO);
        for(int i=0; i<=1000; i+=0.5){
            posxO=velxO*i;
            posyO=posy0O+velyO*i-(1/2)*graved*(i*i);
            if (sqrt(((pow(posxO, 2))-pow(posxD,2))+pow(posxO, 2)-pow(posxD,2))<=0,05){
                cout<<"inminente colision en las posiciones "<<posxO<<" y "<<posyO<<endl;
                break;
            }
        }







    }
/*
        case(2):{
        int variables[4]={posx, posy, time};
        break;
    }

        case(3):{
                int variables[4]={posx, posy, time};
                break;
    }

        case(4):{
        int variables[4]={posx, posy, time};
        break;
    }
    */


    }
}


