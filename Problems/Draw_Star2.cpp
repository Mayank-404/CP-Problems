#include<bits/stdc++.h>

using namespace std; 
void stars_ix(int n) {
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i==1||i==n){
                cout<<"*";
            }
            else{
                if(j==1||j==n){
                    cout<<"*";
                
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
int main(){
        int n;
        cin>>n;
        stars_ix(n);
}
