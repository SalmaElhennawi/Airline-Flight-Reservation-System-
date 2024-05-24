#include <iostream> //Used for console input and output.
#include <vector>  //Used to store a dynamic list of bookings.
#include <string> //Used to handle various strings in the booking information.
#include <iomanip> //Could be used to format the display of booking information.
#include <algorithm> //Could be used for operations like searching, sorting, or modifying the list of bookings.

using namespace std;

//class called BOOKING to manage flight reservations
class BOOKING {
private:
    // Private member variables to store passenger and flight details
    string name;
    string add;
    string email;
    string mobile;
    int age;
    char gender;
    string departure;
    string arrival;
    string cabinClass;
    string date;
    string ID;
    int ticketNumber; 
    double flight_no;
    string time_depart;
    string time_arrival;

public:
    // Public methods to get and display booking information
    void getInfo(int ticketNum);// Method to get information from user

    void disInfo() const;// Method to display booking information

    void setTicketNumber(int ticketNum) { // Setter for ticket number
        ticketNumber = ticketNum;
    }

    int getTicketNumber() const { // Getter for ticket number
        return ticketNumber;
    }
};

// Method to get booking information from user
void BOOKING::getInfo(int ticketNum) {

    cout << "Enter Passenger's Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter the Address Details: ";
    getline(cin, add);

    cout << "Enter your email address: ";
    getline(cin, email);

    cout << "Enter your Phone Number: ";
    cin >> mobile;

    cout << "Enter your Age: ";
    cin >> age;

    cout << "Enter Gender (M/F): ";
    cin >> gender;

    cout << "Enter ID Number: ";
    cin >> ID;
    cin.ignore();

    cout << "Date of Journey (DD/MM/YYYY): ";
    getline(cin, date);

    // Loop to select cabin class with validation
    int cabinChoice;
    int c = 0;
    do {
        cout << endl;
        cout << "Select Your Cabin Class \n";
        cout << "------------------------\n";
        cout << "1. Economy\n";
        cout << "2. Business\n";
        cout << "3. First Class\n";

        cout << "Enter Your Choice: ";
        cin >> cabinChoice;
        cin.ignore();

        switch (cabinChoice) {
        case 1:
            cabinClass = "Economy";
            c = 0;
            break;
        case 2:
            cabinClass = "Business";
            c = 0;
            break;
        case 3:
            cabinClass = "First Class";
            c = 0;
            break;
        default:
            cout << "Invalid Choice. Please Try Again.\n";
            c = 1;
        }
    } while (c != 0);

    // Loop to select country of departure with validation
    int choice;
    int k = 0;
    do {
        cout << endl;
        cout << "Select Your Country of Departure \n";
        cout << "---------------------------------\n";
        cout << "1. Egypt\n";
        cout << "2. The United States\n";
        cout << "3. China\n";
        cout << "4. Russia\n";
        cout << "5. Canada\n";
        cout << "6. France\n";
        cout << "7. Germany\n";
        cout << "8. Japan\n";
        cout << "9. Saudi Arabia\n";
        cout << "10. United Arab Emirates\n";

        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            departure = "EGYPT";
            k = 0;
            break;
        case 2:
            departure = "THE UNITED STATES";
            k = 0;
            break;
        case 3:
            departure = "CHINA";
            k = 0;
            break;
        case 4:
            departure = "RUSSIA";
            k = 0;
            break;
        case 5:
            departure = "CANADA";
            k = 0;
            break;
        case 6:
            departure = "FRANCE";
            k = 0;
            break;
        case 7:
            departure = "GERMANY";
            k = 0;
            break;
        case 8:
            departure = "JAPAN";
            k = 0;
            break;
        case 9:
            departure = "SAUDI ARABIA";
            k = 0;
            break;
        case 10:
            departure = "UNITED ARAB EMIRATES";
            k = 0;
            break;
        default:
            cout << "Invalid Choice. Please Try Again.\n";
            k = 1;
        }
    } while (k != 0);

    // Loop to select country of arrival with validation
    int p = 0;
    do {
        cout << endl;
        cout << "Select Your Country of Arrival \n";
        cout << "-------------------------------\n";
        cout << "1. Egypt\n";
        cout << "2. The United States\n";
        cout << "3. China\n";
        cout << "4. Russia\n";
        cout << "5. Canada\n";
        cout << "6. France\n";
        cout << "7. Germany\n";
        cout << "8. Japan\n";
        cout << "9. Saudi Arabia\n";
        cout << "10. United Arab Emirates\n";

        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            arrival = "EGYPT";
            p = 0;
            break;
        case 2:
            arrival = "THE UNITED STATES";
            p = 0;
            break;
        case 3:
            arrival = "CHINA";
            p = 0;
            break;
        case 4:
            arrival = "RUSSIA";
            p = 0;
            break;
        case 5:
            arrival = "CANADA";
            p = 0;
            break;
        case 6:
            arrival = "FRANCE";
            p = 0;
            break;
        case 7:
            arrival = "GERMANY";
            p = 0;
            break;
        case 8:
            arrival = "JAPAN";
            p = 0;
            break;
        case 9:
            arrival = "SAUDI ARABIA";
            p = 0;
            break;
        case 10:
            arrival = "UNITED ARAB EMIRATES";
            p = 0;
            break;
        default:
            cout << "Invalid choice. Please Try Again.\n";
            p = 1;
        }
    } while (p != 0);

    cout << endl;
    cout << "Enter the Flight Number:";
    cin >> flight_no;

    cout << "Enter the departure time:";
    cin.ignore();
    cin >> time_depart;

    cout << "Enter the arrival time:";
    cin.ignore();
    cin >> time_arrival;

    setTicketNumber(ticketNum); // Set the ticket number for the booking
}

