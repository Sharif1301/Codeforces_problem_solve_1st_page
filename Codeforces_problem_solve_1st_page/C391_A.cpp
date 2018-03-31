#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std ;

char st[100005] ;
int len,ind[200],a ;

int main (){
    cin >> st ;
    len=strlen(st) ;
    for (int i=0;i<len;i++){
        ind[st[i]]++ ;
    }
    int resul= min(ind['B'],min(ind['r'],min(ind['a']/2,min(ind['b'],min(ind['s'],min(ind['u']/2,ind['l'])))))) ;
    cout<<resul<<endl ;
    return 0 ;
}
