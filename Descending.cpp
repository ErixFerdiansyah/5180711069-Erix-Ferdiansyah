#include <iostream>
using namespace::std;

main()
{
   int n, i, j, t;
   int a[10], k;
    cout<<endl;
   cout<<" Banyak Data : "; cin>>n;
   cout<<endl;
   for (i=0; i<n; i++)
   {
      cout<<" Data ke-"<<(i+1)<<" : "; cin>>a[i];
    }
   cout<<endl;
   cout<<" Data yang telah diinputkan : ";
   for (i=0; i<n; i++)
   {
       cout<<"\nAngka : "<<a[i];
   }
   cout<<endl<<endl;
   for (i=0; i<n; i++)
   {
      cout<<"   Fase ke-"<<(i+1)<<" : angka ("<<a[i]<<") ";
       for (j=0; j<=i; j++)
      {
         if (a[i]>a[j])
         {
            t    = a[i];
            a[i] = a[j];
            a[j] = t;
         }}}
   cout<<endl<<endl;
   cout<<" Data yang telah diurutkan  : ";
   for (i=0; i<n; i++)
   {
       cout<<"\nAngka : "<<a[i];
   }
   cout<<endl<<endl<<endl<<endl;
   cout<<"\t\t\t\t\t Created By: Erix Ferdiansyah";
}

