#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void Example31(){
    int n = 5;
    for(int i = 0;i<=5;i++){
        for(int j=0; j<=3;j++){
            cout<<n<<" ";
        }
        cout<<"\n";
    }
}

void Example36(){
    int n1 = 7, n2 = 4;
    cout<<"Without Type Casting :"<<n1/n2<<endl;
    cout<<"With Type Casting :"<<(double)n1/n2<<endl; 
}

void Example38(){
    int num = 5;
    for (int k = 1;k<=10; k++){
        cout<<num<<" X "<<k<<" = "<<num*k<<endl;
    }
}

void Example49(){
    char a = 'a';
    cout<<"ASCII value of a :"<<(int)a;
}

void Example56(){
    cout << "\n\n Show the manipulation of a string:\n";
	cout << " -------------------------------------\n"; 
    string txt = "welcome, Saransh";
    cout <<" The string:: "<< txt << endl;
    cout <<" The length of the string:: "<< txt.length() << endl;  
    cout <<" The char at index 1 of the string:: "<< txt.at(1) << endl;     
    cout <<" The char at index 1 of the string [using array ]:: "<< txt[1] << endl;        
    cout <<" Is the string empty:: "<< txt.empty() << endl;   
    cout <<" Retrieve the sub-string from 3rd position for 4 characters:: "<< txt.substr(3, 4) << endl; 
    cout <<" The sub-string replace by 'went':: "<< txt.replace(3, 4, "went") << endl; 
    cout <<" Append a string ' end' at last of the string:: "<< txt.append(" end") << endl;  
    cout <<" Append a string ' end' at last of the string using operator:: "<< txt + " end" << endl;  
    cout <<" The string ' insert ' inserting at 3rd position of the string:: "<< txt.insert(3, " insert ") << endl; 
}

void Example60(){
    string sb1 = "1010";
    string sb2 = "0011";
    int b1 = stoi(sb1);
    int b2 = stoi(sb2);
    int sum[20];
    int r = 0, i = 0;  
    while(b1 != 0 || b2 !=0){
        sum[i++] = ((b1 % 10) + (b2 % 10) + r) % 2 ;
        r = ((b1 % 10) + (b2 % 10) + r) / 2;
        b1 = b1/10;
        b2 = b2/10; 
    }
    if (r != 0){
        sum[i++] = r;
    }
    --i;
    cout<<" Addition of two Binary :";
    while (i >= 0) {
        cout<<(sum[i--]);
    }
    cout<<("\n");
}

int main(){
    //https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR
    Example31();
    Example36();
    Example38();
    Example49();
    Example56();
    Example60();
    return 0;
}