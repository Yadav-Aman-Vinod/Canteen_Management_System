#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<cmath>
#include<Windows.h>
using namespace std;
class Login;
class Pay;
class Menu;
class Bill;
class Admin;
class signup
  {
      public:
   string aname , bname , e;

    unsigned  long long int d,cname,minnum=1000000000,maxnum=9999999999;
    unsigned  long long int minsap=10000000000,maxsap=99999999999;

    int alphabets,digits,specialchars,i,j,f,g;


    void getdata ()
 {

         cout<<"\nEnter your first name only :   "<<endl;
         cin>>aname;

         cout<<"\nSpecify your branch :"<<endl;
         cin>>bname;

label :
         cout<<"\nEnter your 10 digit contact number :"<<endl;
         cin>>cname;
          if(cname>=maxnum || cname<=minnum)
          {
          cout<<"Enter a proper number";
          goto label;
 }
 aman :
cout<<"\nEnter your sap id 'number' :"<<endl;
         cin>>d;
         if(d>=maxsap || d<=minsap)
          {
          cout<<"Enter a proper sap id";
          goto aman;
 }
         cout<<"Enter your password: "<<endl;
         cin>>e;

       ofstream data("data.txt",ios::app);
       data<<"Your Name   : "<<aname;
       data<<"\t\tYour Branch : "<<bname;
       data<<"\t\tYour Number : "<<cname;
       data.close();



 }



 void show ()
 {

     //cout<<"\n Your name is : "<<a;
     system("cls");
     cout<<"\nYour SAP ID is: "<<d;
     cout<<"\nYour password: "<<e;

       ofstream output("database.csv",ios::app);
     //  output<<"Password"<<"\t"<<"User ID"<<endl;

       //output<<"\n"<<a<<"\t";
       output<<d<<"\t";
       output<<"\t"<<e<<endl;
       output.close();


 }
 };
class Login: public signup

   {

public:
int choice;
string sap1,password1,s,p;
 void mainscreen()
      {

        cout<<"\n"<<setw(100)<<setfill('*')<<" ";
        cout<<"\t\t\t\t\t\t\tLOGIN PAGE";
        cout<<"\n"<<setw(100)<<setfill('*')<<" ";
        cout<<"\n1.REGISTER"<<endl;
        cout<<"\n2.LOGIN"<<endl;
        cout<<"\n3.Exit"<<endl;
        cout<<"\nEnter your choice :";
     }

 int login(int check)
  {

        cout<<"Please enter the following ";
        cout<<"\nEnter your SAP ID (USER ID) "<<endl;
        cin>>sap1;
        cout<<"\nEnter your password"<<endl;
        cin>>password1;
        ifstream input("database.csv",ios::in);
         while(!input.eof())
         {
          while(input>>s>>p)
       {
            if(s==sap1 && p==password1)
            {
            return check=1;
            }
            else
            {
            return check=0;
            }
        }
    }


        input.close();
    }

};

