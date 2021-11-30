#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6][6];
    int loci,locj;
    for (int i = 1; i <= 5; i++)
    {
            for (int j = 1; j <=5 ; j++)
            {
                cin>>arr[i][j];
            }
            
    }
    for (int i = 1; i <= 5; i++)
    {
            for (int j = 1; j <=5 ; j++)
            {
                if(arr[i][j]==1){
                    loci=i;locj=j;
                }
            }
            
    }
    int steps=abs(loci-3)+abs(locj-3);

    cout<<steps;
    
    return 0;
}