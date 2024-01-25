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