class Menu :virtual public Login
{double A1=55,A2=60,A3=44,A4=75,A5=90,A6=10,B1=28,B2=33,B3=50,B4=50,B5=28,B6=38,B7=40,C1=33,C2=33,C3=33,C4=33,C5=44,C6=45,C7=55,D1=50,D2=60,D3=60,D4=80,D5=90,D6=72,D7=60,D8=72,D9=75,D10=75,E1=75,E2=65,E3=90,E4=82,E5=65,E6=82,F1=80,F2=80,F3=80,F4=80,F5=80,F6=100,G1=65,G2=70,H1=12,H2=17,H3=20,H4=28,H5=40,H6=80,I1=45,J1=28,J2=38,J3=33,J4=28,J5=28,J6=28,K1=50,K2=50,K3=50,K4=55,K5=55,K6=80,K7=75,L1=12,L2=15,L3=22;
int extra=0;
int achoice;
char choice;
public:
char answer;
    double totalprice=0;
    Menu()
    {
        totalprice=0;
    }
void menu()
{
 system("cls");

cout << "\n                   Welcome to The NMIMS CANTEEN! What would you like to eat?\n";
cout<<setw(100)<<setfill('*')<<" ";
cout << "\n\tMenu "<<"\t"<<"\t"<< endl;
cout << "A: Pav bhaji/Pulao      : " <<"\t"<< endl;
cout << "B: South Indian         : " <<"\t"<< endl;
cout << "C: Mumbai chaat         : " <<"\t"<< endl;
cout << "D: Rice/Noodles         : " <<"\t"<< endl;
cout << "E: Chinese Dishes       : " <<"\t"<< endl;
cout << "F: Paneer Dishes        : " <<"\t"<< endl;
cout << "G: Lunch/Dinner         : " <<"\t"<< endl;
cout << "H: Bread Basket         : " <<"\t"<< endl;
cout << "I: Soups                : " <<"\t"<< endl;
cout << "J: Snacks               : " <<"\t"<< endl;
cout << "K: Fresh juices/Shakes  : " <<"\t"<< endl;
cout << "L: Tea/coffee           : " <<"\t"<< endl;



cout << "\n Would you like to order ? Enter 'Y'\n" << endl;
cin >> answer;
if (answer == 'Y' || answer == 'y')

{

cout << "Your choice?" << endl;
cin >> choice;


if (choice == 'A' || choice == 'a')
{
system("cls");
cout << "\nA: Pav bhaji/Pulao " <<"     :   price"<< endl<<endl;
cout << "1: Pav bhaji           : " << A1 <<"\t"<< endl;
cout << "2: Jain Pav bhaji      : " << A2 <<"\t"<< endl;
cout << "3: Masala pav          : " << A3 <<"\t"<< endl;
cout << "4: Tawa Pulao          : " << A4 <<"\t"<< endl;
cout << "5: Paneer Tawa Pulao   : " << A5 <<"\t"<< endl;
cout << "6: Extra pav           : " << A6 <<"\t"<< endl;
cout << "7: Exit                 " <<"\t"<< endl;

cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1: Pav bhaji           : " << A1 <<"\t"<< endl;
    totalprice = totalprice + A1;
}

else if (achoice == 2)
{
cout << "2: Jain Pav bhaji           : " << A2 <<"\t"<< endl;
    totalprice = totalprice + A2;
}

else if (achoice == 3)
{
cout << "3: Masala pav           : " << A3 <<"\t"<< endl;
    totalprice = totalprice + A3;
}

else if (achoice == 4)
{
cout << "4: Tawa pulao           : " << A4 <<"\t"<< endl;
    totalprice = totalprice + A4;
}

else if (achoice == 5)
{
cout << "5: Paneer Tawa pulao           : " << A5 <<"\t"<< endl;
    totalprice = totalprice + A5;
}

else if (achoice == 6)
{

cout << "6: Extra pav           : " << A6 <<"\t"<< endl;
cout << "Enter the number of extra pav you want : "<<endl;
cin>>extra;
    totalprice = totalprice + (A6*extra);
}
else if (achoice == 7)
{
cout << "7: Exit            "<<"\t"<< endl;
    totalprice = totalprice;

}
else
    cout<<"Enter the correct choice";
}


 else if (choice == 'B' || choice == 'b')
{
system("cls");
cout << "\nB: South Indian " <<"       :   price"<< endl<<endl;
cout << "1: Sada Dosa           : " << B1 <<"\t"<< endl;
cout << "2: Masala Dosa         : " << B2 <<"\t"<< endl;
cout << "3: Spring Dosa         : " << B3 <<"\t"<< endl;
cout << "4: Mysore Dosa         : " << B4 <<"\t"<< endl;
cout << "5: Plain Uttappam      : " << B5 <<"\t"<< endl;
cout << "6: Tomato Uttappam     : " << B6 <<"\t"<< endl;
cout << "7: Mix Uttappam        : " << B7 <<"\t"<< endl;
cout << "8: Exit                 " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1: Sada Dosa           : " << B1 <<"\t"<< endl;
    totalprice = totalprice + B1;
}

else if (achoice == 2)
{
cout << "2: Masala Dosa         : " << B2 <<"\t"<< endl;
    totalprice = totalprice + B2;
}

else if (achoice == 3)
{
cout << "3: Spring Dosa         : " << B3 <<"\t"<< endl;
    totalprice = totalprice + B3;
}

else if (achoice == 4)
{
cout << "4: Mysore Dosa         : " << B4 <<"\t"<< endl;
    totalprice = totalprice + B4;
}

else if (achoice == 5)
{
cout << "5: Plain Uttappam      : " << B5 <<"\t"<< endl;
    totalprice = totalprice + B5;
}

else if (achoice == 6)
{
cout << "6: Tomato Uttappam     : " << B6 <<"\t"<< endl;
    totalprice = totalprice + B6;
}
else if (achoice == 7)
{
cout << "7: Mix Uttappam     : " << B7 <<"\t"<< endl;
    totalprice = totalprice + B7;
}

else if (achoice == 8)
{
cout << "8: Exit            "<<"\t"<< endl;
    totalprice = totalprice;

}
else
    cout<<"Enter the correct choice";
}

 else if (choice == 'C' || choice == 'c')
{
system("cls");
cout << "\nC: Mumbai Chaat " <<"       :   price"<< endl<<endl;
cout << "1: Pani Puri         : " << C1 <<"\t"<< endl;
cout << "2: Bhel Puri         : " << C2 <<"\t"<< endl;
cout << "3: Sev Puri          : " << C3 <<"\t"<< endl;
cout << "4: Dahi Chaat        : " << C4 <<"\t"<< endl;
cout << "5: Dahi Puri         : " << C5 <<"\t"<< endl;
cout << "6: Ragda Chaat       : " << C6 <<"\t"<< endl;
cout << "7: Chinese Bhel      : " << C7 <<"\t"<< endl;
cout << "8: Exit               " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1: Pani Puri           : " << C1 <<"\t"<< endl;
    totalprice = totalprice + C1;
}

else if (achoice == 2)
{
cout << "2: Bhel Puri           : " << C2 <<"\t"<< endl;
    totalprice = totalprice + C2;
}

else if (achoice == 3)
{
cout << "3: Sev Puri            : " << C3 <<"\t"<< endl;
    totalprice = totalprice + C3;
}

else if (achoice == 4)
{
cout << "4: Dahi Chaat          : " << C4 <<"\t"<< endl;
    totalprice = totalprice + C4;
}

else if (achoice == 5)
{
cout << "5: Dahi Puri           : " << C5 <<"\t"<< endl;
    totalprice = totalprice + C5;
}

else if (achoice == 6)
{
cout << "6: Ragda Chaat         : " << C6 <<"\t"<< endl;
    totalprice = totalprice + C6;
}
else if (achoice == 7)
{
cout << "7: Chinese Bhel        : " << C7 <<"\t"<< endl;
    totalprice = totalprice + C7;
}
else if (achoice == 8)
{
cout << "8: Exit           : "<<"\t"<< endl;
    totalprice = totalprice;

}
else
    cout<<"Enter the correct choice";
}

