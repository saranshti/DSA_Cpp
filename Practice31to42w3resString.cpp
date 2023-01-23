#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

string Example31(string s){
    for(int i = 0; i<s.length();i++){
        if(isupper(s[i]) && islower(s[i+1])){
           return "False";
        }
    }
    return "True"; 
}

void Example32(){
    string s = "The quick brown fox jumps over the lazy dog";
    s = s.append(" ");
    string temp = "";
    string n ="";
    for(int i = 0;i<s.length();i++){
        if(s[i] == ' '){
            if(temp.length()>3){
                temp = string(temp.rbegin(), temp.rend());
            }
            n += temp;
            temp = "";
            n +=" ";
        }else{
            temp += s[i];
        }
    }

    cout<<n;
}

void Example34(){
    string s = "Exercises Practice Solution";
    string s1 = "Solu";
    if(s.find(s1) != string::npos){
        s.replace(s.find(s1),s1.length(),"");
    }else{
        cout<<"Word Not Found."<<endl;
    }
    cout<<s;

}

bool Example36(string s){
    for(int i =0 ;i<s.length();i++){
        if(s[i] == s[i+1]){
            return true;
        }
    }
    return false;
}

void Example38(){
    string s = "Exercises Practice Solution";
    char s1 = 'i';
    string n = "";
    for(int i =0 ;i<s.length();i++){
        if(s[i] != s1){
            n+=s[i];
        }
    }
    cout<<n;

}

void Example39(){
    string s = "abcdea";
    int temp = 0;
    for(int  i = 0; i<s.length();i++){
        for (int j = i+1 ; j<s.length();j++){
            if(s[i] == s[j]){
                temp = 1;
                cout<<"False";
                break;
            }
        }
    }
    if(temp == 0){
        cout<<"True";
    }
}

void Example40(string s1, string s2){
    string n = "";
    int str_size = s1.length()<s2.length()?s1.length():s2.length();
    for(int i = 0;i<str_size;i++){
        if(islower(s1[i])){
            n+=s2[i];
        }
    }
    cout<<n;
}

int Example41(string text,string sstr){
	return text.find(sstr, text.find(sstr) + sstr.size());
}

void Example42(){
    string s = "saransh";
    string n ;
    if(isupper(s[0])){
        n = tolower(s[0]);
        for(int i =1;i<=s.length();i++){
            if(i%2 == 1)
                n += toupper(s[i]);
            else
                n+=s[i];
        }
    }
    if(islower(s[0])){
        n = toupper(s[0]);
        for(int i =1;i<=s.length();i++){
            if(i%2 == 0)
                n += toupper(s[i]);
            else
                n+=s[i];
        }
    }
    cout<<n;
}

int main(){
    //cout<<Example31("SSSSs");
    //Example32();
    //Example34();
    //cout<<Example36("saansh");
    //Example38();
    //Example39();
    //Example40("jScript", "Java");
    //cout<<Example41("the qu qu", "qu");
    //Example42();
    return 0;
}