#include <iostream>
#include <cmath>

using namespace std;

 void primefact(int n){
     
     while (n%2==0){
     	cout << 2 << "   " << endl;
     	n=n/2;
	 }
	 
	 for (int i=3; i<=sqrt(n); i=i+2){
	 	
	 	while (n%i==0){
	 		cout << i << "   " << endl;
	 		n=n/i;
		 }
	 	
	 }
	 
	 if (n>2)
	 cout << n << "   " << endl;
 }

int main(int argc, char** argv) {
	
	int n=317;
	primefact(n);

	system("pause");
	return 0;
}
