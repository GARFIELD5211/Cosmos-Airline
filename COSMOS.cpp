#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
#include<stdlib.h>
#include<vector>
#include<fstream>   
#include <ctime> 
#include<algorithm>

using namespace std;

int seats[81], bseats[41];
int f, c, c2, f1, n, p=0, pp, bol, categ, seat;

string destination, departure;

vector <string> ideparture = { "Lasvegas","Tokyo","London","Paris","Karachi", "Lahore", "Islamabad","Bejeing","Dubai","Berlin","Toronto","Sydney" };
vector <string> idestination = { "Toronto","Lasvegas","Tokyo","London","Paris","Bejeing","Dubai","Berlin","Sydney" };
vector <string> fdeparture = { "Karachi", "Lahore", "Islamabad" , "Faisalabad", "Multan", "Quetta", "Peshawar" };
vector <string> fdestination = { "Karachi", "Lahore", "Islamabad" ,  "Faisalabad", "Multan", "Quetta", "Peshawar" };
vector <string> userNames;

vector <int> age;
vector <char> gender;
vector <int>  seatN;


void userInput();
void menu();
void routes();
void tickets();
void economyclass();
void bznsClass();
void dflights();
void iflights();
void packages();
void bye();
int generateRandomID() ;

int main()
{
    // Initialization of Bussiness Class seats
    for (int k = 1;k <= 40;k++)
    {
        bseats[k] = k;
    }
    // Initialization of  Economy Class seats
    for (int k = 1;k < 80;k++)
    {
        seats[k] = k;
    }
    menu();
    return 0;
}

void menu()
{

      // Main Menu 
      
    cout << "|-----------------------------:WELCOME TO COSMOS AIRLINES:---------------------------|" << endl;
    cout << "|                                                                                    |" << endl;
    cout << "|          CCCCC    OOOOOO      SSSSS     M     M    OOOOOO      SSSSS               |" << endl;
    cout << "|         C        O      O    S     S    MM   MM   O      O    S     S              |" << endl;
    cout << "|         C        O      O    S          M M M M   O      O    S                    |" << endl;
    cout << "|         C        O      O     SSSSS     M  M  M   O      O     SSSSS               |" << endl;
    cout << "|         C        O      O          S    M     M   O      O          S              |" << endl;
    cout << "|         C        O      O    S     S    M     M   O      O    S     S              |" << endl;
    cout << "|          CCCCC    OOOOOO      SSSSS     M     M    OOOOOO      SSSSS               |" << endl;
    cout << "|                                                                                    |" << endl;
    cout << "|===========================================================:COSMOS AIRLINES LTD:====|" << endl;
    cout<<"\n\n\n";
    while(!(n<1 && n>4 )){
    cout << "Please select an option below: ";
    cout << "\n(1)Booking   ";
    cout << "\n(2)Packages   ";
    cout << "\n(3)Flight Routes ";
    // Check condition if username is available or not 
    if(!userNames.empty())
        cout << "\n(4)Print Tickets";
    cout << "\n(0)EXIT \n";
    cout<< "Enter Choice: ";    
    cin >> n;
    switch (n)
    {
    case 1:
    // Domestic or Internaltional Flights 
        cout << "Press (1) for DOMESTIC FLIGHTS\nPress (2) for INTERNATIONAL FLIGHTS\n";
        while(!(f1 == 1 || f1==2)){
            cout<<"Enter Choice: ";
            cin >> f1;
        switch (f1)
        {
        case 1:
            dflights();
            break;
        case 2:
            iflights();
            break;
        default:
            cout<<"!!! INVALLID INPUT !!!\n";
        }
        }
        userInput();
        break;
    case 2:
        packages();
        userInput();
        break;
    case 3:
        routes();
        break;
    case 4:
    
        tickets();
        break;
    case 0:
        bye();
        break;
    default:
        system("cls"); 
        cout<< "  !!!  INVALID INPUT  !!!  press 0 to exit \n\n";
    }
    }
}

