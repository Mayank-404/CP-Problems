#include<bits/stdc++.h>

using namespace std;

void s_vii(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((j+i)%2==0){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
    cout<<endl;
    }
}
int main(){
        int n;
        cin>>n;
        s_vii(n);
}
