#include <iostream>

using namespace std;
bool checkPassword(string password){
    bool allowAccess=false;//fail safe
    if(password=="CorrectPassword"){
        allowAccess=true;
    }
    return allowAccess;
}

int main(){
    string password;
    cout<<"enter the password: ";
    cin>>password;
    bool allowAccess=checkPassword(password);
    if(allowAccess){
        cout<<"Root Access!"<<endl;
    }
    else{
        cout<<"access Denied!!"<<endl;
    }
    return 0;
}
        
