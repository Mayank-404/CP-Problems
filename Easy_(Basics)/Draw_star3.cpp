#include<bits/stdc++.h>

using namespace std;

void stars_vii(int n) {
    for (int i = 0; i <n/2+1; i++) {
        for(int j=0; j<(n/2+1)-i-1; j++){
            cout<<" ";
        }
        for(int l=0; l<2*i+1; l++){
            cout<<"*";
        }
    cout<<endl;
    }
    for (int i=0; i<n/2; i++){
        for (int j=2; j<=i;j++){
            cout<<" ";
        }
        for(int l=n-2-2*i;l>=1;l--){
            cout<<"*";
        }
        cout<<endl;
    }
   
}
int main(){
        int n;
        cin>>n;
        stars_vii(n);
}
