#include <iostream>
#include <cstdio>

using namespace std ;

int counter,arr[10005],i ;
int main (){
    int n,k,z ;
    cin>>n>>k>>z ;
    for (i=1;i<=z;++i){
        if ((i*k)<=z)arr[i*k]=1 ;
        else break ;
    }
    for (i=1;i<=z;++i){
        if ((i*n)<=z){
            if(arr[i*n]==1)counter++ ;}
        else break ;
    }
    cout<<counter<<endl ;
    return 0 ;
}
