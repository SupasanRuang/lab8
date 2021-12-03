#include<iostream>
#include<string>

using namespace std;

int main()
{
    string your_name,movie_name,movie_date,see_you;
    long student_ID;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout<<"?????: ";
    getline(cin,your_name);
    
    cout<<"Fahsai: Wow!!! "<<your_name<<" is a really cool name."<<endl;
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout<<your_name<<": ";
    
    cin>>student_ID;
    cin.ignore();
    int GEAR=int(student_ID/10000000)-12;
    cout<<"Fahsai: I think you may be GEAR "<< GEAR<<". I have a free movie ticket for you."<<endl;
    cout<<"Fahsai: Let's go to the cinema together!!!"<<endl;
    cout<<"Fahsai: What movie do you want to watch?"<<endl;
    cout<<your_name<<": ";
    getline(cin,movie_name);
    cout<<"Fahsai: So....which day are you free to go with me?"<<endl;
    cout<<your_name<<": ";
    getline(cin,movie_date);
    cout<<"Fahsai: "<<movie_date<<"....that is OK!!! I'm looking forward to watching "<<movie_name<<" with you."<<endl;
    cout<<your_name<<": ";
    getline(cin,see_you);
    cout<<"Fahsai: 555+ see you "<<movie_date<<". Bye Bye \\(^ ^)/"<<endl;
    
    return 0;
}