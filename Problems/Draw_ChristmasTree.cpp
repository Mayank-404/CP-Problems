#include<bits/stdc++.h>

using namespace std; 

void stars_vii(int n) {
        for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " "; 
        }
        for (int l = 1; l <= i; l++) {
            cout << "*";
        }
        for (int k=1;k<i;k++ )
              cout<<"*";
        cout << endl;
        
    }
    if (n!=1){
        for (int i=1; i<=n; i++){
        if(i!=n)
        cout<<" ";
        else
        cout<<"*";
        }
    }
}
int main(){
        int n;
        cin>>n;
        stars_vii(n);
}