// Method to display booking information
void BOOKING::disInfo() const {

    int totalLength = 16;

    cout << "+---------------+" << endl;
    cout << "| Name: " << name << endl;
    cout << "+---------------+" << endl;
    cout << "| Address: " << add << endl;
    cout << "+---------------+" << endl;
    cout << "| Email: " << email << endl;
    cout << "+---------------+" << endl;
    cout << "| Mobile: " << mobile << endl;
    cout << "+---------------+" << endl;
    cout << "| Age: " << age << endl;
    cout << "+---------------+" << endl;
    cout << "| Gender: " << gender << endl;
    cout << "+---------------+" << endl;
    cout << "| Departure: " << departure << endl;
    cout << "+---------------+" << endl;
    cout << "| Arrival: " << arrival << endl;
    cout << "+---------------+" << endl;
    cout << "| Cabin Class: " << cabinClass << endl;
    cout << "+---------------+" << endl;
    cout << "| Date: " << date << endl;
    cout << "+---------------+" << endl;
    cout << "| ID: " << ID << endl;
    cout << "+---------------+" << endl;
    cout << "| Flight Number: " << flight_no << endl;
    cout << "+---------------+" << endl;
    cout << "| Time Depart: " << time_depart << endl;
    cout << "+---------------+" << endl;
    cout << "| Time Arrival: " << time_arrival << endl;
    cout << "+---------------+" << endl;
    cout << "| Ticket Number: " << ticketNumber  << endl;
    cout << "+---------------+" << endl;
    cout << endl;
}

vector<BOOKING> bookings; // Vector to store all bookings

int NumOfTicket = 1000; // Initial ticket number

// Function to add a booking
void addBooking() {
    BOOKING booking;
    booking.getInfo(NumOfTicket); // Get booking information
    bookings.push_back(booking); // Add booking to the vector
    NumOfTicket++; // Increment ticket number
    cout << endl << "\t\t\t\t\t\tBooking added successfully!" << endl;
}

