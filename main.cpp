#include <iostream>
#include<cstlib>

using namespace std; 

int main(int argc, char** argv) {
	
	int edad;
	cout<<"Indique la edad del usuario"<<endl;
	cin>>edad;
	
	if (edad < 6){}
	
	else if(edad>6 && edad <= 12){}
	else if (edad>12 && edad <= 18){}
	else if(edad>18 && edad <=65){}
	else{}
	
	return 0;
}
