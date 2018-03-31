#include <bits/stdc++.h>

using namespace std ;

int main (){
    //freopen("in,txt","r",stdin) ;
    long long int n,k;
    cin>>n>>k;
    long long int half=n/2 ;
    long long int diploma,certificate,not_winner;
    diploma=half/(k+1);
    certificate=diploma*k;
    if(diploma+certificate<=half)
        not_winner=n-(diploma+certificate);
    else
        not_winner=n;
    cout<<diploma<<" "<<certificate<<" "<<not_winner<<endl ;
    return 0;
}
