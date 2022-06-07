#include<iostream>
using namespace std;
int main()
{
	int hf, mf, sf, mi, hi, si, m, ss, hh;
	float s;
	cout<<"Ingrese la hora inicial: "; cin>>hi;
	cout<<"Ingrese la minuto inicial: "; cin>>mi;
	cout<<"Ingrese la segundo inicial: "; cin>>si;
	cout<<"Ingrese la hora final: "; cin>>hf;
	cout<<"Ingrese la minuto final: "; cin>>mf;
	cout<<"Ingrese la segundo final: "; cin>>sf;
	if(sf>si)
	{
		si = sf-si;
	}
	else
	 {
		mf=mi-1;
		sf=si+60;
	 }
	 if(mf>mi)
	 {
	 	m = mi-m;
	 	hh = hf-hi;
	 }
	 else
	 {
	 	hf = hf-1;
	 	mf = mf +60;
	 }
	 s = hh*3600 + m*60 + sf;
	 cout<<s<< endl;
}

