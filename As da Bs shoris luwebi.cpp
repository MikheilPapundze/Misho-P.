#include <iostream>
#include <cmath>
using namespace std;

  void Luwebi (int a, int b){
  	for (int i=a; i<b; i++){
  		if ((i%2)==0)
  		cout <<"Luwebi  "<<i<<endl;
	  }
  }
 
 

int main(int argc, char** argv) {
	int a; cout<<"A="; cin>>a;
	int b; cout<<"B="; cin>>b;
	
	Luwebi (a,b);
	
	system("pause");
	return 0;
}
