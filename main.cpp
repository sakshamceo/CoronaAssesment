#include <bits/stdc++.h>
using namespace std;

void second(string s , int age)
{ system("clear");

char ch;
int sc=0,sc2=0,sc3=0,sc4=0;

cout<<"Answer in Y/N Only"<<endl<<endl;

cout<<"Are You Feeling Chest pain?"<<endl;
cin>>ch;
if(ch=='Y'||ch=='y')
{
  sc++;
}
system("clear");
cout<<"Are You having diabetese?"<<endl;
cin>>ch;
if(ch=='Y'||ch=='y')
{
  sc2++;
}
  system("clear");
cout<<"Are You having hypertension?"<<endl;
cin>>ch;
if(ch=='Y'||ch=='y')
{
  sc2++;
}
system("clear");
cout<<"Are You having Fever?"<<endl;
cin>>ch;
if(ch=='Y'||ch=='y')
{
  sc3++;
}
 system("clear");
cout<<"Did You Travelled internationally in last 14 days?"<<endl;
cin>>ch;
if(ch=='Y'||ch=='y')
{
  sc4++;
}
system("clear");
if(sc==1 && sc2==0 && sc3==0 && sc4==0)
{
  cout<<s<<" You Have Gastric Problem , Take bed rest"<<endl;
}
else if(sc==0 && sc2==1 && sc3==0 && sc4==0)
{
  cout<<s<<" Consult Physcian"<<endl;
}
else if(sc==0 && sc2==1 && sc3==1 && sc4==0)
{
  cout<<s<<" Damn... Its Serious buddy ,consult google"<<endl;
}
else if(sc==0 && sc2==2 && sc3==1 && sc4==0)
{
  cout<<s<<" Damn... Its Serious buddy ,consult google"<<endl;
}
else if(sc==1 && sc2==2 && sc3==1 && sc4==1)
{
  cout<<s<<" RIP- Its Corona 2.0"<<endl;
}
else if(sc==0 && sc2==2 && sc3==0 && sc4==0)
{
  cout<<s<<" Consult Physcian"<<endl;
}
else if(sc==0 && sc2==0 && sc3==1 && sc4==0)
{
  cout<<s<<" Consult Physcian"<<endl;
}
else if(sc==0 && sc2==0 && sc3==0 && sc4==1)
{
  cout<<s<<" Please Dont take exertion"<<endl;
}
else if(sc==0 && sc2==0 && sc3==0 && sc4==0)
{
  cout<<s<<" Well Congrats You are Wasting your Time"<<endl;
}
else{
  cout<<s<<" It Can Be Corona, Call- 1075"<<endl;
}
}






void first(string s , int age)
{ char ch;
 
   system("clear");
    cout<<"Hello Mr "<<s<<" This Is a Corona Assesment Bot"<<endl<<endl;;
    cout<<"You will be self diagnosed by answering easy questions"<<endl;
    cout<<endl<<"Agreed? (Y/N)"<<endl;
    cin>>ch;
    if(ch=='Y'|| ch=='y')
    {
     second( s, age);
    }
    
    
}
int main() {
    int c=0;
    cout<<"---------------------------------------------"<<endl;
cout<<"CORONA SELF ASSESMEMNT"<<endl;
   cout<<"---------------------------------------------"<<endl;
cout<<"Press 1 to start"<<endl;
cin>>c;
if(c==1)
{ string s;
  int age;
    system ("clear");
    cout<<"hello Please Enter Your Name"<<endl;
   cin>>s;
    cout<<"Your Age"<<endl;
    cin>>age;
    first(s,age);
    cout<<"Thanks Fot Using - GoodBye!"<<endl;
    cout<<"------------------------------"<<endl;cout<<"------------------------------"<<endl;
    cout<<"Made With Love By - Saksham Garg"<<endl;
    

}
}