void dflights()
{
    srand(time(0));
    system("cls");
    int randomID = generateRandomID();

    bol = 0;

    // Prints the departures   
     while(bol!=1)
    {  
    cout << "===================Please Select Your departure=================================\n";
    for (int i = 0;i < fdeparture.size();i++)
    {
        cout << i + 1 << ". " << fdeparture[i];
        cout << endl;
    }

    cout<<"Enter City Name: ";
    cin >> departure;
    cin.ignore();
    
    // Convert departure's first to uppercase
        departure[0] = toupper(departure[0]);
    // Convert departure's rest to lowercase
        transform(departure.begin() + 1, departure.end(), departure.begin() + 1, ::tolower);
       
    for (int i = 0;i < fdeparture.size(); i++)
    {
        if (departure == fdeparture[i])
        {   
            bol = 1;
        }
    }
    switch (bol)
    {
    case 1:
        goto label;
        break;
    case 0:
    default:
        system("cls");
        cout << "\n\tError Invalid Input Please try again";
    }
    }
    label:
    system("cls");

    bol = 0;
    while(bol!=1){
    cout << "===================Please Select Your DESTINATION================================\n";
    for (int i = 0;i < fdestination.size();i++)
    {
        cout << i + 1 << ". " << fdestination[i];
        cout << endl;
    }
    cout << "\n\tEnter City Name: ";
    cin >> destination;
    cin.ignore();
    // Convert destination's first to uppercase
        destination[0] = toupper(destination[0]);
    // Convert destination's rest to lowercase
        transform(destination.begin() + 1, destination.end(), destination.begin() + 1, ::tolower);
    for (int i = 0;i < fdestination.size() ;i++)
    {
        if (destination == fdestination[i])
        {
            bol = 1;
        }
    }
    switch (bol)
    {
    case 1:
        break;
     case 0:
        goto label1;
    default:
        system("cls");
        cout << "\n\tError Invalid Input Please try again";
    }
    }
    label1:
    system("cls");

    cout << "======================================Available Flights=======================================\n";
    
    cout << "--------------FLIGHT #1--------\n"
        << departure << " to " << destination
        << "\nTimings:   02:00 PM -- 09:30 randomIDandomID " 
        << "\n price = $500\n"      
        << "                  Flight ID:" << randomID<<"\n" 
        << "--------------------------------------\n\n\n";

    cout<< "--------------FLIGHT #2---------------\n"
        << departure << " to " << destination
        << "\nTimings:   01:00 AM -- 08:30 AM"
        << "\n price = $500\n"
        << "                  Flight ID:"<<randomID<<"\n"
        << "--------------------------------------\n\n\n";


    cout << "--------------FLIGHT #3---------------\n"
        << departure << " to " << destination
        << "\nTimings:   05:00 PM -- 011:30 PM"
        << "\n price = $500\n"
        << "                  Flight ID:"<<randomID<<"\n"
        << "--------------------------------------\n\n\n";      

    cout << "Choose Flight : ";
    cin >> f;
    cout << "\nYour Plane is BOEING 777\n";
    const char* asciiPlane = R"(
                      ___
                      \\ \
                       \\ `\
    ___                 \\  \
   |    \                \\  `\
   |_____\                \    \
   |______\                \    `\
   |       \                \     \
   |      __\__---------------------------------._.
 __|---~~~__o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_[][\__
|___             FLY  COSMOS /~      )                \__
    ~~~---..._______________/      ,/_________________/
                           /      /
                          /     ,/
                         /     /
                        /    ,/
                       /    /
                      //  ,/
                     //  /
                    // ,/
                   //_/ 
)";

    cout << asciiPlane << '\n';

    cout << "Press (1) to proceed\nPress (2) to exit\n";
    cin >> c;
    if (c == 2)
    {
        bye();
    }

}

void iflights()
{
    system("cls");
    srand(time(0));
    int randomID = generateRandomID();

    bol = 0;
    while(bol!=1){
    cout << "===================Please Select Your departure=================================\n";
    for (int i = 0;i < ideparture.size();i++)
    {
        cout << i + 1 << ". " << ideparture[i];
        cout << endl;
    }
    cout << "\n\tEnter City Name: ";
    cin >> departure;
    cin.ignore();

     // Convert departure's first to uppercase
        departure[0] = toupper(departure[0]);
    // Convert departure's rest to lowercase
        transform(departure.begin() + 1, departure.end(), departure.begin() + 1, ::tolower);
    for (int i = 0;i < ideparture.size() ;i++)
    {
        if (departure == ideparture[i])
        {
            bol = 1;
        }
    }
    switch (bol)
    {
    case 1:
        goto label2;
        break;
    case 0:
    default:
    system("cls");
        cout << "\n\tError Invalid Input Please try again";
    }
    }
    label2:
        system("cls");

    bol = 0;
    while(bol!=1){
    cout << "===================Please Select Your DESTINATION================================\n";
    for (int i = 0;i < idestination.size() ;i++)
    {
        cout << i + 1 << ". " << idestination[i];
        cout << endl;
    }
    cout << "\n\tEnter City Name: ";
    cin >> destination;
    cin.ignore();
     // Convert destination's first to uppercase
        destination[0] = toupper(destination[0]);
    // Convert destination's rest to lowercase
        transform(destination.begin() + 1, destination.end(), destination.begin() + 1, ::tolower);
    for (int i = 0;i < idestination.size() ;i++)
    {
        if (destination == idestination[i])
        {
            bol = 1;
        }
    }
    switch (bol)
    {
    case 1:
        goto label3;
        break;
    case 0:   
    default:
        system("cls");
        cout << "\n\tError Invalid Input Please try again";
    
    }
    }
    label3:
    system("cls");

    cout << "======================================Available Flights=======================================\n";

    cout << "--------------FLIGHT #1-------\n"
        << departure << " to " << destination
        << "\nTimings:   02:00 PM -- 09:30 randomIDandomID " 
        << "\n price = $500\n"      
        << "                  Flight ID:" << randomID<<"\n" 
        << "--------------------------------------\n\n\n";

    cout<< "--------------FLIGHT #2---------------\n"
        << departure << " to " << destination
        << "\nTimings:   01:00 AM -- 08:30 AM"
        << "\n price = $500\n"
        << "                  Flight ID:"<<randomID<<"\n"
        << "--------------------------------------\n\n\n";


    cout << "--------------FLIGHT #3---------------\n"
        << departure << " to " << destination
        << "\nTimings:   05:00 PM -- 011:30 PM"
        << "\n price = $500\n"
        << "                  Flight ID:"<<randomID<<"\n"
        << "--------------------------------------\n\n\n"; 

    cout << "Choose Flight : ";
    cin >> f;
    system("cls");

    cout << "Choose Flight : ";
    cin >> f;
    system("cls");
    cout << "Your Plane is BOEING 777\n";
    const char* asciiArt = R"(
                      ___
                      \\ \
                       \\ `\
    ___                 \\  \
   |    \                \\  `\
   |_____\                \    \
   |______\                \    `\
   |       \                \     \
   |      __\__---------------------------------._.
 __|---~~~__o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_[][\__
|___            FLY COSMOS   /~      )                \__
    ~~~---..._______________/      ,/_________________/
                           /      /
                          /     ,/
                         /     /
                        /    ,/
                       /    /
                      //  ,/
                     //  /
                    // ,/
                   //_/ 
)";

    cout << asciiArt << '\n';


    cout << "Press (1) to proceed\nPress (2) to exit\n";
    cin >> c;
    if (c == 2)
    {
        bye();
    }
}

