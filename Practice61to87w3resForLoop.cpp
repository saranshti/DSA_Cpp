#include<iostream>
#include<math.h>
#include<string>
using namespace std;


void Example61(){
    char alph = 'A';
    for(int i = 65; i<65+26; i++)
        cout<<"ASCII Value of "<<alph++<<" --> "<<i<<endl;
}

void Example64(){
    char bin[8],oc[8],tc[8];
    int carr = 1;
    cout << "Input a 8-bit binary value: ";
    cin >> bin;
    for(int i = 0;i<8;i++){
        (bin[i] == '1') ? oc[i] = '0': oc[i] = '1';
    }
    oc[8] = '\0';
    cout<<"One's Compliment : "<<oc<<endl;
    for(int j = 7; j>=0; j--){
        if (oc[j] == '1' && carr == 1){
            tc[j] = '0';
        }
        else if (oc[j] == '0' && carr == 1){
            tc[j] = '1';
            carr = 0;
        }
        else{
            tc[j] = oc[j];
        }
    }
    tc[8] = '\0';
    cout<<"Two's Compliment : "<<tc;
}

void Example69(){
    int n=9, i, j, k, m = 0;
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            for(j = 0; j<n;j++){
                cout<<j<<"  "; 
            }
        }
        else {
            for (k = i - 1; k >= 1; k--) {
                cout << k << "  ";
            }
            cout << m << "  ";
            for (j = 1; j <= n - i; j++) {
                cout << j << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void Example84(){
    int n = 2345;
    int sum = 0;
    while(n != 0){
        int r = n % 10;
        sum = sum + r; 
        n = n / 10;
    }
    cout<<sum;
}

int main(){
    //https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR
    Example61();
    Example64();
    Example84();
    Example69();
    return 0;
}
