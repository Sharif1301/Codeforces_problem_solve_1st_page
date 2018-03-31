#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n,result=1;
    cin>>n;
    int arr[n+5][n+5] ;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]!=1){
                int flag=0;
                for(int k=0;k<n;++k){
                    for(int l=0;l<n;++l){
                        if(arr[i][k]+arr[l][j]==arr[i][j])
                            flag=1;
                    }
                }
                if(!flag)
                    result=0;
            }
        }
    }
    if(result)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
