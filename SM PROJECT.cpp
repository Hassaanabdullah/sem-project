/*
Hassaan Abdullah  
Huzaifa Arshad Mughal
Zain Abideen Azam 
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void addbook()
{
int password;	
cout<<"\n\nENTER A PINCODE = ";
cin>>password;
if(password==422)
{	
cout<<"\n\n\t WELL COME OWNER ";
cout<<"\n\nENTER NEW BOOKS\n\n\n";	
char name[1000];
char publisher[1000];
char issn[1000];
char price[1000];
ofstream books;
books.open("Book Details.txt",ios::app);
while(true)
{
cout<<" ";
cout<<"Enter book title :  ";
cin.getline (name, 1000);
cin>>name;
books<<name<<endl;
cout<<"Enter Publisher : ";
cin.getline (publisher, 1000);
cin>>publisher;
books<<publisher<<endl;
cout<<"Enter ISSN : ";
cin.getline (issn, 1000);
cin>>issn;
books<<issn<<endl;
cout<<"Enter Price : ";
cin.getline(price, 1000);
cin>>price;
books<<price<<endl<<endl<<endl;
cout<<"\n\nBook Added Successfully";
cout<<"\n\n\n\n\n";
char option;
cout<<"Press S For Stoping  AND any key to Adding Book = ";
cin>>option;
if(option=='s'||option=='S')
break;
}
}
else
if(password!=422 || password==char())
{
cout<<"\n\tWRONG PINCODE\n\n";
cout<<"PLEASE ENTER CORRECT PINCODE ";
}	
}

void bookdetail()
{
	string showbooks;
cout<<"\n\n\tBOOKS IN STOKES \n\n";
cout<<"BooK details\n\n\n";
ifstream readbooks("Book Details.txt",ios::in);
while(getline(readbooks,showbooks))
{
cout<<showbooks<<endl;

}
cout<<"BOOKS END ";	
}






void selectbook()
{
string pincode;
char rtrn;
int offset,onset;
string search;
string line,fline;	
{
ifstream pin;
pin.open("Student Details.txt");
cout<<"ENTER YOUR PINCODE OR NAME ";
cin>>pincode;
if(pin.is_open())
{
while(!pin.eof())	
{
getline(pin,fline);
if ((onset = fline.find(pincode, 0)) !=string ::npos)	


{

ifstream srch;
cout<<"\n\nENTER Y IF YOU RETURN A BOOK ELSE ENTER  N  : ";
cin>>rtrn;
if(rtrn=='Y'||rtrn=='y')
{
srch.open("Book Details.txt");
cout<<"\n\nENTER BOOK NAME TO GET A BOOK : ";
cin>>search;
if(srch.is_open())
{
while(!srch.eof())
{
getline(srch,line);
if ((offset = line.find(search, 0)) !=string::npos)	
{
cout<<"\n\nTHIS BOOK ( "<<search<<" ) ISSUE TO USER ( "<<pincode<<" ) "<<endl;
cout<<"\n      THANKS FOR PURCHASING ";	
break;	
}
}
}
}
break;
if(rtrn=='N'||rtrn=='n')
{
cout<<"\n\tPlease Return Previous Book";
break;
}
}
}
}
}

}









void Addstudent()
{
	char opt;
char studentname[1000];
char studentid[1000];
ofstream students;
students.open("Student Details.txt",ios::app);
while(true)	
{
cout<<"ENTER STUDENT NAME : ";
cin.getline(studentname , 1000);
cin>>studentname;
students<<studentname<<endl;
cout<<"ENTER STUDENT ID : ";
cin.getline(studentid , 1000);
cin>>studentid;
students<<studentid<<endl<<endl;
cout<<"\n\nSTUDENT INFORMATION ADDED SUCEESFULLY "<<endl<<endl;
cout<<"\n\nENTER X FOR EXIT FROM ADD STUDENT DETAILS ";
cin>>opt;
if(opt=='x'||opt=='X')
{
break;	
}
}
}

void showstudents()
{
string showstudent;
cout<<"\nSTUDENT DETAILS ARE FOLLOWING \n\n";
ifstream showstd("Student Details.txt",ios::in)	;
while(getline(showstd,showstudent))
{
cout<<showstudent<<endl;	
}
}








int main()
{
int choice;
string showbooks;	
cout<<"\t Well Come To The Library";
while(true)
{
cout<<"\n\n\n\n\t\tMENU\n\n";
cout<<"****************************************"<<endl;	
cout<<"*\t1. ENTER A NEW BOOK            *"<<endl;
cout<<"*\t2. RETRIEVE BOOK DETAILS       *"<<endl; 
cout<<"*\t3. SELECT A BOOK               *"<<endl;
cout<<"*\t4. EXIT                        *"<<endl;
cout<<"*\t5. ADD NEW STUDENT             *"<<endl;
cout<<"*\t6. SHOW STUDENT DETAILS        *"<<endl;
cout<<"****************************************"<<endl;
cout<<endl;
cout<<"Enter Your Choice : ";
cin>>choice;
if(choice==1)
{
addbook();
}
else
if(choice==2)
{
bookdetail();	
}	
else
if(choice==3)
{
selectbook();	
}
else
if(choice==4)
{
cout<<"\nTHANKS FOR VISITING SIR";
break;	
}
else
if(choice==char())
{
cout<<"\nWrong Input";
break;

}
else
if(choice==5)
{
Addstudent();	
}
else
if(choice==6)
{
showstudents();	
}
else
{
cout<<"Wrong Input";
}
}
return 0;
}