else if (choice == 'D' || choice == 'd')
{
system("cls");
cout << "\nD: Rice/Noodles " <<"       :   price"<< endl<<endl;
cout << "1 : Steam  Rice              : " << D1 <<"\t"<< endl;
cout << "2 : Jeera Rice               : " << D2 <<"\t"<< endl;
cout << "3 : Veg Fried Rice           : " << D3 <<"\t"<< endl;
cout << "4 : Veg Manchurian Rice      : " << D4 <<"\t"<< endl;
cout << "5 : Tripe Schezwan Rice      : " << D5 <<"\t"<< endl;
cout << "6 : HongKong Rice            : " << D6 <<"\t"<< endl;
cout << "7 : Veg Hakka Noodles        : " << D7 <<"\t"<< endl;
cout << "8 : Veg Schezwan Noodles     : " << D8 <<"\t"<< endl;
cout << "9 : American Chopsuey        : " << D9 <<"\t"<< endl;
cout << "10: Chinese Chopsuey         : " << D10 <<"\t"<< endl;
cout << "11: Exit               " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1 : Steam  Rice           : " << D1 <<"\t"<< endl;
    totalprice = totalprice + D1;
}

else if (achoice == 2)
{
cout << "2 : Jeera Rice            : " << D2 <<"\t"<< endl;
    totalprice = totalprice + D2;
}

else if (achoice == 3)
{
cout << "3 : Veg Fried Rice        : " << D3 <<"\t"<< endl;
    totalprice = totalprice + D3;
}

else if (achoice == 4)
{
cout << "4 : Veg Manchurian Rice   : " << D4 <<"\t"<< endl;
    totalprice = totalprice + D4;
}

else if (achoice == 5)
{
cout << "5 : Tripe Schezwan Rice   : " << D5 <<"\t"<< endl;
    totalprice = totalprice + D5;
}

else if (achoice == 6)
{
cout << "6 : HongKong Rice         : " << D6 <<"\t"<< endl;
    totalprice = totalprice + D6;
}
else if (achoice == 7)
{
cout << "7 : Veg Hakka Noodles     : " << D7 <<"\t"<< endl;
    totalprice = totalprice + D7;
}
else if (achoice == 8)
{
cout << "8 : Veg Schezwan Noodles  : " << D8 <<"\t"<< endl;
    totalprice = totalprice + D8;
}
else if (achoice == 9)
{
cout << "9 : American Chopsuey     : " << D9 <<"\t"<< endl;
    totalprice = totalprice + D9;
}
else if (achoice == 10)
{
cout << "10: Chinese  Chopsuey     : " << D10 <<"\t"<< endl;
    totalprice = totalprice + D10;
}
else if (achoice == 11)
{
cout << "11: Exit                 "<<"\t"<< endl;
    totalprice = totalprice;

}
else
    cout<<"Enter the correct choice";
}

 else if (choice == 'E' || choice == 'e')
{
system("cls");
cout << "\nE: Chinese Dishes " <<"       :   price"<< endl<<endl;
cout << "1 : Gobi Manchurian          : " << E1 <<"\t"<< endl;
cout << "2 : Veg crispy               : " << E2 <<"\t"<< endl;
cout << "3 : Paneer crispy            : " << E3 <<"\t"<< endl;
cout << "4 : Paneer Chilly            : " << E4 <<"\t"<< endl;
cout << "5 : Potato Chilly            : " << E5 <<"\t"<< endl;
cout << "6 : Paneer Chilly gravy      : " << E6 <<"\t"<< endl;
cout << "7: Exit               " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1 : Gobi Manchurian       : " << E1 <<"\t"<< endl;
    totalprice = totalprice + E1;
}

else if (achoice == 2)
{
cout << "2 : Veg crispy            : " << E2 <<"\t"<< endl;
    totalprice = totalprice + E2;
}

else if (achoice == 3)
{
cout << "3 : Paneer crispy         : " << E3 <<"\t"<< endl;
    totalprice = totalprice + E3;
}

else if (achoice == 4)
{
cout << "4 : Paneer Chilly         : " << E4 <<"\t"<< endl;
    totalprice = totalprice + E4;
}

else if (achoice == 5)
{
cout << "5 : Potato Chilly         : " << E5 <<"\t"<< endl;
    totalprice = totalprice + E5;
}

else if (achoice == 6)
{
cout << "6 : Paneer Chilly gravy   : " << E6 <<"\t"<< endl;
    totalprice = totalprice + E6;
}

else if (achoice == 7)
{
cout << "7: Exit                 "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}

 else if (choice == 'F' || choice == 'f')
{
system("cls");
cout << "\nF: Paneer Dishes " <<"           :   price"<< endl<<endl;
cout << "1 : Paneer Mutter           : " << F1 <<"\t"<< endl;
cout << "2 : Paneer Handi            : " << F2 <<"\t"<< endl;
cout << "3 : Paneer Butter Masala    : " << F3 <<"\t"<< endl;
cout << "4 : Paneer Kadhai           : " << F4 <<"\t"<< endl;
cout << "5 : Paneer Tadka            : " << F5 <<"\t"<< endl;
cout << "6 : Tawa Paneer             : " << F6 <<"\t"<< endl;
cout << "7: Exit               " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1 : Paneer Mutter       : " << F1 <<"\t"<< endl;
    totalprice = totalprice + F1;
}

