#include <iostream>

using namespace std;

int arr[105];
int main(){
    int n,i,counter=0;
    cin>>n;
    for (i=0;i<n;++i)cin>>arr[i];
    i=0;
    while(arr[i]<arr[i+1]&&counter<=n){i++;counter++;}
    while(arr[i]==arr[i+1]&&counter<=n){i++;counter++;}
    while(arr[i]>arr[i+1]&&counter<=n){i++;counter++;}
    if(counter==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
