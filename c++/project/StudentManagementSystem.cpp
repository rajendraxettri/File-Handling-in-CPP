#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
class studentManagementSystem{
    public:
    string sname,scontactno,srollno,saddress;

    void menu(){
        int option;
        char response;
        system("CLS");
    // SetConsoleTextAttribute(h,11);
        cout<<"\t\t\t\t-------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t------------< STUDENT MANAGEMENT SYSTEM >--------------"<<endl;
        cout<<"\t\t\t\t------------< GHODAGHODI MULTIPLE CAMPUS >-------------"<<endl;
        cout<<"---------------> CHOOSE OPTION 1 TO 6 ! "<<endl;


        cout<<"\t\t\t\t[<1>] INSERT NEW RECORD !"<<endl;
        cout<<"\t\t\t\t[<2>] DELETE RECORD !"<<endl;
        cout<<"\t\t\t\t[<3>] EDIT RECORD !"<<endl;
        cout<<"\t\t\t\t[<4>] SEARCH RECORD !"<<endl;
        cout<<"\t\t\t\t[<5>] DISPLAY RECORD !"<<endl;
        cout<<"\t\t\t\t[<6>] MODIFY RECORD !"<<endl;
        
        cout<<"\t\t\t\t------------> Enter a Option : "<<endl;
        cin>>option;

        switch (option)
        {
        case 1:
            do
            {
                insert();
                cout<<"\n\t\t\tAdd Another Student Record [Y/N] : ";
                cin>>response;
            } while (response == 'Y' || response == 'y');
            
            break;
        
        default:
            break;
        }
    }
    void insert(){
			system("cls");
			fstream file;
			cout<<"\n\t\t\t|------------------------------------------------|"<<endl;
			cout<<"\n\t\t\t|-----------------INSERT RECORD------------------|"<<endl;
			cout<<"\n\t\t\t|------------------------------------------------|"<<endl;

			cout<<"\t\t \t|------------------->Enter Name of Student:";
			cin>>sname;
			cout<<"\t\t\t Enter Contact no of Student:";
			cin>>scontactno;
			cout<<"\t\t\t Enter Roll no of Student:";
			cin>>srollno;
			cout<<"\t\t\t Enter Address  of Student:";
			cin>>saddress;
			file.open("student.txt",ios::out | ios::app);
			file<<"      "<<sname <<"    "<<scontactno<<"     "<<srollno<<"    "<<saddress<<"\n";
			file.close();
		}

};
int main()
{
studentManagementSystem obj1;
obj1.menu();

return 0;
}//@rajendra_chimala;