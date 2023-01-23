#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int addRecursion(int m,int n){
    if(n == 0){
        return m;
    }else{
        return addRecursion(m,n-1)+1; 
    }
}

int mulRecursion(int m,int n){
    if(n == 1){ 
        return m;
    }else{
        return mulRecursion(m,n-1)+m;
    }
}

int find(int decimal_number){
    if(decimal_number == 0){
        return 0;
    }else{
        return (decimal_number % 2 + 10 * find(decimal_number / 2));
    }
}

int factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int reverse(int num){
    int rev = 0;
    int i = num;
    while(i>0){
        int r = i%10;
        rev = rev*10 + r;
        i = i/10;
    }
    return rev;
}

int PalindromExample38(int num){
    if(num == reverse(num)){
        return 1;
    }
    return 0;
}

int CheckPrime(int num){
    for(int i = 2; i<=num/2;i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

void Example3(){
    int ab = 0;
    int count = 0;
    for(int num = 2;num<=1000;num++){
        for(int i = 1;i<=num/2;i++){
            if(num % i == 0){
                ab += i;
            }
        }
        if(ab > num){
            cout<<num<<" ";
            count++;
        }
        ab = 0;
    }
    cout<<"Abundant Numbers between 2 and 1000 is "<<count<<endl;
}

void Example5(){
    int pf = 0;
    int count = 0;
    for(int num = 2;num<=1000;num++){
        for(int i = 1;i<=num/2;i++){
            if(num % i == 0){
                pf += i;
            }
        }
        if(pf == num){
            cout<<num<<" is a Perfect Number."<<endl;
            count++;
        }
        pf = 0;
    }
    cout<<"Perfect Numbers between 2 and 1000 is "<<count<<endl;
}

void Example7(){
    int df = 0;
    int count = 0;
    for(int num = 1;num<=100;num++){
        for(int i = 1;i<=num/2;i++){
            if(num % i == 0){
                df += i;
            }
        }
        if(df < num){
            cout<<num<<" ";
            count++;
        }
        df = 0;
    }
    cout<<"Deficient Numbers between 1 and 100 is "<<count<<endl;
}

void Example10(){
    int kr = 0;
    for(int i=10;i<=1000;i++){
        int len = int(log10(i) + 1);
        int p = len - len/2;
        int sq = i*i;
        int equl_part = pow(10,p+1);
        int r_num = sq / equl_part;
        int l_num = sq % equl_part;
        if(r_num+l_num == i){
            cout<<i<<" ";
            kr++;
        }
    }
    cout<<"\nKarpekar Numbers between 10 and 1000 is "<<kr<<endl;
}

void Example12(){
    int count = 0;
    for(int num = 1; num<=500; num++){
        int flag = 0;
        int temp = num;
        for(int i = 1; i<=10;i++){
            if(PalindromExample38(temp+reverse(temp)) == 1){
                flag = 1;
                break;
            }
            temp = temp+reverse(temp);
        }
        if(flag == 0){
            cout<<num<<" ";
            count++;
        }
    }
    cout<<"\nLychrel Numbers between 1 and 500(after 10 iteration) is "<<count<<endl;
}

void Example13(){
    cout << "The first 15 Narcissistic decimal numbers are: \n";
    int i = 1;
    int flag = 0;
    int j = 1;
    while(i<=15){
        int len = int(log10(j) + 1);
        int temp = j;
        int sum = 0;
        for(int k=1;k<=len;k++){
            int r = temp % 10;
            sum += pow(r,len);
            temp = temp/10; 
        }
        if(j == sum){
            cout<<j<<" ";
            i++;
        }
        j++;
    }
}

void Example15(){
    for(int i = 0; i<=6 ;i++){
        float a =(float)1/(i+1);
        float f = (float)factorial(2*i)/(factorial(i)*factorial(i));
        cout<<"C("<<i<<") = "<<a*f<<endl;
    }
}

void Example16(){
    int num = 94;
    int temp = num;
    int sum = 0;
    while(1){
        if(sum == 1){
            cout<<"Happy number.";
            break;
        }else if(sum == num){
            cout<<"Not Happy number.";
            break;
        }else{
            sum = 0;
            while(temp){
                sum += pow(temp%10,2);
                temp /= 10;
            }
        }
        temp = sum;
    }
}

void Example19(){
    int count = 0;
    for(int num = 1;num <= 1000;num++){
        int temp = num;
        int sum = 0;
        int len = int(log10(num) + 1);
        for(int j = len;j>=1;j--){
            int r = temp % 10;
            sum += pow(r,j);
            temp /= 10;
        }
        if(sum == num){
            cout<<num<<" ";
            count++;
        }
    }
    cout<<"\nDisarium Numbers between 1 and 1000 is "<<count<<endl;
}

void Example21(){
    int count = 0;
    for(int num = 1;num<=100;num++){
        int temp = num;
        int sum = 0;
        int len = int(log10(num) + 1);
        for(int j = len;j>=1;j--){
            int r = temp % 10;
            sum += r;
            temp /= 10;
        }
        if(num % sum == 0){
            cout<<num<<" ";
            count++;
        }
    }
    cout<<"\nHarshad Numbers between 1 and 100 is "<<count<<endl;
}

void Example23(){
    int count = 0;
    for(int num = 1;num<=1000;num++){
        for(int i=1;i<=num;i++){
            if(i*(i+1) == num){
                cout<<num<<" ";
                count++;
                break;
            }
        }
    }
    cout<<"\nPronic Number or Heteromecic Number between 1 and 1000 is "<<count<<endl;
}

void Example25(){
    int count = 0;
    for(int num = 1;num<=1000;num++){
        int flag = 0;
        int temp = num;
        int sq = num*num;
        while(temp > 0){
            if(sq % 10 != temp % 10){
                flag = 1;
                break;
            }
            temp /= 10;
            sq /= 10;
        }
        if(flag == 0){
            cout<<num<<" ";
            count++;
        }
    }
    cout<<"\nAuthomorphic Number between 1 and 1000 is "<<count<<endl;
}

void Example27(){
    int count = 0;
    for(int num = 1;num<=500;num++){
        int temp = num;
        while(temp>0){
            if(temp % 10 == 0){
                cout<<num<<" ";
                count++;
                break;
            }
            temp /= 10;
        }
    }
    cout<<"\nDuck Number between 1 and 500 is "<<count<<endl;
}

void Example30(){
    int temp = 1193;
    int flag = 0;
    int len = int(log10(temp) + 1);
    for(int i = 1;i<=len;i++){
        if(CheckPrime(temp)){
            int r = temp % 10;
            temp /= 10;
            temp += r*pow(10,len-1);
        }else{
            flag = 1;
            break;
        } 
    }
    if(flag == 0){
        cout<<"Circular Prime";
    }else{
        cout<<"Not Circular Prime";
    }
}

int main(){
    //https://www.w3resource.com/cpp-exercises/numbers/index.php
    //Example3();
    //Example5();
    //Example7();
    //Example10();
    //Example12();
    //Example13();
    //Example15();
    //Example16();
    //Example19();
    //Example21();
    //Example23(); 
    //Example25();
    //Example27();
    //Example30();
    //cout<<PalindromExample38(121); 
    //cout<<addRecursion(5,3);
    //cout<<mulRecursion(5,3);
    cout<<find(12);
    return 0;
}
