#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
string ans, psd, name, fname, bio, usern, pw, line, nusn;
ifstream in;           // global variables
ofstream out;
string usn;
int tm;
void login_regiA();                 // admin login/signup
void admin();                      //admin portal
void bus();                       //driver details
void viewallcustomers();         //to view all customers who are registered in this portal
void viewallbookingstoaplace(); // to view total bookings to a place 
void payment();                 // to view all payments that are done by admin
void login_regiU();             // user login/signup
void user();                    // user portal
void viewall();                //to view all locations
int payment(int a,int pass);   // payment calculation for user
void book();                   // to book a package
void view();                   //to view user profile


void valid(string str)
{
    string dir, user;
    ifstream file;
    dir = str + ".txt";
    file.open(dir.c_str());
    if (!file.is_open() && file.fail())
    {
        // file.close();
        return;
    }
    else
    {
        tm++;
        if (tm == 3)
        {
            cout << "\nThis username already exists\nPlease try Again."<<endl;
            // file.close();
            return;
        }
        cout << "\nThis username already exists!\nCreate a username:"<<endl;
        cin >> usn;
        // file.close();
        valid(usn);
    }
}
void viewallcustomers()
{
   string custom;
   ifstream in;
   ofstream out;
   in.open("filebus.txt");
   cout<<" \n --------------- VIEW ALL CUSTOMERS REGISTERED -----------------"<<endl;
   cout<<" \tALL THE CUSTOMERS THAT ARE REGISTERED ARE: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,custom);
        cout<<custom<<endl;
    }
    cout<<"..................REDIRECTING............";
    admin();
  } 
}
void viewallbookingstoaplace()
{    int n;
cout<<"\n ------------ VIEW ALL TOURISTS TO A PLACE: -------------"<<endl;
    cout<<"1.Guntur\n2.Nellore\n3.Eluru\n4.Vizag\n5.Warangal\n6.West godavari\n7.East godavari\n8.Chittoor\n"<<endl;
    cout<<"Enter a place to see all tourists: ";
    cin>>n;
    if(n==1)
    {
    string g;
   ifstream in;
   ofstream out;
   in.open("fileguntur.txt");
   cout<<"The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,g);
        cout<<g<<endl;
    }
    cout<<"..................REDIRECTING............";
  } admin();
    }
    else if(n==2)
    {
        string ne;
   ifstream in;
   ofstream out;
   in.open("filenellore.txt");
   cout<<" The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,ne);
        cout<<ne<<endl;
    }
    cout<<"..................REDIRECTING............";
    } admin();
    }
    else if(n==3)
    {
        string el;
   ifstream in;
   ofstream out;
   in.open("fileeluru.txt");
   cout<<" The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,el);
        cout<<el<<endl;
    }
    cout<<"..................REDIRECTING............";
    } admin();
    }
    else if(n==4)
    {
        string V;
   ifstream in;
   ofstream out;
   in.open("filevizag.txt");
   cout<<" The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,V);
        cout<<V<<endl;
    }
    cout<<"..................REDIRECTING............";
    } admin();
    }
    else if(n==5)
    {
        string w;
   ifstream in;
   ofstream out;
   in.open("filewarangal.txt");
   cout<<" The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,w);
        cout<<w<<endl;
    }
    cout<<"..................REDIRECTING............";
    } admin();
    }
    else if(n==6)
    {
        string wg;
   ifstream in;
   ofstream out;
   in.open("filewestgodavari.txt");
   cout<<" The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,wg);
        cout<<wg<<endl;
    }
    cout<<"..................REDIRECTING............";
    } admin();
    }
    else if(n==7)
    {
         string eg;
   ifstream in;
   ofstream out;
   in.open("fileeastgodavari.txt");
   cout<<" The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,eg);
        cout<<eg<<endl;
    }
    cout<<"..................REDIRECTING............";
    } admin();
    }
    else if(n==8)
    {
        string ch;
   ifstream in;
   ofstream out;
   in.open("filechittoor.txt");
   cout<<" The passengers to this place are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,ch);
        cout<<ch<<endl;
    }
    cout<<"..................REDIRECTING............";
    } admin();
    }
}
void bus()
{
   string b;
   ifstream in;
   ofstream out;                     
   in.open("busdrivers.txt");
   cout<<endl<<"----------ALL DRIVERS DETAILS:------------ \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,b);
        cout<<b<<endl;
    }
    cout<<"..................REDIRECTING............"<<endl;
    admin();
  } 
}
void payment()
{
    string p;
   ifstream in;
   ofstream out;                     
   in.open("filepayment.txt");
   cout<<"-----------Total payments: -----------\n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,p);
        cout<<p<<endl;
    }
    cout<<"..................REDIRECTING............"<<endl;
    admin();
  } 
}
void admin()
{
    cout <<endl<< "=======================Welcome to ADMIN Portal=====================" << endl;
    cout << endl
         << "1. Bus management\n2. View all Customers\n3. View all Bookings\n4.Payments\n5.Exit " << endl;
    cout << "Enter your choice:";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1: bus();break;//bus driver details
    case 2:viewallcustomers();break;// view all customers
    case 3:viewallbookingstoaplace();break;//view all bookings to a place.
    case 4: payment();break;
    case 5: cout<<endl<<"+++++++++++++++ Exiting... ++++++++++++++++"<<endl;
            cout<<endl<<"===========Thank you for visiting=========="<<endl<<endl;
            exit(0);
            break;
    }
    cout<<"++++++++++++++++++++ Thank you for visiting++++++++++++++++++";
}
void login_regiA()
{
    // string username="ADMIN";
    // string password = "1234567";
    // string usn,pwd;
    // cout<<endl<<"Enter username: ";
    // cin>>usn;
    // cout<<endl<<"Enter password: ";
    // cin>>pwd;
    // if(usn==username && pwd== password)
    // {
    //     admin();
    // }
    // else
    // {
    //     cout<<endl<<"Invalid Try again...";
    // }
    int choice, i, exit = 0;
    string ans, psd, name, fname, bio, usern, pw, line, nusn;
    ofstream fileoa;
    ifstream fileia;
    cout << "-----------------------------Welcome to our system!-----------------------------\n";
    while (exit == 0)
    {
        cout << "\nChoose one option:\n1.LogIn\n2. SignUp\nEnter your choice:\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter your username:";
            cin >> usn;
            cout << "\nEnter your password:";
            cin >> psd;
            fname = usn + ".txt";
            fileia.open(fname.c_str());
            if (!fileia.is_open() && fileia.fail())
            {
                cout << "\nYou are not registered, please register before logging in.\n";
                fileia.close();
                continue;
            }
            getline(fileia, usern);
            getline(fileia, line);
            getline(fileia, pw);
            if (usn == usern && psd == pw)
            {
                cout << "\nYou are successfully logged in:)\nYOUR PROFILE SAYS:\n";
                cout << "User-name:" << usern << endl;
                cout << "Name:" << line << endl;
                getline(fileia, line);
                cout << "Bio:" << line << endl;
                fileia.close();
                admin();break;
            }
            else
            {
                cout << "\nWrong username or password!\nPlease try Again.\n";
            }
            cout << endl;
        }
        else if (choice == 2)
        {
            cout << "\nEnter your name:";
            cin.ignore();
            getline(cin, name);
            cout << "\nCreate a username:";
            cin >> usn;
            tm = 0;
            valid(usn);
            if (tm >= 3)
            {
                continue;
            }
            cout << "\nCreate a password:";
            cin >> psd;
            fname = usn + ".txt";
            // cout<<fname;
            fileoa.open(fname.c_str());
            fileoa <<name <<endl
                   <<usn<<endl
                   <<psd <<endl;
            cout << "\nYou are successfully registered:)";
            cout << "\nAdd to your bio and press enter when you are done:";
            cin.ignore();
            getline(cin, bio);
            fileoa << "Admin bio: "<<bio << endl;
            cout << "\nYour bio is saved as: " << bio<<endl;
            fileoa.close();
            admin();break;
        }
        else
        {
            exit = 1;
        }
    }
    
}
void viewall(void)
{
   string place;
   ifstream in;
   ofstream out;
   in.open("places.txt");
   cout<<"The available destinations are: \n";
  if(in.is_open())
  {
    while(in)
    {
        getline(in,place);
        cout<<place<<endl;
    }
    cout<<"..................REDIRECTING............";
    user();
  } 
}
int payment(int a,int pass)
{
    int amt;
    if(a==1)
    {
        amt=pass*500;
        return amt;
    }
    else if(a==2)
    {
        amt=pass*600;
        return amt;
    }
    else if(a==3)
    {
        amt=pass*550;
        return amt;
    }
    else if(a==4)
    {
        amt=pass*1000;
        return amt;
    }
    else if(a==5)
    {
        amt=pass*800;
        return amt;
    }
    else if(a==6)
    {
        amt=pass*800;
        return amt;
    }
    else if(a==7)
    {
        amt=pass*900;
        return amt;
    }
    else if(a==8)
    {
        amt=pass*1000;
        return amt;
    }
    
}
void book(void)
{   
    string usrname,bname,name;
    fstream file,fileguntur,filenellore,filevizag,filechittoor,filewestgodavari,fileeastgodavari,fileeluru,filewarangal,filepayment;
    cout<<"Please enter your username: ";
    cin>>usrname;
    bname = usrname + ".txt";
    file.open(bname.c_str(),ios::app);
    if(!file.is_open() && file.fail())
    {
       cout << "\nYou are not registered, please register before logging in.\n Redirecting......";
       
    }
    int pass;string date;
    int ch,pay;
    cout<<"Enter place as choice:";
    cin>>ch;
    switch(ch)
    {
        case 1 :  cout<<"Place: Guntur"<<endl;
                cout<<"Route: Vijayawada - Varadhi - Mangalgiri -  Guntur---"<<endl;
            file<<endl<<"Route: Vijayawada - Varadhi - Mangalgiri -  Guntur---"; 
            cout<<"Enter the number of passengers: ";
            cin>>pass;
            file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"==";
            fileguntur.open("fileguntur.txt",ios::app);
            fileguntur<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
            for(int i=0;i<pass;i++){
                cout<<"Enter passenger name:";
                getline(cin,name);
                file<<"Passenger name: "<<name<<"==";
                fileguntur<<"Passenger name:"<<name<<"--";
            } 
            fileguntur<<"\n";
            file.close();
              fileguntur.close();
               cout<<"The total amt is:"<<payment(1,pass)<<endl;
               cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(1,pass))
               {
                cout<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
    
                break;
        case 2 : cout<<"Place: Nellore"<<endl;
        cout<<"Route: Vijayawada - Guntur - Ongole - Bapatala - Chirala - Nellore"<<endl;
            file<<"Route: Vijayawada - Guntur - Ongole - Bapatala - Chirala - Nellore";
            cout<<"Enter the number of passengers: ";
               cin>>pass;
              file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"\n";
            filenellore.open("filenellore.txt",ios::app);
            filenellore<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
               for(int i=0;i<pass;i++)
             {
                 cout<<"Enter passenger name:";
                  getline(cin,name);//passengers to a route
                  file<<"Passenger name:"<<name<<"/n";
                  filenellore<<"Passenger name:"<<name<<"--";
             } filenellore<<"\n"; 
              file.close();
              filenellore.close();
            cout<<"The total amt is:"<<payment(2,pass)<<endl;
            cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(2,pass))
               {
                cout<<endl<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
            break;
        case 3 : cout<<"Place: Eluru"<<endl;
            cout<<"Route: Vijayawada - Gannavaram - Hanuman Junction - Eluru"<<endl;
           file<<"Route: Vijayawada - Gannavaram - Hanuman Junction - Eluru";
           cout<<"Enter the number of passengers: ";
               cin>>pass;
              file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"\n";
            fileeluru.open("fileeluru.txt",ios::app);
            fileeluru<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
               for(int i=0;i<pass;i++)
             {
                 cout<<"Enter passenger name:";
                  getline(cin,name);//passengers to a route
                  file<<"Passenger name::"<<name<<"\n";
                  fileeluru<<"Passenger name:"<<name<<"--";
             } 
             fileeluru<<"\n";
              file.close();
              fileeluru.close();
           cout<<"The total amt is:"<<payment(3,pass)<<endl;
           cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(3,pass))
               {
                cout<<endl<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
           break;
        case 4 : cout<<"Place: Vizag"<<endl;
                cout<<"Vijayawada - Eluru - Tadepalligudem - Rajamundary - Vizag"<<endl;
             file<<"Vijayawada - Eluru - Tadepalligudem - Rajamundary - Vizag";
             cout<<"Enter the number of passengers: ";
               cin>>pass;
              file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"\n";
            filevizag.open("filevizag.txt",ios::app);
            filevizag<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
               for(int i=0;i<pass;i++)
             {
                 cout<<"Enter passenger name:";
                  getline(cin,name);//passengers to a route
                  file<<"Passenger name::"<<name<<"\n";
                  filevizag<<"Passenger name:"<<name<<"--";
             } filevizag<<"\n";
              file.close();
              filevizag.close();
            cout<<"The total amt is:"<<payment(4,pass)<<endl;
            cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(4,pass))
               {
                cout<<endl<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
            break;
        case 5: cout<<"Place: Warangal"<<endl;
                cout<<"Vijayawada - Madhira - Khammam - Warangal"<<endl;
             file<<"Vijayawada - Madhira - Khammam - Warangal";
             cout<<"Enter the number of passengers: ";
               cin>>pass;
              file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"\n";
            filewarangal.open("filewarangal.txt",ios::app);
            filewarangal<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
               for(int i=0;i<pass;i++)
             {
                 cout<<"Enter passenger name:";
                 cin.ignore();
                  getline(cin,name);//passengers to a route
                  file<<"Passenger name::"<<name<<"\n";
                  filewarangal<<"Passenger name:"<<name<<"--";
             } filewarangal<<"\n";
              file.close();
              filewarangal.close();
             cout<<"The total amt is:"<<payment(5,pass)<<endl;
             cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(5,pass))
               {
                cout<<endl<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
             break;
        case 6: cout<<"Place: West godavari"<<endl;
        cout<<"Vijayawada - Gannavaram - Eluru -West godavari"<<endl;
             file<<"Vijayawada - Gannavaram - Eluru -West godavari";
             cout<<"Enter the number of passengers: ";
               cin>>pass;
              file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"\n";
            filewestgodavari.open("filewestgodavari.txt",ios::app);
            filewestgodavari<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
               for(int i=0;i<pass;i++)
             {
                 cout<<"Enter passenger name:";
                 cin.ignore();
                  getline(cin,name);//passengers to a route
                  file<<"Passenger name::"<<name<<"\n";
                  filewestgodavari<<"Passenger name:"<<name<<"--";
             } filewestgodavari<<"\n";
              file.close();
              filewestgodavari.close();
             cout<<"The total amt is:"<<payment(6,pass)<<endl;
             cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(6,pass))
               {
                cout<<endl<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
             break;
        case 7:cout<<"Place: East godavari"<<endl;
        cout<<"Vijayawada - Gannavaram - Eluru - Bheemavaram - Rajamundary - East godavari"<<endl;
             file<<"Vijayawada - Gannavaram - Eluru - Bheemavaram - Rajamundary - East godavari";
             cout<<"Enter the number of passengers: ";
               cin>>pass;
              file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"\n";
            fileeastgodavari.open("fileeastgodavari.txt",ios::app);
            fileeastgodavari<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
               for(int i=0;i<pass;i++)
             {
                 cout<<"Enter passenger name:";
                 cin.ignore();
                  getline(cin,name);//passengers to a route
                  file<<"Passenger name::"<<name<<"\n";
                  fileeastgodavari<<"Passenger name:"<<name<<"--";
             } fileeastgodavari<<"\n";
              file.close();
              fileeastgodavari.close();
             cout<<"The total amt is:"<<payment(7,pass)<<endl;
             cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(7,pass))
               {
                cout<<endl<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
             break;
        case 8:cout<<"Place: Chitoor"<<endl;
        cout<<"Vijayawada - Guntur - Ongole - Nellore - Tirupathi - Chitoor"<<endl;
             file<<"Vijayawada - Guntur - Ongole - Nellore - Tirupathi - Chitoor";
             cout<<"Enter the number of passengers: ";
               cin>>pass;
              file<<"No of passengers:"<<pass<<"\n";
            cout<<endl<<"Enter date :";
            cin>>date;
            file<<"Date of booking:"<<date<<"\n";
            filechittoor.open("filechittoor.txt",ios::app);
            filechittoor<<date<<"--"<<"num of passenger: "<<pass<<"--";
            getline(cin,name);
               for(int i=0;i<pass;i++)
             {
                 cout<<"Enter passenger name:";
                 cin.ignore();
                  getline(cin,name);//passengers to a route
                  file<<"Passenger name::"<<name<<"\n";
                  filechittoor<<"Passenger name:"<<name<<"--";
             }filechittoor<<"\n"; 
              file.close();
              filechittoor.close();
             cout<<"The total amt is:"<<payment(8,pass)<<endl;
             cout<<"Enter amount u are paying:  ";
               cin>>pay;
               if(pay==payment(8,pass))
               {
                cout<<endl<<"Your payment is done...";
                filepayment.open("filepayment.txt",ios::app);
                filepayment<<payment(1,pass)<<endl;
                filepayment.close();
               }
               else{
                cout<<"Your payment is not done yet please complete inorder to book...";
               }
             break;
    cout<<"Successfully registered\n "<<endl;        
    }
    user();
}
void view()
{
    ifstream in;
    string vname,tp;
    cout << "Enter your username:";
    cin >> usn;
    vname = usn + ".txt";
    in.open(vname.c_str()); 
      while(getline(in, tp)){  
         cout << tp << "\n";   
   }
      in.close();   
      user();
}