void userInput()
{   
    system("cls");
    while((p == 2 && seat != 5) || (p == 3 && seat != 2)){
    cout << "Enter number of seats: ";
    cin >> seat;
    cin.ignore();

    if (p == 2 && seat != 5)
    {
        cout << "ONLY 5 SEATS ALLOWED IN FAMILY PACKAGE";
       
    }
    if (p == 3 && seat != 2)
    {
        cout << "ONLY 2 SEATS ALLOWED IN HONEYMOON PACKAGE";
    }   
    }
    system("cls");
    for (int i = 1; i <= seat; i++)
    {
        system("cls");
        string name;
        cout << "Enter name of passenger #" << i << ": ";
        getline(cin, name);
        userNames.push_back(name);

        int x;
        cout << "Enter age of passenger #" << i << ": ";
        cin >> x;
        cin.ignore();
        age.push_back(x);

        char g;
        cout << "Enter gender of passenger #" << i << " (m/f): ";
        cin >> g;
        cin.ignore();
        gender.push_back(g);

        system("cls");

        int c;
        cout << "Choose ticket type:\n(1) for Economy class\n(2) for Business class\n";
        cin >> c;
        cin.ignore();

        if (c == 1)
        {
            economyclass();
            cout << "Enter Seat Number: ";
            int r;
            cin >> r;
            cin.ignore();
            seatN.push_back(r);
            if (r > 0 && r < 81)
            {
                for (int j = 0; j < 81; j++)
                {
                    if (seats[j] == r)
                    {
                        seats[j] = 00;
                        break;
                    }
                }
            }
            else
            {
                menu();
            }
        }
        else if (c == 2)
        {
            bznsClass();
            cout << "Enter Seat Number: ";
            int r;
            cin >> r;
            cin.ignore();
            seatN.push_back(r);
            if (r > 0 && r < 81)
            {
                for (int j = 0; j < 81; j++)
                {
                    if (bseats[j] == r)
                    {
                        bseats[j] = 00;
                        break;
                    }
                }
            }
            else
            {
                menu();
            }
        }
        else
        {
            goto endLoops;
        }
    }
    

endLoops:
    system("cls");

    cout << "PLEASE RECHECK DETAILS:\n";

    if (!userNames.empty())
    {  
        for (int i = 0; i < userNames.size(); i++)
        {
            cout << "Name   : " << userNames[i] << "\n";
            cout << "Age    : " << age[i] << "\n";
            cout << "Gender : " << gender[i] << "\n";
            cout << "Seat # : " << seatN[i] << "\n\n";
        }
    }
    cout << "Enter 1 to continue\nEnter 2 to exit\n";
    cin >> pp;

    if (pp == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        bye();
    } 

}

