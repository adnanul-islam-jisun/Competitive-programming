#include <iostream>

using namespace std;



int main() {

    int n;
    cin>>n;
    int a[n+1];
   
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
   int even=0,odd=0,e,d;
    for(int i=1;i<=n;i++){
       if(a[i]%2==0){
        even++;
        e=i;

       }
       else{
        odd++;
        d=i;
       }
    }
    if(even>odd)
    cout<<d<<endl;
    else
    cout<<e<<endl;

    return 0;

}
