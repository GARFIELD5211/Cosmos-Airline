#include <iostream>
#include<string>
#include<cstring>
#include<iomanip>
#include<stdlib.h>
#include<vector>
#include<fstream>

using namespace std;

int seats[81], bseats[41];
int f, c, c2, f1, n, p, pp, bol, categ, seat;


string destination, departure;

vector <string> ideparture = { "LA","Tokyo","London","Paris","Karachi", "Lahore", "Islamabad","Bejeing","Dubai","Berlin","Toronto","Sydney" };
vector <string> idestination = { "Toronto","LA","Tokyo","London","Paris","Bejeing","Dubai","Berlin","Sydney" };
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



int main()
{
    for (int k = 1;k <= 40;k++)
    {
        bseats[k] = k;
    }
    for (int k = 1;k < 80;k++)
    {
        seats[k] = k;
    }

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

    cout << "\n\n\n\tPlease select an option below: ";
    cout << "\n\t(1)Booking   ";
    cout << "\n\t(2)Packages   ";
    cout << "\n\t(3)Flight Routes ";
    cout << "\n\t(4)EXIT \n";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Press (1) for DOMESTIC FLIGHTS\nPress (2) for INTERNATIONAL FLIGHTS\n";
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
            exit(0);
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
        bye();
        break;
    default:
        menu();
        break;
    }



    return 0;

}

void menu()
{
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

    cout << "\n\n\n\tPlease select an option below: ";
    cout << "\n\t(1)Booking   ";
    cout << "\n\t(2)Packages   ";
    cout << "\n\t(3)Flight Routes ";
    cout << "\n\t(4)Tickets    ";
    cout << "\n\t(5)EXIT \n";
    cin >> n;

    switch (n)
    {

    case 1:
        cout << "Press (1) for DOMESTIC FLIGHTS\nPress (2) for INTERNATIONAL FLIGHTS\n";
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
            exit(0);
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
    case 5:
        bye();
        break;
    default:
        exit(0);
    }
}

