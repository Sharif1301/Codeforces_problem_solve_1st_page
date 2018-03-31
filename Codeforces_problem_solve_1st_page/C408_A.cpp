#include <bits/stdc++.h>

using namespace std;
int arr[102] ;
int main (){
    int n,k,m,i,j=99999999 ;
    cin>>n>>k>>m ;
    for (i=1;i<=n;i++){
        cin>>arr[i] ;
    }
    for (i=1;i<=n;i++){
        if(arr[i]<=m&&arr[i]!=0){
            //cout<<i<<""<<k<<endl;
            j=min(j,abs(i-k)*10) ;
        }
    }
    cout<<j<<endl;
    return 0;
}
