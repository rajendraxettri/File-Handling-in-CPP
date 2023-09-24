#include<iostream>
#include<fstream>
using namespace std;

void inputRecord(){
           string message,age, name, address;
        ofstream myfile("DataBase.txt");

    int tempNum;
    cout<<"\t\t\tEnter number of record : "<<endl;
    cin>>tempNum;

   
do{
  cout<<"\t\t\nEnter your name : ";
    getline(cin,name);
    myfile<<"Name : "<<name<<endl;
    cout<<"\t\tEnter your age : ";
    getline(cin,age);
    myfile<<"Age : "<<age<<endl;
    cout<<"\t\tEnter your address : ";
   getline(cin,address);
    myfile<<"Address : \n\n"<<address<<endl;
    tempNum = tempNum-1;
}while(tempNum = 0);
myfile.close();
    
    


    };

 void showRecord(){
     cout<<"The record is : "<<endl;
    ifstream rfile("DataBase.txt");
    string details;

   while (getline(rfile, details)) {
            cout << details << endl;
        }

         rfile.close();
   }
   
int main()
{


    start:
    int a;
    cout<<"\t\t\t[<1>] Enter Details !\n";
    cout<<"\t\t\t[<2>] Show All Details !\n";
    cout<<"\t\t\tEnter a number : ";
    cin>>a;

switch (a)
{
case 1:
    inputRecord();
    
    break;

case 2:
showRecord();
break;


default:

cout<<"Sorry wrong option !";

    break;
}

goto start;




return 0;
}//@rajendra_chimala

    