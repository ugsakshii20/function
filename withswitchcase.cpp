#include<iostream>
using namespace std;
int volume(int l)
{
    return(l*l*l);
}
int volume(int l, int b , int h)
{
    return(l*b*h);
}
int volume (double r , double h)
{
    return (3.14*r*r*h);
}
int main()
{
    int ch,len,bth,ht,rad,vol;
    cout<<"\n Menu";
     cout<<"\n 1. cube";
      cout<<"\n 2. cuboid";
       cout<<"\n 3. cylinder";
    
    do{
        cout<<"\n Enter the choice:";
        cin>>ch;
        switch (ch)
        {
        case 1:
        cout<<"\n Enter lenght of the cube:";
        cin>>len;
        cout<<"\n Volume of the cube is :"<<volume(len);
        break;

        case 2:
        cout<<"\n Enter length , breadth and height of the cuboid:"<<endl;
        cin>>len>>bth>>ht;
        cout<<"\n Volume of the cuboid is :"<<volume(len,bth,ht);
        break;

        case 3:
        cout<<"\n Enter radis and height of the cylinder"<<endl;
        cin>>rad>>ht;
        cout<<"\n volume of the cylinder is :"<<volume(2,5);
        break;

        case 4:
        cout<<"Exit";
        
        default:
        cout<<"Invalid choice";
            break;
        }
    }
    while (ch!=4);
    
        return 0;
    
    
}