// Function to display all bookings
void displayAllBookings() {
    if (bookings.empty()) {
        cout << "No bookings available to display." << endl;
        return;
    }

    for (const auto& booking : bookings) {
        booking.disInfo(); // Display each booking
    }
}

// Function to display booking by ticket number
void displayBookingByTicketNumber() {
    if (bookings.empty()) {
        cout << "No bookings available to display." << endl;
        return;
    }

    int ticketNum;
    cout << "Enter the ticket number: ";
    cin >> ticketNum;

    bool found = false;
    for (const auto& booking : bookings) {
        if (booking.getTicketNumber() == ticketNum) {
            cout << endl;
            booking.disInfo(); // Display booking if ticket number matches
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No booking found with ticket number: " << ticketNum << endl;
    }
}

void cancelBooking() {
    if (bookings.empty()) {
        cout << "No bookings available to cancel." << endl;
        return;
    }

    int ticketNum;
    cout << "Enter the ticket number to cancel: ";
    cin >> ticketNum;

    // Find the booking with the given ticket number
    auto it = find_if(bookings.begin(), bookings.end(), [ticketNum](const BOOKING& booking) {
        return booking.getTicketNumber() == ticketNum; // Compare ticket numbers
        });

    if (it != bookings.end()) {
        bookings.erase(it); // Erase the booking from the vector
        cout << "Booking with ticket number " << ticketNum << " has been canceled." << endl;
    }
}

void displayFlightSchedule() {

    cout << " + -------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | Flight Number  | From                   | To                     |  Departure Time   |  Arrival Time   |  Price |" << endl;
    cout << " + -------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 1-1234         | THE UNITED STATES      | UNITED ARAB EMIRATES   |  08 : 00 AM       |  12 : 00 PM     |  $500  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 2-1234         | THE UNITED STATES      | UNITED ARAB EMIRATES   |  08 : 00 PM       |  12 : 00 AM     |  $500  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 3-1357         | CHINA                  | JAPAN                  |  02 : 00 AM       |  06 : 00 PM     |  $700  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 4-1357         | CHINA                  | JAPAN                  |  02 : 00 PM       |  06 : 00 AM     |  $700  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 5-2468         | SAUDI ARABIA           | EGYPT                  |  04 : 00 AM       |  08 : 00 PM     |  $600  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 6-2468         | SAUDI ARABIA           | EGYPT                  |  04 : 00 PM       |  08 : 00 AM     |  $600  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 7-4321         | CANADA                 | FRANCE                 |  06 : 00 AM       |  10 : 00 PM     |  $800  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 8-4321         | CANADA                 | FRANCE                 |  06 : 00 PM       |  10 : 00 AM     |  $800  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 9-8642         | FRANCE                 | THE UNITED STATES      |  01 : 00 AM       |  05 : 00 PM     |  $400  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 10-8642        | FRANCE                 | THE UNITED STATES      |  01 : 00 PM       |  05 : 0  AM     |  $200  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 11-7531        | EGYPT                  | RUSSIA                 |  03 : 00 AM       |  07 : 00 PM     |  $200  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 12-7531        | EGYPT                  | RUSSIA                 |  03 : 00 PM       |  07 : 00 AM     |  $300  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 13-1212        | JAPAN                  | CANADA                 |  05 : 00 AM       |  09 : 00 PM     |  $800  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 14-1212        | JAPAN                  | CANADA                 |  05 : 00 PM       |  09 : 00 AM     |  $800  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 15-3434        | UNITED ARAB EMIRATES   | SAUDI ARABIA           |  07 : 00 AM       |  11 : 00 PM     |  $650  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 16-3434        | UNITED ARAB EMIRATES   | SAUDI ARABIA           |  07 : 00 PM       |  11 : 0  AM     |  $650  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 17-1313        | GERMANY                | CHINA                  |  09 : 00 AM       |  01 : 00 PM     |  $550  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 18-1313        | GERMANY                | CHINA                  |  09 : 00 PM       |  01 : 00 AM     |  $550  |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 19-2424        | RUSSIA                 | GERMANY                |  10 : 00 AM       |  02 : 00 PM     |  $1000 |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;
    cout << " | 20-2424        | RUSSIA                 | GERMANY                |  10 : 00 PM       |  02 : 00 AM     |  $1000 |" << endl;
    cout << " +--------------- + ---------------------- + ---------------------- + ----------------- + --------------- + ------ +" << endl;

}

string admin_name;
string admin_password;

string staff_name;
string staff_password;

static void admin();
static void stuff();
static void mainMenu();
static void adminMenu();
static void stuffMenu();
static void passengerMenu();
static void pressAnyKeyToContinue();

int password;

static void admin() {
    system("cls");

    cout << "Please enter your admin's name : ";
    cin >> admin_name;

    if (admin_name == "salma_elhennawi")
    {
        if (admin_name == "salma_elhennawi")
        {
            cout << "Password : ";
            cin >> admin_password;

            if (admin_password == "salma123")
            {
                system("cls");

                cout << right << setw(60) << "Hello sir !" << endl;
                adminMenu();
            }
            else
            {
                system("cls");

                cout << setw(50) << "Wrong password !" << endl;

                pressAnyKeyToContinue();
                system("cls");
            }
        }
        else
        {
            system("cls");

            cout << setw(50) << "This admin does not exist !" << endl;

            pressAnyKeyToContinue();

            system("cls");

        }
    }
}

static void stuff()
{
    system("cls");

    cout << "Please enter your staff's name : ";
    cin >> staff_name;

    if (staff_name == "ganah_hassan" || staff_name == "mena_walid" || staff_name == "hanen_misara")
    {
        if (staff_name == "ganah_hassan")
        {
            cout << "Password : ";
            cin >> staff_password;

            if (staff_password == "ganah123")
            {
                system("cls");

                cout << right << setw(60) << "Hello !" << endl;
                stuffMenu();
            }
            else
            {
                system("cls");

                cout << setw(50) << "Wrong password !" << endl;

                pressAnyKeyToContinue();
                system("cls");
            }
        }
        else if (staff_name == "mena_walid")
        {
            cout << "Password : ";
            cin >> staff_password;

            if (staff_password == "mena123")
            {
                system("cls");

                cout << right << setw(60) << "Hello !" << endl;
                stuffMenu();
            }

            else
            {
                system("cls");

                cout << setw(50) << "Wrong password !" << endl;

                pressAnyKeyToContinue();
                system("cls");
            }
        }
    }
    else if (staff_name == "hanen_misara")
    {
        cout << "Password : ";
        cin >> staff_password;

        if (staff_password == "hanen123")
        {
            system("cls");

            cout << right << setw(60) << "Hello !" << endl;
            stuffMenu();
        }

        else
        {
            system("cls");

            cout << setw(50) << "Wrong password !" << endl;

            pressAnyKeyToContinue();
            system("cls");
        }
    }

    else
    {
        system("cls");

        cout << setw(50) << "This staff does not exist !" << endl;

        pressAnyKeyToContinue();

        system("cls");

    }
}

static void adminMenu() {
    int choice;

    system("cls");
    while (true) {
        cout << "\t\t\t\t\t     How Can I Help You Sir ?" << endl << endl;
        cout << " 1-Display flights schedule \n";
        cout << " 2-Book reservation \n";
        cout << " 3-Display passenger personal info \n";
        cout << " 4-Cancel reservation \n";
        cout << " 5-Display All Bookings \n";
        cout << " 6-Go to main menu" << endl;
        cout << " 7-Exit" << endl << endl;

        cout << " Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displayFlightSchedule();
            pressAnyKeyToContinue();
            break;
        case 2:
            addBooking();
            pressAnyKeyToContinue();
            break;
        case 3:
            displayBookingByTicketNumber();
            pressAnyKeyToContinue();
            break;
        case 4:
            cancelBooking();
            pressAnyKeyToContinue();
            break;
        case 5:
            displayAllBookings();
            pressAnyKeyToContinue();
            break;
        case 6:
            return;
        case 7:
            exit(0);
        default:
            system("cls");
            cout << "\tInvalid input.." << endl;
            break;
        }
    }
}

