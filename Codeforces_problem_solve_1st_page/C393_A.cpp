#include <iostream>
#include <cstdio>

using namespace std ;

int main(){
    int a,b ;
    cin>>a>>b ;
    if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)a=31 ;
    else if (a==2)a=28 ;
    else a=30 ;
    if (a==30&&b<7)cout<<"5"<<endl ;
    else if (a==30&&b==7)cout<<"6"<<endl ;
    else if (a==31&&b<6)cout<<"5"<<endl ;
    else if (a==31&&b>=6)cout<<"6"<<endl ;
    else if (a==28&&b==1)cout<<"4"<<endl ;
    else if (a==28)cout<<"5"<<endl ;
    return 0 ;
}
