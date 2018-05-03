#include <iostream>
#include <cmath>
using namespace std;
class shape{
	protected:
	float perimeter,area;
	public:
	virtual void initialize()=0;
	virtual float comparea()=0;
	virtual float compperi()=0;
};
class rect:public shape{
	float a,b;
	public:
	 void initialize();
	 float comparea();
	 float compperi();
};
class tri:public shape{
	float a,b,c;
	public:
	 void initialize();
	 float comparea();
	 float compperi();
};
void rect::initialize(){
	cout<<"Enter a,b\n";cin>>a>>b;
}
void tri::initialize(){
	cout<<"Enter a,b,c\n";cin>>a>>b>>c;
}
float rect::comparea(){
	return a*b;
}
float tri::comparea(){
	float s=(a+b+c)/2;
	return sqrt(float(s*(s-a)*(s-b)*(s-c)));
}
float rect::compperi(){
	return 2*(a+b);
}
float tri::compperi(){
	return a+b+c;
}

int main() {
	shape *s=NULL;
	s=new tri;
	s->initialize();
	cout<<"area: "<<s->comparea()<<endl;
	cout<<"peri: "<<s->compperi()<<endl;
	s=new rect;
	s->initialize();
	cout<<"area: "<<s->comparea()<<endl;
	cout<<"peri: "<<s->compperi()<<endl;
	
	return 0;
}