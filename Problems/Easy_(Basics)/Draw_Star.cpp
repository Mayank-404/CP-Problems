/** Print out the following pattern of stars for n rows.

   *
  ***
 *****
*******

**/
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
}
int main(){
        int n;
        cin>>n;
        stars_vii(n);
}
