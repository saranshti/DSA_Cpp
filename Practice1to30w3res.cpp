#include<iostream>
#include<math.h>
using namespace std;

void Example9(){
    int n = 30;
    cout<<"The Number :"<<n<<endl;
    cout<<"post increment :"<<n++<<endl;
    cout<<"pre increment :"<<++n<<endl;
}

void Example13(){
    int a = 3;
    int b = 4;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}

void Example14(){
    float r = 5.5;
    float pi = 3.14;
    float vol = ((4/3)*pi*r*r*r);
    cout<<"Volume of Sphere :"<<vol<<endl;
}

void Example20(){
    float frh = 95;
    float cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout << "The temperature in Celsius : " << cel << endl;
    cout << "The temperature in kevin : " << cel + 273.15 << endl;
}

int main(){
    //https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR
    Example9();
    Example13();
    Example14();
    Example20();
    return 0;
}