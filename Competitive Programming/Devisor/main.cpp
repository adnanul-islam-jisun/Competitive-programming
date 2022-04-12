#include <iostream>
#include<cmath>

using namespace std;


long long int swa(long long int &a,long long int &b)
{
    a=b;

    return a;
}

long long int gcd(long long int p,long long int q){




  while(p!=q){

    if(p==q){
        return p;
        break;
    }

    else if(p>q){

      long long  int r=p-q;
        swa(p,r);
    }
    else{
     long long int  r=q-p;
        swa(q,r);
    }
   }
  }


  int main()
{
  int T;
    cin>>T;
    long long int *a = new long long int[T];
    long long int *b = new long long int[T];

    long int j;
    for(j=0;j<T;j++){
        cin>>a[j]>>b[j];
    }
    long long int p,q;
    for(j=0;j<T;j++){
        p=pow(5,a[j])+pow(7,a[j]);
        q=pow(5,b[j])+pow(7,b[j]);
        cout<<gcd(p,q)<<endl;
    }


    return 0;
}