void economyclass()
{
    system("cls");
    cout << "==============================================\n";
    cout << " MALE---------------GROUP---------------FEMALE\n\n";

    seats[80] = 80;
    int k = 1;
    for (int i = 1;i <= 10;i++)
    {

        for (int j = 1;j < 9;j++)
        {

            if (k == 03 || k == 79 || k == 75 || k == 11 || k == 19 || k == 27 || k == 35 || k == 43 || k == 51 || k == 59 || k == 67 || k == 07 || k == 15 || k == 23 || k == 31 || k == 39 || k == 47 || k == 55 || k == 63 || k == 71)
            {
                cout << "\t\t";
            }

            if (k <= 9 || k == 0)
            {
                cout << " " << setw(2) << setfill('0') << seats[k];

            }
            else
            {
                cout << " " << seats[k];
            }
            k++;
        }

        cout << endl;
    }

    cout << "==============================================\n";

}

void bznsClass()
{
    system("cls");
    cout << "==========================================\n";
    cout << "--MALE----------------------------FEMALE--\n\n";


    int k = 1;
    for (int i = 1;i <= 10;i++)
    {

        for (int j = 1;j < 5;j++)
        {

            if (k == 03 || k == 11 || k == 19 || k == 27 || k == 35 || k == 07 || k == 15 || k == 23 || k == 31 || k == 39)
            {
                cout << "\t\t\t";
            }
            if (k <= 9 || k == 0)
            {
                cout << " " << setw(2) << setfill('0') << bseats[k] << "  ";
            }
            else
            {
                cout << " " << bseats[k] << "  ";
            }
            k++;
        }
        cout << endl;
    }
    cout << "==========================================\n";

}

void packages()
{
    system("cls");
    cout << "\n===========================SELECT A PACKAGE==============================\n\n\n";
    cout << "|---------------------------Package #1 UMRAH PACKAGE-----------------------|\n";
    cout << "|           AVAIL THE CHANCE TO DO UMRAH ONLY FOR $125/PERSON              |\n";
    cout << "|     LIMITED OFFER ONLY AVAILABLE FOR THE MONTH OF \"RABBI-UL-AWWAL\"       |\n";
    cout << "|                                                               FLY-COSMOS |\n";
    cout << "|--------------------------------------------------------------------------|\n\n";

    cout << "|---------------------------Package #2 FAMILY PACKAGE----------------------|\n";
    cout << "|               AVAIL 25% DISCOUNT PER PERSON TO THE USA                   |\n";
    cout << "|                      ONLY AVAILABLE FOR FAMILY OF 5                      |\n";
    cout << "|                                                               FLY-COSMOS |\n";
    cout << "|--------------------------------------------------------------------------|\n\n";

    cout << "|-------------------------Package #3 HONEYMOON PACKAGE---------------------|\n";
    cout << "|              ENJOY THE ROMANTIC BEACHES OF BALI THIS WINTER              |\n";
    cout << "|     MAKE YOUR PARTNER FEEL LOVED BY GOING TO \"BALI\"  FOR HONEYMOON       |\n";
    cout << "| ONLY $250/PERSON         LIMITED OFFER ONLY AVAILABLE FOR THE WINTER     |\n";
    cout << "|                                                               FLY-COSMOS |\n";
    cout << "|--------------------------------------------------------------------------|\n\n";
    
    while(!(p>=1 && p<=3))    
    {
    cout << "Enter Package: ";
    cin >> p;
    cin.ignore();

    switch (p)
    {
    case 1:
        destination = "Jeddah (UMRAH PACKAGE)";
        departure = "Islamabad";
        break;
    case 2:
        destination = "Los Angeles (Family Package)";
        departure = "Islamabad";
        break;
    case 3:
        destination = "Bali (Honeymoon Package)";
        departure = "Islamabad";
        break;
    default:
        cout<<" !!!   INVALID INPUT   !!! \n";
    }
    } 
}