void dflights()
{
    system("cls");

    bol = 0;
    cout << "===================Please Select Your DEPARTURE=================================\n";
    for (int i = 0;i < fdeparture.size();i++)
    {
        cout << i + 1 << ". " << fdeparture[i];
        cout << endl;
    }
    cout << "\n\tEnter City Name: ";
    cin >> departure;
    cin.ignore();

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
        break;
    case 0:
        cout << "\n\tError Invalid Input Please try again";
        exit(0);
    default:
        exit(0);
    }
    
    system("cls");
    bol = 0;
    cout << "===================Please Select Your DESTINATION================================\n";
    for (int i = 0;i < fdestination.size();i++)
    {
        cout << i + 1 << ". " << fdestination[i];
        cout << endl;
    }
    cout << "\n\tEnter City Name: ";
    cin >> destination;
    cin.ignore();

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
        cout << "\n\tError Invalid Input Please try again";
        exit(0);
    default:
        exit(0);
    }

    system("cls");

    cout << "======================================Available Flights=======================================\n";
    cout << "--------------FLIGHT #1---------------\n"
        << departure << " to " << destination
        << "\nTimings:   02:00 PM -- 09:30 PM"
        << "\n price = $350\n"
        << "                   Flight ID:340995788\n"
        << "--------------------------------------\n\n\n";

    cout << "--------------FLIGHT #2---------------\n"
        << departure << " to " << destination
        << "\nTimings:   01:00 AM -- 08:30 AM"
        << "\n price = $199\n"
        << "                   Flight ID:340990856\n"
        << "--------------------------------------\n\n\n";

    cout << "--------------FLIGHT #3---------------\n"
        << departure << " to " << destination
        << "\nTimings:   05:00 PM -- 011:30 PM"
        << "\n price = $500\n"
        << "                  Flight ID:3409245524\n"
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
    bol = 0;
    cout << "===================Please Select Your DEPARTURE=================================\n";
    for (int i = 0;i < ideparture.size();i++)
    {
        cout << i + 1 << ". " << ideparture[i];
        cout << endl;
    }
    cout << "\n\tEnter City Name: ";
    cin >> departure;
    cin.ignore();

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
        break;
    case 0:
        cout << "\n\tError Invalid Input Please try again";
        exit(0);
    default:
        exit(0);
    }

    
    system("cls");
    bol = 0;
    cout << "===================Please Select Your DESTINATION================================\n";
    for (int i = 0;i < idestination.size() ;i++)
    {
        cout << i + 1 << ". " << idestination[i];
        cout << endl;
    }
    cout << "\n\tEnter City Name: ";
    cin >> destination;
    cin.ignore();

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
        break;
    case 0:
        cout << "\n\tError Invalid Input Please try again";
        exit(0);
    default:
        exit(0);
    }

    system("cls");


    cout << "======================================Available Flights=======================================\n";
    cout << "--------------FLIGHT #1---------------\n"
        << departure << " to " << destination
        << "\nTimings:   02:00 PM -- 09:30 PM"
        << "\n price = $350\n"
        << "                   Flight ID:340995788\n"
        << "--------------------------------------\n\n\n";

    cout << "--------------FLIGHT #2---------------\n"
        << departure << " to " << destination
        << "\nTimings:   01:00 AM -- 08:30 AM"
        << "\n price = $199\n"
        << "                   Flight ID:340990856\n"
        << "--------------------------------------\n\n\n";

    cout << "--------------FLIGHT #3---------------\n"
        << departure << " to " << destination
        << "\nTimings:   05:00 PM -- 011:30 PM"
        << "\n price = $500\n"
        << "                  Flight ID:3409245524\n"
        << "--------------------------------------\n\n\n";

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
    fstream bookingFile("BookingDetails.txt"); 

    if (!bookingFile)
    {
        cout << "Error: Unable to open file for writing!";
        exit(1);
    }

    cout << "Enter number of seats: ";
    cin >> seat;
    cin.ignore();

    if (p == 2 && seat != 5)
    {
        cout << "ONLY 5 SEATS ALLOWED IN FAMILY PACKAGE";
        exit(0);
    }
    if (p == 3 && seat != 2)
    {
        cout << "ONLY 2 SEATS ALLOWED IN HONEYMOON PACKAGE";
        exit(0);
    }
 
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

    
        bookingFile << "Passenger #" << i << " :\n";
        bookingFile << "Name   : " << name << "\n";
        bookingFile << "Age    : " << x << "\n";
        bookingFile << "Gender : " << g << "\n";
        bookingFile << "Seat # : " << seatN.back() << "\n\n";
        
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

bookingFile.close(); 
    
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

    cout << "Package: ";
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
        exit(0);
    } 
}

void tickets()
{
    system("cls");
    cout << "===================YOUR TICKETS======================\n\n";
    if (!userNames.empty())
    {
        for (int i = 0;i < userNames.size();i++)
        {
            cout << "|----------------TICKET #"<<i+1<<"-----------------------|\n";
            cout << "Name #" << i + 1 << ": " << userNames[i];
            cout << endl;
            cout << "age    " << ": " << age[i];
            cout << endl;
            cout << "gender " << ": " << gender[i];
            cout << endl;
            cout << "Seat # " << ": " << seatN[i];
            cout << endl;
            cout << "FROM: "<< departure << "\tTO: " <<destination;
            cout << endl;
            cout << "                             Flight ID:3409245524\n";
            cout << "price = $500(VAT inclusive)\n";
            cout << "|------------------------------------------------|";

            cout << "\n\n\n";
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
    cout << setfill(' ') << left << setw(10) << "Flight" << setw(20) << "Departure" << setw(20) << "Arrival" << endl;

    for (int i = 0; i < idestination.size();i++)
    {
            cout << left << setw(10) << i + 1 << setw(20) << ideparture[i] << setw(20) << idestination[i] << endl;
    }

    cout << setw(45) << setfill('=') << "" << endl;
    
    
    cout << "\n\tSelect Flight Number: ";
    cin >> c2;
    
    if (c2>1 && c2<idestination.size())
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