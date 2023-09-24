#include<iostream>
#include<fstream>
using namespace std;
   
int main()
{
    string name,age, address;


    start:
    int a;
    cout<<"\t\t\t[<1>] Enter Details !\n";
    cout<<"\t\t\t[<2>] Show All Details !\n";
    cout<<"\t\t\tEnter a number : ";
    cin>>a;

if(a==1){
    ofstream myfile("DataBase.txt");
    system("CLS");
    cout<<"Enter your Details !\n\n";
    cout<<"\t\tEnter your name : ";
    getline(cin,name);
    myfile<<"Name : "<<name<<endl;
    cout<<"\t\tEnter your age : ";
    getline(cin,age);
    myfile<<"Age : "<<age<<endl;
    cout<<"\t\tEnter your address : ";
   getline(cin,address);
    myfile<<"Address : \n\n"<<address<<endl;
    myfile.close();
}

else if (a==2)
{
    cout<<"The record is : "<<endl;
    ifstream rfile("DataBase.txt");
    string details;

   while (getline(rfile, details)) {
            cout << details << endl;
        }

         rfile.close();
}
else{
cout<<"Sorry wrong option !";
}
goto start;


   


return 0;
}//@rajendra_chimala

    