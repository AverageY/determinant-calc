#include <iostream>
#include <math.h>

using namespace std;
double a;double b;double c;double d;double e;double f;double g;double h;double i;double solvingA;double solvingB;double solvingC;double ans;
int main()
{

 cout<<"enter first row first coloumn: "<<endl;
 cin>>a;
 cout<<"enter first row second coloumn: "<<endl;
 cin>>b;
 cout<<"enter first row third coloumn: "<<endl;
 cin>>c;
 cout<<"enter second row first coloumn: "<<endl;
 cin>>d;
 cout<<"enter second row second coloumn: "<<endl;
 cin>>e;
 cout<<"enter second row third coloumn: "<<endl;
 cin>>f;
 cout<<"enter third row first coloumn: "<<endl;
 cin>>g;
 cout<<"enter third row second coloumn: "<<endl;
 cin>>h;
 cout<<"enter third row third coloumn:"<<endl;
 cin>>i;
 int det[3][3]={{a,b,c},{d,e,f},{g,h,i}};

cout<<"this is ur determinant"<<endl;
 cout<<"      "<<endl;
printf("%s%d%s%d%s%d"," ",det[0][0]," ",det[0][1]," ",det[0][2]);
cout<<"      "<<endl;
printf("%s%d%s%d%s%d"," ",det[1][0]," ",det[1][1]," ",det[1][2]);
cout<<"      "<<endl;
printf("%s%d%s%d%s%d\n"," ",det[2][0]," ",det[2][1]," ",det[2][2]);

solvingA = (a*(e*i-h*f));
solvingB = ((-1)*b*(d*i-g*f));
solvingC = (c*(d*h-g*e));
ans = solvingA+solvingB+solvingC;
cout<<"The value of det. is: ";
cout<<ans;





    system("pause>0");
    return 0;
}
