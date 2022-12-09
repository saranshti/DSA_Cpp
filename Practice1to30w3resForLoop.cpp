#include<iostream>
#include<math.h>
using namespace std;

void Example9(){
    int num1 = 15;
    int num2 = 25;
    int gcd = 1;
    int j = (num1 > num2) ? num1 : num2;
    for(int i = 1;i <= j;i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    } 
    cout<<"GCD = "<<gcd;
}

void Example11(){
    int n = 5;
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + (1 / pow(i,i));
    }
    cout<<"SUM ="<<sum;
}

void Example27(){
    int prv = 0, pre = 1, trm, i, n = 20;
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++) 
    {
        trm = prv + pre;
        cout << " " << trm;
        prv = pre;
        pre = trm;
    }
}

void Example29(){
    int num1 = 3;
    int num2 = 4;
    int i = (num1 > num2) ? num1 : num2;
    while(true){
        if (i % num1 == 0 && i % num2 == 0){
            cout<<"LCM = "<<i;
            break;
        }
         i++;
    }
}

int main(){
    //https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR
    Example9();
    Example11();
    Example27();
    Example29();
    return 0;
}