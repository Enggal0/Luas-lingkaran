#include <iostream>
#include <cmath>

using namespace std;

double LuasLingkaran(double r){
	double pi= M_PI;
	return pi*r*r;
}

int main() {
	double r;
	
	cout<<"Jari-jari : ";
	cin>>r;
	
	cout<< "Luas Lingkaran : "<< LuasLingkaran(r);
	
	return 0;
}
