#include <iostream>
#include <cmath>
		  

 using namespace std;
struct ratPair{
	int M;
	unsigned int N;
};

class Rational{
	private:
		ratPair RP;
		bool myErr;
		
	        int Usg (int a, int b){
 	        if (a==0) return b;
 	        return Usg(b%a, a);
                }
		
	        void Norm(){
			int MyGcd=Usg(abs(RP.M), RP.N);
			RP.M=RP.M/MyGcd;
			RP.N=RP.N/MyGcd;
		}
	public:
		Rational(){
			Set(0,1);
		}
		Rational(ratPair RP){
			Set(RP.M, RP.N);
		}
		
		Rational(int a,int b){
			Set(a,b);
		}
		
		
		void Set(int a, unsigned int b){
				myErr=false;
				RP.M=a;
				if(b==0) {
					myErr=true;
					RP.N=1;
				} else {
					RP.N=b;
					Norm();
				}
		}
		ratPair Get(){
			return RP;
		}
		bool GetErr(){
			return myErr;
		}
		void Display(){
			cout<<"("<<RP.M<<"/"<<RP.N<<")";
		}	
};

Rational operator +(Rational A, Rational B){
	Rational TMP;
	if((A.GetErr()+B.GetErr())) return TMP;
	ratPair AP=A.Get();
	ratPair BP=B.Get();
	TMP.Set(AP.M*BP.N+AP.N*BP.M,AP.N*BP.N);
	return TMP;
}

Rational operator -(Rational A, Rational B){
	Rational TMP;
	if((A.GetErr()+B.GetErr())) return TMP;
	ratPair AP=A.Get();
	ratPair BP=B.Get();
	TMP.Set(AP.M*BP.N-AP.N*BP.M,AP.N*BP.N);
	return TMP;
}
Rational operator *(Rational A, Rational B){
	Rational TMP;
	if((A.GetErr()+B.GetErr())) return TMP;
	ratPair AP=A.Get();
	ratPair BP=B.Get();
	TMP.Set(AP.M*BP.M,AP.N*BP.N);
	return TMP;
}
Rational operator /(Rational A, Rational B){
	Rational TMP;
	if((A.GetErr()+B.GetErr())) return TMP;
	ratPair AP=A.Get();
	ratPair BP=B.Get();
	TMP.Set(AP.M*BP.N,AP.N*BP.M);
	return TMP;
}


int main(int argc, char** argv) {
	cout <<"MOCEMULIA"<<endl;
	Rational Z1=Rational(1,4);
	Rational Z2=Rational(1,3);
	Z1.Display();
	Z2.Display();
	cout<<endl;
	
	
	Rational Jami=Z1+Z2;
	cout<<"JAMI=";
	Jami.Display(); 
	cout<<endl;
	
	Rational Namravli=Z1*Z2;
	cout<<"NAMRAVLI=";
	Namravli.Display();
	cout<<endl;
	
	Rational Sxvaoba=Z1-Z2;
	cout<<"SXVAOBA=";
	Sxvaoba.Display();
	cout<<endl;

	Rational Ganayofi=Z1/Z2;
	cout<<"GANAYOFI=";
	Ganayofi.Display();
	cout<<endl;

	system("pause");
	return 0;
}