void user(void)
{
    cout<<"\n\n -----------------------Welcome to customer portal-----------------------"<<endl;
    cout<<"1. View all locations\n2. Book a package\n3. View your bookings\n4. Exit"<<endl;
    int choice,d;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1: viewall();break; //places
        case 2: 
                book();break;//to book
        case 3: view();break;//open the booking
        case 4: cout<<"+++++++++++++Thank you for visiting+++++++++++"<<endl;
                cout<<" \t\tExiting..........";
                exit(0);
                break;
    }

}
void login_regiU()
{
    int choice, i, exit = 0;
    ofstream fileou;
    ifstream fileiu;
    fstream filebus;
    cout << "----------------------------Welcome to our system!------------------------------\n";
    while (exit == 0){
        cout << "\n1.LogIn\n2.SignUp\n";
        cout<<"Enter your choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter your username:";
            cin >> usn;
            cout << "\nEnter your password:";
            cin >> psd;
            fname = usn + ".txt";
            fileiu.open(fname.c_str());
            if (!fileiu.is_open() && fileiu.fail())
            {
                cout << "\nYou are not registered, please register before logging in.\n";
                fileiu.close();
                continue;
            }
            getline(fileiu, usern);
            getline(fileiu, line);
            getline(fileiu, pw);
            if (usn == usern && psd == pw)
            {
                cout << "\nYou are successfully logged in:)\nYOUR PROFILE SAYS:\n";
                cout << "User-name:" << usern << endl;
                cout << "Name:" << line << endl;
                getline(fileiu, line);
                cout << "Bio:" << line << endl;
                fileiu.close();
                user();break;
            }
            else
            {
                cout << "\nWrong username or password!\nPlease try Again.\n";
            }
            cout << endl;
        }
        else if (choice == 2)
        {
            cout << "\nEnter your name:";
            cin.ignore();
            getline(cin, name);
            cout << "\nCreate a username:";
            cin >> usn;
            tm = 0;
            valid(usn);
            if (tm >= 3)
            {
                continue;
            }
            cout << "\nCreate a password:";
            cin >> psd;
            fname = usn + ".txt";
            // cout<<fname;
            fileou.open(fname.c_str());
            fileou << usn << endl
                <<name << endl
                   <<psd << endl;
            filebus.open("filebus.txt",ios::app);
            filebus<<usn<<endl;  
            filebus.close();
            cout << "\nYou are successfully registered:)";
            cout << "\nAdd to your bio and press enter when you are done:";
            cin.ignore();
            getline(cin, bio);
            fileou <<"BIO:"<< bio << endl;
            cout << "\nYour bio is saved as: " << bio;
            fileou.close();
            user();break;
        }
        else
        {
            exit = 1;
        }
    }
}

int main()
{
    cout << endl
        << "\t\t==============Welcome to srm tourism management=========\t\t  " << endl;
    cout << "1. ADMIN" << endl
         << "2. USER" << endl;
    int choice;
    cout << "Enter ur choice:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        login_regiA();
        break;

    case 2:
        login_regiU();
        break;
    }
    return 0;
}
