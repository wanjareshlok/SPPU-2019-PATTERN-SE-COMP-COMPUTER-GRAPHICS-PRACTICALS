#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;

void scaltriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
}

void scaling()
{
    float x1,x2,x3,y1,y2,y3,sx,sy;
    void scaltriangle(float, float, float , float ,float,float );
    cout<<"enter the coordinates of triangle: "<<endl;
    cout<<"Enter the 1st coordinate: ";
    cin>>x1>>y1;
    cout<<"Enter the 2nd coordinate: ";
    cin>>x2>>y2;
    cout<<"Enter the 3rd coordinate: ";
    cin>>x3>>y3;
    cout<<"enter the value of sx and sy: ";
    cin>>sx>>sy;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    scaltriangle(x1,y1,x2,y2,x3,y3);
    float a1,b1,a2,b2,a3,b3;
    a1=sx*x1;
    b1=y1*sy;
    a2=x2*sx;
    b2=y2*sy;
    a3=x3*sx;
    b3=y3*sy;
    scaltriangle(a1,b1,a2,b2,a3,b3);
    getch();
    closegraph();
}

void tworotation()
{
    float x1,x2,x3,y1,y2,y3,theta;
    void scaltriangle(float, float, float , float ,float,float );
    cout<<"enter the coordinates of triangle: "<<endl;
    cout<<"Enter the 1st coordinate: ";
    cin>>x1>>y1;
    cout<<"Enter the 2nd coordinate: ";
    cin>>x2>>y2;
    cout<<"Enter the 3rd coordinate: ";
    cin>>x3>>y3;
    cout<<"enter the angle through which object is rotated: ";
    cin>>theta;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    scaltriangle(x1,y1,x2,y2,x3,y3);

    float a1,b1,a2,b2,a3,b3;

    a1=x1*cos(theta)-y1*sin(theta);
    b1=x1*sin(theta)+y1*cos(theta);
    a2=x2*cos(theta)-y2*sin(theta);
    b2=x2*sin(theta)+y2*cos(theta);
    a3=x3*cos(theta)-y3*sin(theta);
    b3=x3*sin(theta)+y3*cos(theta);


    scaltriangle(a1,b1,a2,b2,a3,b3);

    getch();
    closegraph();
}

void translation()
{
    int x1,x2,x3,y1,y2,y3,tx,ty;
    void scaltriangle(float , float , float, float, float, float);
    cout<<"Enter the coordinates for translation: ";
    cout<<"Enter the first coordinate: ";
    cin>>x1>>y1;
    cout<<"Enter the second coordinate: ";
    cin>>x2>>y2;
    cout<<"Enter the third coordinate: ";
    cin>>x3>>y3;
    cout<<"Enter the value of tx and ty:";
    cin>>tx>>ty;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);

    scaltriangle(x1,y1,x2,y2,x3,y3);
    float a1,b1,a2,b2,a3,b3;

    a1=x1+tx;
    b1=y1+ty;
    a2=x2+tx;
    b2=y2+ty;
    a3=x3+tx;
    b3=y3+ty;

    scaltriangle(a1,b1,a2,b2,a3,b3);
    getch();
    closegraph();
}


int main()
{
    int ch;
    do{
    cout<<"\n1.scaling\n2.rotation\n3.translation";
    cout<<"\nEnter the choice: ";
    cin>>ch;
    switch(ch){
case 1:
    scaling();
    break;
case 2:
    tworotation();
    break;
case 3:
    translation();
    break;
    }
    }while(ch!=4);
    return 0;
}