else if (achoice == 2)
{
cout << "2 : Paneer Handi        : " << F2 <<"\t"<< endl;
    totalprice = totalprice + F2;
}

else if (achoice == 3)
{
cout << "3 : Paneer Butter Masala   : " << F3 <<"\t"<< endl;
    totalprice = totalprice + F3;
}

else if (achoice == 4)
{
cout << "4 : Paneer Kadhai         : " << F4 <<"\t"<< endl;
    totalprice = totalprice + F4;
}

else if (achoice == 5)
{
cout << "5 : Paneer Tadka         : " << F5 <<"\t"<< endl;
    totalprice = totalprice + F5;
}

else if (achoice == 6)
{
cout << "6 : Tawa Paneer          : " << F6 <<"\t"<< endl;
    totalprice = totalprice + F6;
}

else if (achoice == 7)
{
cout << "7: Exit                 "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}

 else if (choice == 'G' || choice == 'g')
{
system("cls");
cout << "\nG: Lunch\Dinner " <<"           :   price"<< endl<<endl;
cout << "1 : Lunch             : " << G1 <<"\t"<< endl;
cout << "2 : Dinner            : " << G2 <<"\t"<< endl;
cout << "3: Exit               " << "\t"<< endl;
cout << "Discription : Rice, Dal, 4 roti, 2 types of vegetable, Papad and raita will be provided for each plate. " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1 : Lunch         : " << G1 <<"\t"<< endl;
    totalprice = totalprice + G1;
}

else if (achoice == 2)
{
cout << "2 : Dinner        : " << G2 <<"\t"<< endl;
    totalprice = totalprice + G2;
}


else if (achoice == 3)
{
cout << "3: Exit                 "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}

 else if (choice == 'H' || choice == 'h')
{
system("cls");
cout << "\nH: Bread basket " <<"           :   price"<< endl<<endl;
cout << "1 : Roti             : " << H1 <<"\t"<< endl;
cout << "2 : Butter Roti      : " << H2 <<"\t"<< endl;
cout << "3 : Naan             : " << H3 <<"\t"<< endl;
cout << "4 : Butter Naan      : " << H4 <<"\t"<< endl;
cout << "5 : Garlic Naan      : " << H5 <<"\t"<< endl;
cout << "6 : Cheese Naan      : " << H6 <<"\t"<< endl;
cout << "7: Exit               " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1 : Roti               : " << H1 <<"\t"<< endl;
cout << "Enter the quantity : "<<endl;
cin>>extra;
    totalprice = totalprice + (H1*extra);
}

else if (achoice == 2)
{
cout << "2 : Butter Roti                : " << H2 <<"\t"<< endl;
cout << "Enter the quantity : "<<endl;
cin>>extra;
    totalprice = totalprice + (H2*extra);
}

else if (achoice == 3)
{
cout << "3 : Naan                                      : " << H3 <<"\t"<< endl;
cout << "Enter the quantity : "<<endl;
cin>>extra;
    totalprice = totalprice + (H3*extra);
}

else if (achoice == 4)
{
cout << "4 : Butter Naan              : " << H4 <<"\t"<< endl;
cout << "Enter the quantity : "<<endl;
cin>>extra;
    totalprice = totalprice + (H4*extra);
}

else if (achoice == 5)
{
cout << "5 : Garlic Naan              : " << H5 <<"\t"<< endl;
cout << "Enter the quantity : "<<endl;
cin>>extra;
    totalprice = totalprice +(H5*extra);
}

else if (achoice == 6)
{
cout << "6 : Cheese Naan        : " << H6 <<"\t"<< endl;
cout << "Enter the quantity : "<<endl;
cin>>extra;
    totalprice = totalprice + (H6*extra);
}

else if (achoice == 7)
{
cout << "7: Exit                 "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}


 else if (choice == 'I' || choice == 'i')
{
system("cls");
cout << "\nI: Soup " <<"           :   price"<< endl<<endl;
cout << "1 : Manchow Soup          : " << I1 <<"\t"<< endl;
cout << "2 : Tomato Soup           : " << I1 <<"\t"<< endl;
cout << "3 : Clear Soup            : " << I1 <<"\t"<< endl;
cout << "4: Exit               " << "\t"<< endl;


cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1 : Manchow Soup         : " << I1 <<"\t"<< endl;
    totalprice = totalprice + I1;
}

else if (achoice == 2)
{
cout << "2 : Tomato Soup        : " << I1 <<"\t"<< endl;
    totalprice = totalprice + I1;
}
else if (achoice == 3)
{
cout << "3 : Clear Soup        : " << I1 <<"\t"<< endl;
    totalprice = totalprice + I1;
}

else if (achoice == 4)
{
cout << "4: Exit                 "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}

else if (choice == 'J' || choice == 'j')
{
system("cls");
cout << "\nJ: Snacks " <<"           :   price"<< endl<<endl;
cout << "1 : Idli Sambar            : " << J1 <<"\t"<< endl;
cout << "2 : Medu Vada Sambar       : " << J2 <<"\t"<< endl;
cout << "3 : Idli Vada Sambar       : " << J3 <<"\t"<< endl;
cout << "4 : Potato Vada            : " << J4 <<"\t"<< endl;
cout << "5 : Poha                   : " << J5 <<"\t"<< endl;
cout << "6 : Veg Cutlet             : " << J6 <<"\t"<< endl;
cout << "7: Exit               " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1 : Idli Sambar        : " << J1 <<"\t"<< endl;
    totalprice = totalprice + J1;
}

