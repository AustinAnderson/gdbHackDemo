#include <iostream>

using namespace std;

void rootAccessRoutine(bool allowAccess){
    if(allowAccess){
        cout<<"Root Access!"<<endl;
    }
}


int main(){
    string password;
    cout<<"enter the password: ";
    cin>>password;
    bool allowAccess=false;//fail safe
    if(password=="CorrectPassword"){
        allowAccess=true;
    }
    rootAccessRoutine(allowAccess);
    return 0;
}
        
