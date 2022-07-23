#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"input character"<<endl;
    cin>>button;

    // if (button=='a')
    // {
    //     cout<<"hello"<<endl;

    // }
    // else if (button=='b')
    // {
    //     cout<<"namste"<<endl;
        
    // }

    // else if (button=='c')
    // {
    //     cout<<"salut"<<endl;
        
    // }
    // else if (button=='d')
    // {
    //     cout<<"hola"<<endl;
        
    // }
    // else if (button=='e')
    // {
    //     cout<<"ciao"<<endl;
        
    // }
    // else{
    //     cout<<"wrong choice"<<endl;
    // }
    switch (button)
    {
    case 'a':
    cout<<"hello"<<endl;
           break;

        
        
        case 'b':
    cout<<"namste"<<endl;
            break;

        
        case 'c':
    cout<<"salute"<<endl;
            break;

        
        case 'd':
    cout<<"hola"<<endl;
        break;

        
        
        case 'e':
    cout<<"ciao"<<endl;
        break;

        
        
    
    default:
    cout<<"wrong choice"<<endl;
        
        
    }

    
    return 0;
}