else if (achoice == 2)
{
cout << "2 : Medu Vada Sambar              : " << J2 <<"\t"<< endl;
    totalprice = totalprice + J2;
}

else if (achoice == 3)
{
cout << "3 : Idli Vada Sambar           : " << J3 <<"\t"<< endl;
    totalprice = totalprice + J3;
}

else if (achoice == 4)
{
cout << "4 : Potato Vada         : " << J4 <<"\t"<< endl;
    totalprice = totalprice + J4;
}

else if (achoice == 5)
{
cout << "5 : Poha                      : " << J5 <<"\t"<< endl;
    totalprice = totalprice + J5;
}

else if (achoice == 6)
{
cout << "6 : Veg Cutlet              : " << J6 <<"\t"<< endl;
    totalprice = totalprice + J6;
}

else if (achoice == 7)
{
cout << "7: Exit                 "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}


else if (choice == 'K' || choice == 'k')
{
system("cls");
cout << "\nK: Fresh Juices/Shakes   " <<"       :   price"<< endl<<endl;
cout << "1: Orange Juice            : " << K1 <<"\t"<< endl;
cout << "2: Mosambi Juice           : " << K2 <<"\t"<< endl;
cout << "3: Sugar Cane Juice        : " << K3 <<"\t"<< endl;
cout << "4: Mara Mari               : " << K4 <<"\t"<< endl;
cout << "5: Rose Milk Shake         : " << K5 <<"\t"<< endl;
cout << "6: Choco Coffee Shake      : " << K6 <<"\t"<< endl;
cout << "7: Kitkat shake            : " << K7 <<"\t"<< endl;
cout << "8: Exit                 " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1: Orange Juice             : " << K1 <<"\t"<< endl;
    totalprice = totalprice + K1;
}

else if (achoice == 2)
{
cout << "2: Mosambi Juice         : " << K2 <<"\t"<< endl;
    totalprice = totalprice + K2;
}

else if (achoice == 3)
{
cout << "3: Sugar Cane Juice        : " << K3 <<"\t"<< endl;
    totalprice = totalprice + K3;
}

else if (achoice == 4)
{
cout << "4: Mara Mari                  : " << K4 <<"\t"<< endl;
    totalprice = totalprice + K4;
}

else if (achoice == 5)
{
cout << "5: Rose Milk Shake      : " << K5 <<"\t"<< endl;
    totalprice = totalprice + K5;
}

else if (achoice == 6)
{
cout << "6: Choco Coffee Shake       : " << K6 <<"\t"<< endl;
    totalprice = totalprice + K6;
}
else if (achoice == 7)
{

cout << "7: Kitkat Shake               : " << K7 <<"\t"<< endl;
    totalprice = totalprice + K7;
}

else if (achoice == 8)
{
cout << "8: Exit            "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}

else if (choice == 'L' || choice == 'l')
{
system("cls");
cout << "\nL: Tea/Coffee   " <<"       :   price"<< endl<<endl;
cout << "1: Tea                : " << L1 <<"\t"<< endl;
cout << "2: Nescafe Coffee     : " << L2 <<"\t"<< endl;
cout << "3: Milk               : " << L3 <<"\t"<< endl;
cout << "4: Exit                 " << "\t"<< endl;
cout << "\n";

cout << "\nWhat sub-option would you like? "<<endl;
cin>>achoice;

if (achoice == 1)
{
cout << "1: Tea             : " << L1 <<"\t"<< endl;
    totalprice = totalprice + L1;
}

else if (achoice == 2)
{
cout << "2: Nescafe Coffee         : " << L2 <<"\t"<< endl;
    totalprice = totalprice + L2;
}

else if (achoice == 3)
{
cout << "3: Milk        : " << L3 <<"\t"<< endl;
    totalprice = totalprice + L3;
}

else if (achoice == 4)
{
cout << "4: Exit            "<<"\t"<< endl;
    totalprice = totalprice;

}
else
cout<<"Enter the correct choice";
}
else
{
cout<<"\nPlease enter the right choice "<<endl;
}

}

else
{
cout<<"\n\nPlease enter the right answer "<<endl;
}

if(choice =='A' || choice =='a' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Pav bhaji           : "<< A1 <<"\n"<<endl;
bill.close();
}

else if(choice =='A' || choice =='a' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Jain Pav bhaji      : " << A2<<"\n"<<endl;
bill.close();
}

else if(choice =='A' || choice =='a' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Masala pav          : " << A3<<"\n"<<endl;
bill.close();
}

else if(choice =='A' || choice =='a' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Tawa Pulao          : " << A4<<"\n"<<endl;
bill.close();
}

else if(choice =='A' || choice =='a' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Tawa Pulao   : " << A5<<"\n"<<endl;
bill.close();
}

else if(choice =='A' || choice =='a' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Extra pav (each)    : " << A6<<"\n"<<endl;
bill.close();
}



else if(choice =='B' || choice =='b' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Sada Dosa           : "<< B1 <<"\n"<<endl;
bill.close();
}

else if(choice =='B' || choice =='b' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Masala Dosa         : " << B2<<"\n"<<endl;
bill.close();
}

else if(choice =='B' || choice =='b' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Spring Dosa         : " << B3<<"\n"<<endl;
bill.close();
}

else if(choice =='B' || choice =='b' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Mysore Dosa         : " << B4<<"\n"<<endl;
bill.close();
}