static void stuffMenu() {
    int choice;

    system("cls");
    while (true) {
        cout << "\t\t\t\t\t     How Can I Help You Sir ?" << endl << endl;
        cout << " 1-Display flights schedule \n";
        cout << " 2-Book reservation \n";
        cout << " 3-Display passenger personal info \n";
        cout << " 4-Cancel reservation \n";
        cout << " 5-Go to main menu" << endl;
        cout << " 6-Exit" << endl << endl;

        cout << " Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displayFlightSchedule();
            pressAnyKeyToContinue();
            break;
        case 2:
            addBooking();
            pressAnyKeyToContinue();
            break;
        case 3:
            displayBookingByTicketNumber();
            pressAnyKeyToContinue();
            break;
        case 4:
            cancelBooking();
            pressAnyKeyToContinue();
            break;
        case 5:
            return;
        case 6:
            exit(0);
        default:
            system("cls");
            cout << "\tInvalid input.." << endl;
            break;
        }
    }
}

static void passengerMenu() {
    int choice;

    system("cls");
    while (true) {
        cout << "\t\t\t\t\t\tHello Dear Passenger!" << endl;
        cout << "\t\t\t\t ~You Can Book Online Now Yourself Without Our Help~" << endl;
        cout << "\t\t\t\t   Book your Flight tickets at affordable prices $" << endl << endl;
        cout << " 1-Display flights schedule \n";
        cout << " 2-Book reservation \n";  
        cout << " 3-Display passenger personal info \n";
        cout << " 4-Go to main menu" << endl;
        cout << " 5-Exit" << endl << endl;

        cout << " Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displayFlightSchedule();
            pressAnyKeyToContinue();
            break;
        case 2:
            addBooking();
            pressAnyKeyToContinue();
            break;
        case 3:
            displayBookingByTicketNumber();
            pressAnyKeyToContinue();
            break;
        case 4:
            return;
        case 5:
            exit(0);
        default:
            system("cls");
            cout << " Invalid input.." << endl;
            break;
        }
    }
}

