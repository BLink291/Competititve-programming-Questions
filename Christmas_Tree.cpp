#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<"\n\n";

    int n =2;
    // cin>> n;
    string stars[2*n+1];
    stars[0] = "*";
    string spaces[n+1];
    spaces[0] = "";
    
    for(int i=1; i<2*n+1 ; i++){
        stars[i] = stars[i-1]+ "**";
    }
    
    for(int i=1; i<n+1 ; i++){
        spaces[i] = spaces[i-1]+ " ";
    }
    if(n<=1){
        cout<<"You cannot generate christmas tree";
        return 0;
    }
    if(n>20){
        cout<<"Tree is no more";
        return 0;
    }
    for(int i=0; i<n-1; i++){
        if(i==0){

                cout<<spaces[n]<<stars[i]<<endl;
            }
        for(int j = 1; j <= n-i; j++){
            cout<<spaces[n-j]<<stars[j]<<endl;
        }
            
    }

    cout<<spaces[n]<<stars[0]<<endl;
    cout<<spaces[n]<<stars[0]<<endl;

    return 0;
}