void tickets()
{    srand(time(0));
int randomID = generateRandomID();
    system("cls");
    cout << "===================YOUR TICKETS======================\n\n";
    if (!userNames.empty())
    {
        fstream ticketFile("Tickets.txt", ios::out | ios::app); 
        if (ticketFile.fail())
        {
           cout << "Error: Unable to open file for writing!";
           exit(1);
        }

        for (int i = 0;i < userNames.size();i++)
        {
            cout << "|----------------TICKET #"<<i+1<<"-----------------------|\n";
            ticketFile << "|----------------TICKET #"<<i+1<<"-----------------------|\n";
            cout << " Name #" << i + 1 << ": " << userNames[i] << "\n";
            ticketFile << " Name #" << i + 1 << ": " << userNames[i] << "\n";
            cout << " age    " << ": " << age[i] << "\n";
            ticketFile << " age    " << ": " << age[i] << "\n";
            cout << " gender " << ": " << gender[i]<<"\n";
            ticketFile << " gender " << ": " << gender[i]<<"\n";
            cout << " Seat # " << ": " << seatN[i] <<"\n";
            ticketFile<< " Seat # " << ": " << seatN[i]<<"\n";
            cout << " FROM: "<< departure << "\tTO: " <<destination<<"\n";
            ticketFile<< " FROM: "<< departure << "\tTO: " <<destination<<"\n";
            cout << "                              Flight ID:"<<(randomID+i)<<"\n";
            ticketFile<< "                              Flight ID:"<<(randomID+i)<<"\n";
            cout << " price = $500(VAT inclusive)\n";
            ticketFile << " price = $500(VAT inclusive)\n";
            cout << "|------------------------------------------------|";
            ticketFile << "|------------------------------------------------|\n\n\n";
            cout << "\n\n\n";
        }
    ticketFile.flush();
    ticketFile.close();
    cout<<"Your Tickets have been printed!";
    }

    cout << "Enter 1 to continue\nEnter 2 to exit\n";
    cin >> pp;
    if (pp == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        bye();
    }
}

void bye()
{
    system("cls");

    cout << R"(
         -=\`\
     |\ ____\_\__
   -=\c`""""""" "`)
      `~~~~~/ /~~`
        -==/ /            GOOD BYE!
          '-'           HAVE A SAFE FLIGHT!

          _  _
         ( `   )_
        (    )    `)
      (_   (_ .  _) _)
                                     _
                                    (  )
     _ .                         ( `  ) . )
   (  _ )_                      (_, _(  ,_)_)
 (_  _(_ ,)
)";
    exit(0);
}

void routes()
{
    system("cls");
    cout << setw(45) << setfill('=') << "" << endl;
    cout << setfill(' ') << left << setw(10) << "Flight" << setw(20) << "departure" << setw(20) << "Arrival" << endl;

    for (int i = 0; i < idestination.size();i++)
    {
            cout << left << setw(10) << i + 1 << setw(20) << ideparture[i] << setw(20) << idestination[i] << endl;
    }

    cout << setw(45) << setfill('=') << "" << endl;
    
    
    cout << "\n\tSelect Flight Number: ";
    cin >> c2;
    
    if (c2>=1 && c2<idestination.size())
    {
        destination = idestination[c2 - 1];
        departure = ideparture[c2 - 1];
    }
    else
    {
        cout << "\n\tERROR INVALID INPUT";
        exit(0);
    }
    userInput();

}

int generateRandomID() {
    return 1000000 + rand() % 9000000; 
}
