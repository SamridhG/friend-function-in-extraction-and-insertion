#include<iostream>
using namespace std;
class complex{
	int a,b;
	friend istream& operator >>(istream &in,complex&);
	friend ostream& operator <<(ostream &in,complex);
	public:
		complex operator +(complex A)
		{
			complex temp;
			temp.a=a+A.a;
			temp.b=b+A.b;
			return temp;
		 } 
		 complex()
		 {
		 	a=0;
		 	b=0;
		 }
};
 istream& operator >>(istream &in,complex& C)
 {
 	cout<<"Enter real number:";
 	cin>>C.a;
 	cout<<"Enter Imaginary:";
 	cin>>C.b;
 	return in;
 }
  ostream& operator <<(ostream &inc,complex D)
  {
  	cout<<D.a<<"+"<<D.b<<"i\n";
  	return inc;
  }
  int main()
{  
int n;
complex a[n],c;

		
cout<<"Enter number of entry:";

cin>>n;

for(int i=0;i<n;i++)
    {
	cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		cout<<a[j];
		c=c+a[j];
	}
 	cout<<"Sum of all :\n"<<c;
 
 	return 0;		
}
