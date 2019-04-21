#include <iostream>
using namespace::std;
int k(int angka,int pangkat){
    if(pangkat==0)
        return 1;
    else
        return angka*k(angka,pangkat-1);
    }
double h(double angka,double pangkat){
    if(pangkat==0)
        return 1;
    else
        return 1/angka*h(angka,pangkat+1);
    }
main()
{
    int a,b;
    cout<<"pangkat positif\n";
    cin>>a;cin>>b;
    cout<<"= "<<k(a,b);
    cout<<"\npangkat negatif\n";
    cin>>a;cin>>b;
    cout<<"= "<<h(a,b);

}
