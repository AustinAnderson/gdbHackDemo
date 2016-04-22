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
    if(password=="CasdflllCheckGitLogllioewnfqdovpqiwe"){
        allowAccess=true;
    }
    if(allowAccess){
        cout<<"Hacked In!"<<endl;
    }
    if(neededHint){
        cout<<"[man strings] are for quitters..."<<endl;
    }
    return 0;
}
        