else if(choice =='B' || choice =='b' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Plain Uttappam      : " << B5<<"\n"<<endl;
bill.close();
}

else if(choice =='B' || choice =='b' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Tomato Uttappam     : " << B6<<"\n"<<endl;
bill.close();
}

else if(choice =='B' || choice =='b' && achoice == 7)
{
ofstream bill("bill.txt",ios::app);
bill<<"Mix Uttappam        : " << B7<<"\n"<<endl;
bill.close();
}



else if(choice =='C' || choice =='c' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Pani Puri           : "<< C1 <<"\n"<<endl;
bill.close();
}

else if(choice =='C' || choice =='c' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Bhel Puri           : " << C2<<"\n"<<endl;
bill.close();
}

else if(choice =='C' || choice =='c' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Sev Puri            : " << C3<<"\n"<<endl;
bill.close();
}

else if(choice =='C' || choice =='c' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Dahi Chaat          : " << C4<<"\n"<<endl;
bill.close();
}

else if(choice =='C' || choice =='c' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Dahi Puri           : " << C5<<"\n"<<endl;
bill.close();
}

else if(choice =='C' || choice =='c' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Ragad Chaat         : " << C6<<"\n"<<endl;
bill.close();
}

else if(choice =='C' || choice =='c' && achoice == 7)
{
ofstream bill("bill.txt",ios::app);
bill<<"Chinese Bhel        : " << C7<<"\n"<<endl;
bill.close();
}



else if(choice =='D' || choice =='d' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Steam Rice          : "<< D1 <<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Jeera Rice          : " << D2<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Veg Fried Rice      : " << D3<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Veg Manchurian Rice : " << D4<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Triple Schezwan Rice : " << D5<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"HongKong Rice        : " << D6<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 7)
{
ofstream bill("bill.txt",ios::app);
bill<<"Veg Hakka Noodles    : " << D7<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 8)
{
ofstream bill("bill.txt",ios::app);
bill<<"Veg Schezwan Noodles : " << D8<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 9)
{
ofstream bill("bill.txt",ios::app);
bill<<"American Chopsuey    : " << D9<<"\n"<<endl;
bill.close();
}

else if(choice =='D' || choice =='d' && achoice == 10)
{
ofstream bill("bill.txt",ios::app);
bill<<"Chinese Chopsuey     : " << D10<<"\n"<<endl;
bill.close();
}



else if(choice =='E' || choice =='e' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Gobi Manchurian     : "<< E1 <<"\n"<<endl;
bill.close();
}

else if(choice =='E' || choice =='e' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Veg crispy          : " << E2<<"\n"<<endl;
bill.close();
}

else if(choice =='E' || choice =='e' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer crispy       : " << E3<<"\n"<<endl;
bill.close();
}

else if(choice =='E' || choice =='e' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Chily        : " << E4<<"\n"<<endl;
bill.close();
}

else if(choice =='E' || choice =='e' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Potato Chily        : " << E5<<"\n"<<endl;
bill.close();
}

else if(choice =='E' || choice =='e' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Chily gravy  : " << E6<<"\n"<<endl;
bill.close();
}



else if(choice =='F' || choice =='f' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Mutter       : "<< F1 <<"\n"<<endl;
bill.close();
}

else if(choice =='F' || choice =='f' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Handi        : " << F2<<"\n"<<endl;
bill.close();
}

else if(choice =='F' || choice =='f' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Butter mas   : " << F3<<"\n"<<endl;
bill.close();
}

else if(choice =='F' || choice =='f' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Kadhai       : " << F4<<"\n"<<endl;
bill.close();
}

else if(choice =='F' || choice =='f' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Paneer Tadka        : " << F5<<"\n"<<endl;
bill.close();
}

else if(choice =='F' || choice =='f' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Tawa Paneer         : " << F6<<"\n"<<endl;
bill.close();
}



else if(choice =='G' || choice =='g' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Lunch               : "<< G1 <<"\n"<<endl;
bill.close();
}

else if(choice =='G' || choice =='g' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Dinner              : " << G2<<"\n"<<endl;
bill.close();
}



else if(choice =='H' || choice =='h' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Roti (each)         : "<< H1 <<"\n"<<endl;
bill.close();
}

else if(choice =='H' || choice =='h' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Butter Roti (each)  : " << H2<<"\n"<<endl;
bill.close();
}

else if(choice =='H' || choice =='h' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Naan                : " << H3<<"\n"<<endl;
bill.close();
}

else if(choice =='H' || choice =='h' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Butter Naan         : " << H4<<"\n"<<endl;
bill.close();
}

else if(choice =='H' || choice =='h' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Garlic Naan        : " << H5<<"\n"<<endl;
bill.close();
}

else if(choice =='H' || choice =='h' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Cheese Naan        : " << H6<<"\n"<<endl;
bill.close();
}



else if(choice =='I' || choice =='i' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Manchow Soup        : "<< I1 <<"\n"<<endl;
bill.close();
}

else if(choice =='I' || choice =='i' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Tomato Soup        : " << I1<<"\n"<<endl;
bill.close();
}

else if(choice =='I' || choice =='i' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Clear Soup         : " << I1<<"\n"<<endl;
bill.close();
}



else if(choice =='J' || choice =='j' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Idli Sambar         : "<< J1 <<"\n"<<endl;
bill.close();
}

else if(choice =='J' || choice =='j' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Medu Vada Sambar    : " << J2<<"\n"<<endl;
bill.close();
}

else if(choice =='J' || choice =='j' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Idli Vada Sambar    : " << J3<<"\n"<<endl;
bill.close();
}

else if(choice =='J' || choice =='j' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Potato Vada         : " << J4<<"\n"<<endl;
bill.close();
}

else if(choice =='J' || choice =='j' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Poha                : " << J5<<"\n"<<endl;
bill.close();
}

else if(choice =='J' || choice =='j' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Veg Cutlet          : " << J6<<"\n"<<endl;
bill.close();
}




else if(choice =='K' || choice =='k' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Orange Juice        : "<< K1 <<"\n"<<endl;
bill.close();
}

else if(choice =='K' || choice =='k' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Mosambi Juice       : " << K2<<"\n"<<endl;
bill.close();
}

else if(choice =='K' || choice =='k' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Sugar Cane Juice   : " << K3<<"\n"<<endl;
bill.close();
}

else if(choice =='K' || choice =='k' && achoice == 4)
{
ofstream bill("bill.txt",ios::app);
bill<<"Mara Mari          : " << K4<<"\n"<<endl;
bill.close();
}

else if(choice =='K' || choice =='k' && achoice == 5)
{
ofstream bill("bill.txt",ios::app);
bill<<"Rose Milk Shake    : " << K5<<"\n"<<endl;
bill.close();
}

else if(choice =='K' || choice =='k' && achoice == 6)
{
ofstream bill("bill.txt",ios::app);
bill<<"Choco Coffee Shake : " << K6<<"\n"<<endl;
bill.close();
}

else if(choice =='K' || choice =='k' && achoice == 7)
{
ofstream bill("bill.txt",ios::app);
bill<<"KitKat Shake       : " << K7<<"\n"<<endl;
bill.close();
}



else if(choice =='L' || choice =='l' && achoice == 1)
{
ofstream bill("bill.txt",ios::app);
bill<<"Tea                 : "<< L1 <<"\n"<<endl;
bill.close();
}

else if(choice =='L' || choice =='l' && achoice == 2)
{
ofstream bill("bill.txt",ios::app);
bill<<"Nescafe Coffee      : " << L2<<"\n"<<endl;
bill.close();
}

else if(choice =='L' || choice =='l' && achoice == 3)
{
ofstream bill("bill.txt",ios::app);
bill<<"Milk                : " << L3<<"\n"<<endl;
bill.close();
}








}



};
class Pay: virtual public Login,public Menu
{

