#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void SameToSame(int ch){
    string arr[] ={"Decimal", "Binary", "Octal", "Hexadecimal"};
    string num;
    cout<<"Enter "<<arr[ch-1]<<" Number : ";
    cin>>num;
    cout<<arr[ch-1]<<" : "<<num;
}

int DToDBO(int n, int con1, int con2){
    int i = 0, any = 0;
    while(n != 0){
        int r = n % con2;
        any = (r * pow(con1,i))+any;
        n = n / con2;
        i++;
    }
    return any;
}

void DeciToHex(int d){
    int r;
    char hexa[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string hex = "";
    while(d != 0){
        r = d % 16;
        hex = hexa[r] + hex;
        d = d / 16;
    }
    cout<<"Hexadecimal : "<<hex;
}

int HexToDec(string h){
    int dec = 0;
    int j = 0;
    for(int i = size(h)-1 ;i >= 0; i--){
        int r = int(h[i]);
        if (r >= 65 && r <= 70){
            r = int(h[i])-55;
        } else {
            r = int(h[i])-48;
        }
        dec = (r * pow(16,j++))+dec;
    }  
    return dec;
}


int main(){
    int f,t;
    int n = 0;
    int dec = 10, bin = 2, oct = 8;
    int ans = 0;
    string h;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"+                 Digital Converter             +"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"1.Decimal                           1.Decimal"<<endl;
    cout<<"2.Binary          <=====>           2.Binary"<<endl;
    cout<<"3.Octal           <=====>           3.Octal"<<endl;
    cout<<"4.Hexadecimal                       4.Hexadecimal"<<endl;
    cout<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Enter number from converstion : ";
    cin>>f;
    cout<<"Enter number to converstion : ";
    cin>>t;
    cout<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl;
    if (f == t){
        SameToSame(f);
    } else if (f == 1 && t == 2 ){
        cout <<"Enter Decimal Number : ";
        cin >> n;
        ans = DToDBO(n,dec,bin);
        cout <<"Binary : "<<ans;
    } else if (f == 1 && t == 3 ){
        cout <<"Enter Decimal Number : ";
        cin >> n;
        ans = DToDBO(n,dec,oct);
        cout <<"Octal : "<<ans;
    } else if (f == 1 && t == 4){
        cout<<"Enter Decimal Number : ";
	    cin>>n;
        DeciToHex(n);
    } else if (f == 2 && t == 1 ){
        cout <<"Enter Binary Number : ";
        cin >> n;
        ans = DToDBO(n,bin,dec);
        cout <<"Decimal : "<<ans;
    } else if (f == 2 && t == 3){
        cout <<"Enter Binary Number : ";
        cin >> n;
        ans = DToDBO(DToDBO(n,bin,dec),dec,oct);
        cout <<"Octal : "<<ans;
    } else if (f == 2 && t == 4){
        cout <<"Enter Binary Number : ";
        cin >> n;
        DeciToHex(DToDBO(n,bin,dec));
    } else if (f == 3 && t == 1){
        cout <<"Enter Octal Number : ";
        cin >> n;
        ans = DToDBO(n,oct,dec);
        cout <<"Decimal : "<<ans;
    } else if (f == 3 && t == 2){
        cout <<"Enter Octal Number : ";
        cin >> n;
        ans = DToDBO(DToDBO(n,oct,dec),dec,bin);
        cout <<"Binary : "<<ans;
    } else if (f == 3 && t == 4){
        cout <<"Enter Octal Number : ";
        cin >> n;
        DeciToHex(DToDBO(n,oct,dec));
    } else if (f == 4 && t == 1){
        string h;
        cout <<"Enter Hexadecimal Number : ";
        cin >> h;
        cout <<"Decimal : "<<HexToDec(h);
    } else if (f == 4 && t == 2){
        cout <<"Enter Hexadecimal Number : ";
        cin >> h;
        cout <<"Binary : "<<DToDBO(HexToDec(h),dec,bin);
    } else if (f == 4 && t == 3){
        cout <<"Enter Hexadecimal Number : ";
        cin >> h;
        cout <<"Octal : "<<DToDBO(HexToDec(h),dec,oct);
    } else {
        cout<<"Nothing.";
    }
}