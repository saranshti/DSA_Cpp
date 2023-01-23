#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

void Example1(){
    string temp = "";
    string s = "Saransh Tiwari";
    for(int i = s.length();i>=0;i--){
        temp = temp+s[i]; 
    }
    cout<<temp<<endl;
    //inbuilt  Method
    string rev = string(s.rbegin(), s.rend());
    cout<<rev<<endl;
}

void Example2(){
    string str="Saransh Tiwari"; 
    int char_code;
	for (int x = 0; x < str.length(); x++){
		char_code = int(str[x]);
		if (char_code == 122){
			str[x] = char(97);
		}
		else if (char_code == 90){
			str[x] = char(65);
		}
		else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122){
			str[x] = char(char_code + 1);
		}
	}
    cout<<str<<endl;
}

void Example3(){
    string s = "saransh vindchandra tiwari";
    for (int x = 0; x < s.length(); x++){
        if (x == 0)
		{
			s[x] = toupper(s[x]);
		}
		else if (s[x - 1] == ' ')
		{
			s[x] = toupper(s[x]);
		}
    }
    cout<<s<<endl;
}

void Example4(){
    string s = "C++ is a general - purpose programming language";
    string temp_str1="";
    string temp_str2="";
    for (int i = 0;i<s.length();i++){
        if(s[i] != ' '){
            temp_str1 += s[i];
        }else{
            if(temp_str1.length() >=  temp_str2.length()){
                temp_str2 = temp_str1;
                temp_str1 = "";
            }
        }
    }
    cout<<"Biggest String : "<<temp_str2<<endl;
}

void Example5(){
    string s = "SaranshVindchandraTiwari";
    sort(s.begin(),s.end());
    cout<<s<<endl;
}

void Example6(){
    string s = "eag";
    int temp = 0;
    for (int i = 0;i<s.length();i++){
        if(s[i] == 'e' && s[i+2] == 'g'){
            cout<<"true";
            temp = 1;
            break;
        }
        else if(s[i] == 'g' && s[i+2] == 'e'){
            cout<<"true";
            temp = 1;
            break;
        }
    }
    if(temp == 0){
        cout<<"false";
    }
}

void Example7(){
    string s = "saranshvindchandratiwari";  
    int count = 0;
    for(int i = 0; i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    cout<<"Number of vowels : "<<count;
}

void Example10(){
    string str1, str2;
    string text = "madeam";
    int str_len = int(text.size());
    for (int i = 0; i < str_len; i++){
        if((text[i] >= 'a' && text[i] <= 'z' ) || (text[i] >= 'A' && text[i] <= 'Z' ))
        str1+=tolower(text[i]);
        if((text[str_len-1-i] >= 'a' && text[str_len-1-i] <= 'z' ) || (text[str_len-1-i] >= 'A' && text[str_len-1-i] <= 'Z' ))
        str2+=tolower(text[str_len-1-i]);
    }
    if (str1 == str2){
        cout<<"True";
    }else{
        cout<<"False";
    }
}

void Example12(){
    string s = "12334567899";
    string n = "";
    for(int i = 0 ; i<s.length();i++){
        if((int)s[i] % 2 == 1 && (int)s[i+1] % 2 == 1){
            string str = "";
            n += str.append(1, s[i])+"-";
        }else{
            string str = "";
            n += str.append(1, s[i]);
        }
    }
    cout<<n;
}

void Example13(){
    string s = "SaraNsh";
    for(int i = 0 ; i<s.length();i++){
        if (isupper(s[i]))
		{
			s[i] = tolower(s[i]);
		}
		else
		{
		    s[i] = toupper(s[i]);
		}
    }
    cout<<s;
}

void Example16(){
    string s1 = "Padas";
    string s2 = "Packed";
    string s3 = "Papa";
    string s4 = "Pace";
    string s5 = "Pacha";
 
    string pre = "";
    for(int i = 0;i<s1.length();i++){
        if (s1[i] == s2[i] && s1[i] == s3[i] && s1[i] == s4[i] && s1[i] ==s5[i]){
            pre += s1[i]; 
        }else{
            break;
        }
    }
    cout<<pre;
}

void Example22(){
    string s = "abcd $ js# @acde$";
    string n = "";
    for(int i = 0; i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]==' ' || s[i]=='-' || s[i]=='_')
            n += s[i];
    }
    cout<<n;
}

void Example23(){
    string s1 = "python", s2 = "java", s3 = "cpp", s4 = "javascript";
    string total = s1+s2+s3+s4;
    string n = "";
    cout<<total;

}

void Example24(){
    string s = "Remove all special characters from a given string";
    int n = 0;
    sort(s.begin(),s.end());
    for(int i = 0; i<s.length();i++){
        if(s[i] == s[i+1])
            n += 1;
    }
    cout<<n;
}

void Example28(){
    string text = "The quick brown fox.";
    int n = 2;
    string b;
    int k=0;
    for (int i=0; i<text.size() && k<n; i++){
	    if (text[i]=='a' || text[i]=='e'|| text[i]=='i'|| text[i]=='o'|| text[i]=='u'){
            k++;
	        b.push_back(text[i]);
        }
    }
    if (k<n){
        cout<<"n is less than number of vowels present in the string!";
    }else{
        cout<<b;
    }
}

void Example27(){
    string s = "SaranshVinodchandraTiwari";
    string n = "";
    for(int i = 0 ; i < s.length();i++){
        n+=s[i];
        if(islower(s[i]) && isupper(s[i+1])){
            n+=' ';
        }
    }
    cout<<n;
}

void Example30(){
    string s = "abcdef";
    int flag = 0; 
    int a = 0;
    int l = (int)s[s.length()-1];
    int f = (int)s[0];
    for(int i = f;i<=l;i++){
        if((char)i == s[a]){
            a++;
        }else{
            flag = 1;
            cout<<"Missing :"<<char(i)<<endl;
        }
    }
    if(flag == 0){
        cout<<"No Letter is Missing from String."<<endl;
    }
}


int main(){
    //https://www.w3resource.com/cpp-exercises/string/index.php
    //Example1();
    //Example2();
    //Example3();
    //Example4();
    //Example5();
    //Example6();
    //Example7();
    //Example10();
    //Example12();
    //Example13();
    //Example16();
    Example22();
    //Example23();
    //Example24();
    //Example28();
    //Example27();
    //Example30();
    return 0;
}