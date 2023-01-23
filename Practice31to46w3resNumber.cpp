#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int addElementsArray(int arr[],int array_size){
    int sum = 0;
    for(int i = 0 ; i<array_size; i++){
        sum += arr[i];
    }
    return sum;
}

void showAdditionKeith(int arr[],int len) {
    for(int j = 0;j<len;j++){
        if(j != len-1)
            cout<<arr[j]<<" + ";
        else
            cout<<arr[j]<<" = ";
    }
}

int factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int CheckPrime(int num){
    for(int i = 2; i<=num/2;i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

void Example32(){
    int num = 27;
    int cuberoot = round(pow(num,1.0/3.0));
    if(cuberoot*cuberoot*cuberoot == num){
        cout<<num<<" is Perfect Cube of "<<cuberoot;
    }else{
        cout<<"Not Perfect cube";
    }
}

void Example33(){
    for(int i = 1;i<=10;i++){
        cout<<pow(2,pow(2,i))+1<<" ";
    }
}

void Example35(){
    int num = 7;
    int flag = 0;
    if(CheckPrime(num) == 1){
        num += 1;
        while(num){
            if(num == 1){
                flag = 0;
                break;
            }
            else if(num % 2 == 0){
                num /= 2;
                //flag = 0;
            }else{
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"Mersenne Number.";
        }else{
            cout<<"Not Mersenne Number.";
        }
    }else{
        cout<<"the number is not prime no.";
    }  
}

void Example39(){
    int a = 1,b = 0,c;
    for(int i = 1;i<=20;i++){
        c = 2*b + a;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}

void Example41(){
    int num = 197;
    int temp = num;
    int len = int(log10(num)+1);
    int arr[len];
    cout<<"Number = "<<num<<endl;
    for(int i = len-1;i>=0;i--){
        arr[i] = temp % 10;
        temp /= 10;
    }
    while(1){
        int add = addElementsArray(arr,len);
        showAdditionKeith(arr,len);
        cout<<add<<endl;
        if(add != num){
            for(int k = 0;k<len-1;k++){
                arr[k] = arr[k+1];
            }
            arr[len-1] = add;
        }else{
            break;
        }
    } 
}

void Example43(){
    int num = 15; 
    int temp = num;
    int sum = 0;
    int len = int(log10(num) + 1); 
    while(temp){
        sum += pow(temp%10, len);
        temp /= 10;
    }
    if(num == sum){
        cout<<"Armstrong Number.";
    }else{
        cout<<"Not Armstrong Number.";
    }
}

void Example45(){
    int num = 145;
    int temp = num;
    int sum = 0;
    while(temp){
        sum += factorial(temp % 10);
        temp /= 10;
    }
    if(sum == num){
        cout<<"Strong Numbers";
    }else{
        cout<<"Not Strong Numbers";
    }
} 

int main(){
    //Example32();
    //Example33();
    //Example35();
    //Example39();
    //Example41();
    //Example45();
    //Example43();
    return 0;
}