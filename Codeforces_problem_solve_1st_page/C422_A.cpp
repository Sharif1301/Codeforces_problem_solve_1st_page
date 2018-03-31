#include <bits/stdc++.h>
using namespace std ;
int main (){
    long long int a,b,result=1 ;
    cin>>a>>b ;
    a=min(a,b) ;
    for (int i=a;i>0;i--){
        result=result*i ;
    }
    cout<<result<<endl ;
    return 0;
}
