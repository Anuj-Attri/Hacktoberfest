//This program is my favourite as it utilizes simple keywords to find accurate roots of a given quadratic equation.

void Q(float a,float b,float c,float y,float disc,float zR,float zI,float x)
{
 cout<<"Enter the co-efficients: ";
 cin>>a>>b>>c;
 disc=b*b-(4*a*c);
 if(disc>0)
 {
  x=(-b+sqrt(disc))/(2*a);
  y=(-b-sqrt(disc))/(2*a);
  cout<<"Roots are real and distinct:"<<"\n x= "<<x<<"\n or x= "<<y;
 }
 else if(disc==0)
 {y=x;
  x=(-b+sqrt(disc))/(2*a);
  cout<<"Roots are real and equal: "<<"\n x= "<<x;
 }
 else if(disc<0)
 {zR=(-b)/(2*a);
  zI=(sqrt(-1*disc))/(2*a);
  x=zR+zI;
  cout<<"The roots are complex: ";
  cout<<"\n x= "<<zR<<" + "<<zI<<"i";
  cout<<"\n y= "<<zR<<" - "<<zI<<"i";
 }

void main()
{
 Q(a,b,c,y,disc,zR,zI,x);
 getch();
}