 public:
     int choose2;
     int num1;
     float amt,a;
     double balance;
      Pay()
           {
               balance=0.0;
           }
     void stmainscreen ()
     {

        cout<<"\n"<<setw(100)<<setfill('*')<<" ";
        cout<<"\t\t\t\t\t\t\tSTUDENT PAGE";
        cout<<"\n"<<setw(100)<<setfill('*')<<" ";
        cout<<"\n1.VIEW AND ADD YOUR BALANCE"<<endl;
        cout<<"\n2.ORDER"<<endl;
        cout<<"\n3.USER_INFO"<<endl;
        cout<<"\n4.Exit"<<endl;
        cout<<"\nEnter your choice :";

     }

            void Deposit ()
            {

                cout<<"\nEnter amount to deposit: ";
                cin>>amt;
                balance=balance+amt;
                if(balance>=10000)
                {
                    cout<<"\nYour balance exceeds 10000INR!!";
                    balance-=amt;
                }
                    else
                {
                    cout<<"\nNew balance: "<<balance;

                }
            }


            void Withdraw ()
            {
                               cout<<"\n The total amount of your order is : "<<totalprice<<endl;
                                balance=balance-totalprice;
                if( balance<0)
                {
                    cout<<"Balance in the account should be greater than 0"<<endl;
                    cout<<"Redirecting to student page "<<endl;
                    balance=balance+totalprice;
                }

            }
            void Display()
            {

                cout<<"\nYour current balance : "<<balance<<endl;
                cout<<"\nThank you for the purchase. \n"<<endl;

            }


};

    int main ()
    {
    system("color 0a");
    char boi;
        int choice;
        int b,c;
    double e;
    cout<<"                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"                     @                                    @"<<endl;
    cout<<"                     @                                    @"<<endl;
    cout<<"                     @              Welcome               @"<<endl;
    cout<<"                     @                                    @"<<endl;
    cout<<"                     @              to  the               @"<<endl;
    cout<<"                     @                                    @"<<endl;
    cout<<"                     @               NMIMS                @"<<endl;
    cout<<"                     @                                    @"<<endl;
    cout<<"                     @              Canteen               @"<<endl;
    cout<<"                     @                                    @"<<endl;
    cout<<"                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"                     Press any key to continue : ";
    cin.get(boi);
    system("cls");
    {
        Pay obj;
        obj.mainscreen();
        cin >> choice;
        switch (choice)
        {
        case 1:              //register
            {
            unsigned int f,g,f1=2002,i=0;
            system("cls");
       cout<<"PLEASE ENTER YOUR FOLLOWING DETAILS";
       obj.getdata();


        cout<<"\nAn OTP is sent to you for verification ";
        cout<<"\nEnter :";

        cin>>f;
        while(i<=2)
        {
            if(f==f1)
            {
                cout<<"\nYour account has been created: "<<endl;
                cout<<"\nLoading .....";
                Sleep(1000);
                cout<<"..";
                Sleep(2000);
                cout<<"..."<<endl;
                Sleep(500);
                obj.show();
                cout<<"\nThank you"<<endl<<endl;
                Sleep(3000);
                system("cls");
            }
          else
            {
                 cout<<"Try Again";
                 cout<<"\nENTER OTP ONCE AGAIN: ";
                 cin>>f;

            }
            i++;

                 cin.get();
                 main();
                 obj.mainscreen();

          break; }}
        case 2 :                                      //login
            {
                int c2,c3,choose1;
                system("cls");
                cout<<"Enter your details accordingly"<<endl;
                c3=obj.login(c2);
                if(c3==1)
        {
                cout<<"\nThanks for logging in\n";
                system ("cls");
               obj.stmainscreen();


               int k1=1;
               while(k1<=1)
               {
               cin>>choose1;
               switch (choose1)
               {
               case 1:
                {
                char boii;
                    system("cls");
                    cout<<"\n"<<setw(100)<<setfill('*')<<" ";
                    cout<<"\n\t\tWelcome to the payment section site  "<<endl;
                    cout<<"\n"<<setw(100)<<setfill('*')<<" "<<endl;
                    cout<<"\nPress '0' if you want to check the balance..."<<endl;
                    obj.Deposit();
                    obj.Display();

                    cout<<"\nEnter any alphabet and then press 'enter' to continue...";
                    cin>>boii;
                    {
                     system("cls");
                     obj.stmainscreen();
                    }
                    break;
                }
               case 2 :
                {
                int K=1;
                char j;
                while(K==1)
                {
                    obj.menu();
                    end :
                    cout << "\nAre there any additional items you like? Y or N\n" << endl;
                    cin >> j;

                    if(j == 'N' || j=='n')
                    {
                    K=0;
                    cout << "The total price is : "<<obj.totalprice<<endl;
                    cout << "Your balance is    : "<<obj.balance<<endl;
                     char meo;
                        if(obj.totalprice==0)
                        {
                           cout << "\nPlease select the food : \n"<<endl;
                           cout<<"\nEnter any alphabet and then press 'enter' for menu page...";
                           cin>>meo;
                           //system("cls");
                           obj.menu();


                        }
                    else
                     {  char ymoney , noob;
                     moremoney :
 cout<<"\nPress 'Y' to add more money or press any key and enter to continue\n"<<endl;
                         cin>>ymoney;

                         if(ymoney == 'Y'|| ymoney == 'y')
                         {
                          obj.Deposit();
                            obj.Display();
                            cout<<"\nEnter any alphabet and then press 'enter' to continue...\n\n\n";
                            cin>>noob;
                            goto mortal;
}
else
{
if(obj.balance == 0 && obj.balance < obj.totalprice)
{
cout<<"\n\nYour account has less money\n";
goto moremoney;
}

  mortal :
char asd;
cout<<"Enter any key to proceed for billing ";
cin>>asd;
system("cls");
cout<<"\n"<<setw(100)<<setfill('*')<<" ";
cout<<"\n\t\tWelcome to the billing section site:  "<<endl;
cout<<"\n"<<setw(100)<<setfill('*')<<" "<<endl<<endl;
cout<<"  \n    Items           :  Price    \n"<<endl;

  {
    string getcontent;
    ifstream openfile ("bill.txt");
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            getline(openfile, getcontent);
            cout << getcontent << endl;
        }
    }

openfile.close();
}
remove("bill.txt");
              cout<<"\nTotal price = "<<obj.totalprice;

                         cout<<"\nPRESS 1 TO CONFIRM THE ORDER "<<endl;
                           cin>>c;
                          if(c==1)


            {
            char boiii;
             cout<<"\nYour order is now processing: "<<endl;
             cout<<"Loading";
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<".";
             Sleep(500);
             cout<<"."<<endl;
             Sleep(500);

             if(obj.balance < obj.totalprice)
             {
              obj.Withdraw();
              Sleep(5000);
              system("cls");
              obj.stmainscreen();
             }
             else
{
           if(obj.totalprice>=200)
           {
               int count1;
               count1=0;
               count1++;
               cout<<"\nYou have earned "<<count1<<"stars"<<endl;

           }
              obj.Withdraw();

             cout<<"\n";
             obj.Display();

             obj.totalprice = 0;
             cout<<"\n";
             cout<<"\nEnter any alphabet and then press 'enter' for student page...";
             cin>>boiii;
              system("cls");
             obj.stmainscreen();
             cin.get();

}

            }}}}

       else{
            cout<<"ERROR!!WRONG INPUT ";
           
           }
                }
          break;
}



case 3:
              {
              system("cls");
                  char y[100],hola;
                  ifstream tdata("data.txt",ios::in);
                  tdata.getline(y,100);
                  cout<<" "<<endl;
                  cout<<"Details : \n "<<endl;
                  cout<<y<<endl;
                  tdata.close();
                  cout<<"\nEnter any alphabet and then press 'enter' for student page...";
                  cin>>hola;
                  system("cls");
                  obj.stmainscreen();
                  break;
              }

           case 4:
              {
                  cout<<"Thankyou, you are now logging out";
                  return 0;
                  break;

              }

               default:
                {
                    cout<<"Error...Please be specific!!";
break;
                }
               }



        }
        k1++;
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password and try again \n";
                cin.get();
               main();
                obj.mainscreen();
        }

                 break;
            }

        case 3:           //exit
            {
                cout<<"Thank you for using our app";
                break;
                return 0;
            }
        default: cout<<" ";break;

}    }}

