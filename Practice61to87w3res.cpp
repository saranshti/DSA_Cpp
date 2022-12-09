#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

void Example62(){
    int n = 50;
    int flag = 1;
    int k = 0;
    int arr[500];
    for(int j = 2; j<=n;j++ ){
        //int j = 5;
        int m = j/2;
        for(int i = 2; i<=m;i++){
            if(j%i == 0){
                flag = 0;
            }
        }
        if(flag == 0){
            flag = 1;
        }else{
            arr[k] = j;
            k++;
        }
    }
    int x = 0;
    for(int l=0;l<k;l++){
        int s = arr[x];
        int u = arr[++x];
        if(u-s == 2){
            cout<<"("<<s<<" , "<<u<<")"<<endl;
        }
    }
}

void Example64(){
    int num1 = 758;
    int num2 = 23;
    int add = num1 + num2;
    string txt = to_string(add);
    cout<<"Length of SUM is : "<<txt.length();
}

void Example69(){
    int f = 10;
    long fact = 1;
    for (int i = 1; i <= f; i++){
        fact = fact*i;
    }
    cout<<"Factorial of "<<f<<" is : "<<fact;
}

void Example79(){
    int y1 = 1950;
    int y2 = 2000;
    for(int i = y1; i <= y2; i++){
        if (i%4 == 0){
            if(i%100 == 0){
                if(i%100 == 0){
                    cout<<i<<endl; 
                }
            }else{
                cout<<i<<endl;
            }
        }
    }
}

void Example83(){
    int ti = 47;
    int hr = ti / 60;
    int min = ti - hr*60;
    cout<<"Hour : "<<hr<<", Minuets : "<<min;
}

void Example84(){
    int a[] = {2,3,4,6};
    int l = (int)size(a);
    int d = a[1] - a[0]; 
    float r = a[1] / a[0];
    bool isAP = true;
    bool isGP = true;
    for (int i = 0; i < l-1 && isAP ; i++){
        isAP = false;
        if(a[i+1] - a[i] == d){
            isAP = true;
        }
    }
    for (int j = 0; j < l-1 && isGP ; j++){
        isGP = false;
        if(a[j] * r == a[j+1]){
            isGP = true;
        }
    }
    if (isAP){
        cout<<"AP."<<endl;
    }else{
        cout<<"Not AP."<<endl;
    }
    if (isGP){
        cout<<"GP."<<endl;
    }else{
        cout<<"Not GP."<<endl;
    }
}

int main(){
    //https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR
    Example62();
    Example64();
    Example69();
    Example79();
    Example83();
    Example84();
    return 0;
}
