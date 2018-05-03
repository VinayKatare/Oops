#include <iostream>
using namespace std;
class student{
	string name,usn;int age;
	public:
	void inputdata(){
		cout<<"Enter name: ";cin>>name;
		cout<<"Enter usn: ";cin>>usn;
		cout<<"Enter age: ";cin>>age;
	}
	int getage(){return age;}
};
class ugstudent:public student{
	int sem;float fee,stipend;
	public:
	void readugdata(){
		inputdata();
		cout<<"Enter sem: ";cin>>sem;
		cout<<"Enter fee: ";cin>>fee;
		cout<<"Enter stipend: ";cin>>stipend;
	}
	int getsem(){return sem;}
};
class pgstudent:public student{
	int sem;float fee,stipend;
	public:
	void readpgdata(){
		inputdata();
		cout<<"Enter sem: ";cin>>sem;
		cout<<"Enter fee: ";cin>>fee;
		cout<<"Enter stipend: ";cin>>stipend;
	}
	int getsem(){return sem;}
};
int totug[10],cug[10];
int totpg[10],cpg[10];
int main() {
	int n;cin>>n;
	ugstudent ug[n];
	pgstudent pg[n];
	cout<<"Enter details of ug students\n";
	for(int i=0;i<n;i++){
		ug[i].readugdata();
	}
	cout<<"Enter details of pg students\n";
	for(int i=0;i<n;i++){
		pg[i].readpgdata();
	}
	for(int i=0;i<n;i++){
		totug[ug[i].getsem()]+=ug[i].getage();
		cug[ug[i].getsem()]++;
		totpg[pg[i].getsem()]+=pg[i].getage();
		cpg[pg[i].getsem()]++;
	}
	for(int i=1;i<=8;i++){
		if(cug[i])
		cout<<i<<" : "<<(totug[i]/cug[i]);
	}
	cout<<endl;
	for(int i=1;i<=8;i++){
		if(cpg[i])
		cout<<i<<" : "<<(totpg[i]/cpg[i]);
	}
	return 0;
}