static void mainMenu() {
    int choise;
    while (true) {

        system("cls");

        cout << "\t\t\t\t <><><><><><><><><><><><><><><><><><><><><><><" << endl;
        cout << "\t\t\t\t| Welcom To Airline Flight Reservation System |" << endl;
        cout << "\t\t\t\t <><><><><><><><><><><><><><><><><><><><><><><" << endl << endl << endl;

        cout << " ==== M A I N  M E N U ====" << endl << endl;
        cout << " [1] Admin" << endl;
        cout << " [2] Stuff" << endl;
        cout << " [3] Passenger" << endl;
        cout << " [4] Exit" << endl << endl;

        cout << " Enter Your Choice: ";
        cin >> choise;

        if (choise == 1) {
            admin();
        }
        else if (choise == 2) {
            stuff();
        }
        else if (choise == 3) {
            passengerMenu();
        }
        else if (choise == 4) {
            exit(0);
        }
        else {
            system("cls");
            cout << "Invalid input.." << endl;
        }
    }
}

int main()
{
   mainMenu();
}

// Function to pause the program and wait for the user to press any key to continue
static void pressAnyKeyToContinue()
{
    cout << endl << endl;
    cout << "Press any key to continue...";

    cin.ignore(); // Ignore any leftover characters in the input buffer
    cin.get(); // Wait for the user to press a key

    system("cls");
}