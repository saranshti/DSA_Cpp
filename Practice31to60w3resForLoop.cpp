#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void Example34(){
    char str1[50];
    int i, l = 0;
    cout << "\n\n Find the length of a string:\n";
    cout << "---------------------------------\n";
    cout << " Input a string: ";
    cin >> str1;
    for (i = 0; str1[i] != '\0'; i++) {
        l++;
    }
    cout << "The string contains " << l << " number of characters." << endl;
    cout << "So, the length of the string " << str1 << " is:" << l << endl;
}

void Example35(){
    int n = 5;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";// use j and i for diffrent pattern;
        }
        cout<<endl;
    }
}

void Example38(){
    int n = 5;
    int k = 1;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

void Example40(){
    int n = 5;
    for(int i = 1; i<=n;i++){
        int s = n-i;
        for(int j = 1; j<=s;j++){
            cout<<" ";
        }
        for(int k = 1; k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void Example44(){
    int n = 5;
    for(int i = 1; i<=n;i++){
        int s = n-i;
        for(int j = 1; j<=s;j++){
            cout<<" ";
        }
        for(int k = 1; k<=i*2-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i<=n-1;i++){
        int s = n-i;
        for(int j = 1; j<=i;j++){
            cout<<" ";
        }
        for(int k = 1; k<=s*2-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void Example45(){
    int c=1,blk,i,j,row = 5;
    cout << "\n\n Display the Pascal's triangle:\n";
    cout << "-----------------------------------\n";
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}

void Example47(){
    int row = 6;
    for(int i=1;i<=row;i++){
        for(int j = 1; j<=row-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        //cout<<endl;
        for(int l=1;l<=i-1;l++){
            cout<<i-l;
        }
        cout<<endl;
    }
}

void Example48(){
    int i, j;
    char alph = 'A';
    int n = 6, blk;
    int ctr = 1;
    for (i = 1; i <= n; i++) {
        for (blk = 1; blk <= n - i; blk++){
            cout << "  ";
        }
        for (j = 0; j <= (ctr / 2); j++){
            cout << alph++ << " ";
        }
        alph = alph - 2;
        for (j = 0; j < (ctr / 2); j++){
            cout << alph-- << " ";
        }
        ctr = ctr + 2;
        alph = 'A';
        cout << endl;
    }
}

void Example49(){
    int i, j, spc, n = 5;
    for (i = 1; i <= n; i++) {
        spc = n - i;
        while (spc-- > 0)
            cout << " ";
        for (j = i; j < 2 * i - 1; j++)
            cout << j;
        for (j = 2 * i - 1; j > i - 1; j--)
            cout << j;
        cout << endl;
    }
}

void Example58(){
    int num = 3456;
    int prod = 1;
    while(num !=0){
        int a = num % 10;
        num = num / 10;
        prod = prod * a;
    }
    cout<<prod;
}

void Example60(){
    int n = 3854,num=0,i;
    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    for (i = num; i > 0; i = i / 10) {
        switch (i % 10) {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
}

int main(){
    //https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR
    Example34();
    Example35();
    Example38();
    Example40();
    Example44();
    Example45();
    Example47();
    Example48();
    Example49();
    Example58();
    Example60();
    return 0;
}