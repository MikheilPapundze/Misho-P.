#include <iostream>
#include <cmath>

using namespace std;

 class KVG {
 	private:
 		double A;
 		double B;
 		double C;
 	public:
 		KVG (double a=0, double b=0, double c=0){
 			set(a,b,c);
		 }
		 void set(double a, double b, double c){
		 	setA(a);
		 	setB(b);
		 	setC(c);
		
		 	
		 }
		 
		 void setA(double a){
		 	if (a==0) a=1;
		 	A=a;
		 	
		 }
		 void setB(double b){
		 	B=b;
		 }
		 void setC(double c){
		 	C=c;
		 }
		 
		 double GetA(){
		 	return A;
		 }
		 double GetB(){
		 	return B;
		 }
		 double GetC(){
		 	return C;
		 }
		 
		 void Amoxsna(){
		 	double d;
		 	d=B*B-4*A*C;
		 
		 	if (d==0)
		 		cout<<"X="<<-B/2*A;
		 	else if (d<0)
		 	      cout << "amonaxsni ar aqvs";
			 
		 		else {
				 
			 
		 	cout<<"X1="<<(-B+sqrt(d))/2*A;
		 	cout<<"X2="<<(-B-sqrt(d))/2*A;
		    }
		 }
 };


int main(int argc, char** argv) {
	KVG kvad=KVG(1,1,1);
	kvad.Amoxsna();
	
	
	system("pause");
	return 0;
}
