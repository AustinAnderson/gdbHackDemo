#include <iostream>

using namespace std;

int main(){
    string password;
    cout<<"enter the password: ";
    cin>>password;
    bool allowAccess=false;//fail safe
    if(password=="CorrectPassword"){
        allowAccess=true;
    }
    if(allowAccess){
        cout<<"Root Access!"<<endl;
    }
    return 0;
}
        
