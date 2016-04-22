#include <iostream>

using namespace std;

bool hintForLater(string value){
    return value=="need a hint? ;)";
}

int main(){
    string password;
    cout<<"enter the password: ";
    cin>>password;
    bool neededHint=hintForLater(password);
    bool allowAccess=false;//fail safe
    if(password=="Casdflkjjiioewnfqdovpqiwe"){
        allowAccess=true;
    }
    if(allowAccess){
        cout<<"Hacked In!"<<endl;
    }
    if(neededHint){
        cout<<"do this later..."<<endl;
    }
    return 0;
}
        
