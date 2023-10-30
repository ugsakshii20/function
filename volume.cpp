#include<iostream>
using namespace std;
int volume (int l)
{
  return (1*1*1);
}
double volume (double r, double h)
{
  return (3.14*r*r*h);
}
long volume (int l, int b, int h)
{
  return (l*b*h);
}
int main()
{
  cout<<"Volume of the cube is:"<<volume(9)<<endl;
  cout<<"Volume of the Cylinder is:"<<volume(10.2,5.5)<<endl;
  count<<"Volume of the Box:"<<volume(9,4,6)<<endl;
}
