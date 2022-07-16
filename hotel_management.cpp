
//    10 are veg and 10 are non-veg

// veg----
//     0-Chhole Bhature
//     1-Pav Bhaaji
//     2-Daal Baati Churma
//     3-Dum Aloo
//     4-Makke Di Roti With Sarson Da Saag
//     5-Dosa
//     6-Idli Sambhar
//     7-Samosa
//     8-Dhokla
//     9-Mushroom Matar

//   non-veg
//   10-Rogan Josh
//   11-Hyderabadi Dum Biryani
//   12-Egg Curry
//   13-Butter Chicken
//   14-Mutton Curry
//   15-Mughal Mutton Curry
//   16-Chicken Tikka
//   17-Keema Matar
//   18-Murgh Musallam
//   19-village chicken

// drinks
// 20-tea
// 21-coffee
// 22-cold drinks

#include <iostream>
#include <conio.h>
using namespace std;

class h_management
{
private:
    int Room_total = 50;

public:
    string items_name[23];

    void main_menu()
    {
        system("cls");
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|                                                                |" << endl;
        cout << "\t\t\t\t|                            MAIN MENU                           |" << endl;
        cout << "\t\t\t\t|                                                                |" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t 1)Check in  " << endl;
        cout << "\t\t\t\t 2)Food Menu  " << endl;
        cout << "\t\t\t\t 3)Order Foods  " << endl;
        cout << "\t\t\t\t 4)Check out  " << endl;
        cout << "\n\t\t\t\t Enter your choice---->   ";
    m:
        int cho=0;
        cin >> cho;
        if (cho == 1 || cho == 2 || cho == 3 || cho == 4)
        {
           switch (cho)
        {
        case 1:
            cout << "\t\t\t\t How many Rooms you want to book-->";
            int rn;
            cin >> rn;
            check_in(rn);
            break;

        case 2:
            cout << "\n\t\t\t\t We have 10 veg dishes ,10 non-veg dishes and Tea ,coffee and cold drinks" << endl;
            menu();

            break;

        case 3:
             system("cls");
            cout << "\n\t\t\t\t What are you want to order .\n\t\t\t\t enter item code--->";
            int item_code;
            cin >> item_code;
            cout << "\t\t\t\tYour " << items_name[item_code - 1] << " will be ready ASAP O_O" << endl;
            cout << "\t\t\t\t click to go main menu---->1" << endl;
            int any;
            cin >> any;
            if (any == 1)
            {
                  main_menu();
            }
            break;

        case 4:
            cout << "\n\t\t\t\t How many room you have---> ";
            int u_have_rooms;
            cin >> u_have_rooms;
            check_out(u_have_rooms);
            break;
        }
        }

        else
        {
            cout << "\n\t\t\t\tEnter correct choice" << endl;
            goto m;
        }
    }

    void check_in(int rn)
    {
        system("cls");
        if (rn < Room_total)
        {
            cout << "You have booked " << rn << " room..." << endl;
            Room_total -= rn;
        }

        else
        {
            cout << "\n\t\t\t\tSORRY :( \n\t\t\t\t We have not " << rn << "rooms at this time.\n\t\t\t\t we only have " << Room_total << "at this time." << endl;
        }

        cout << "\t\t\t\t click to go main menu---->1" << endl;
        int any;
        cin >> any;
        if (any == 1)
        {
            main_menu();
        }
    }

    void menu()
    {
        system("cls");
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|                                VEG                             |" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|   1- Chhole Bhature                                            |" << endl;
        cout << "\t\t\t\t|   2- Pav Bhaaji                                                |" << endl;
        cout << "\t\t\t\t|   3- Daal Baati Churma                                         |" << endl;
        cout << "\t\t\t\t|   4- Dum Aloo                                                  |" << endl;
        cout << "\t\t\t\t|   5- Makke Di Roti With Sarson Da Saag                         |" << endl;
        cout << "\t\t\t\t|   6-  Dosa                                                     |" << endl;
        cout << "\t\t\t\t|   7- Idli Sambhar                                              |" << endl;
        cout << "\t\t\t\t|   8- Samosa                                                    |" << endl;
        cout << "\t\t\t\t|   9- Dhokla                                                    |" << endl;
        cout << "\t\t\t\t|   10-Mushroom Matar                                            |" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|                             NON-VEG                            |" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|  11- Rogan Josh                                                |" << endl;
        cout << "\t\t\t\t|  12- Hyderabadi Dum Biryani                                    |" << endl;
        cout << "\t\t\t\t|  13- Egg Curry                                                 |" << endl;
        cout << "\t\t\t\t|  14- Butter Chicken                                            |" << endl;
        cout << "\t\t\t\t|  15- Mutton Curry                                              |" << endl;
        cout << "\t\t\t\t|  16- Mughal Mutton Curry                                       |" << endl;
        cout << "\t\t\t\t|  17- Chicken Tikka                                             |" << endl;
        cout << "\t\t\t\t|  18- Keema Matar                                               |" << endl;
        cout << "\t\t\t\t|  19- Murgh Musallam                                            |" << endl;
        cout << "\t\t\t\t|  20-Chicken Biryani                                            |" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|                             Drinks                             |" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|  21- TEA                                                       |" << endl;
        cout << "\t\t\t\t|  22- Coffee                                                    |" << endl;
        cout << "\t\t\t\t|  23- Cold Drinks                                               |" << endl;
        cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
        cout << "\t\t\t\t click to go main menu---->1" << endl;
        int any;
        cin >> any;
        if (any == 1)
        {
            main_menu();
        }
    }

    void check_out(int u_have_rooms)
    {
          system("cls");
        cout << "\n\t\t\t\t Thanks for visting in our hotel . " << endl;
        Room_total += u_have_rooms;
        cout << "\t\t\t\t click to go main menu---->1" << endl;
        int any;
        cin >> any;
        if (any == 1)
        {
            main_menu();
        }
    }
};

int main()
{
    h_management myHotel;
    int choice;
    int id_num;
    int pass;

    myHotel.items_name[0] = " Chhole Bhature";
    myHotel.items_name[1] = "Pav Bhaaji";
    myHotel.items_name[2] = "Daal Baati Churma";
    myHotel.items_name[3] = "Dum Aloo";
    myHotel.items_name[4] = "Makke Di Roti With Sarson Da Saag";
    myHotel.items_name[5] = "Dosa";
    myHotel.items_name[6] = "Idli Sambhar";
    myHotel.items_name[7] = "Samosa";
    myHotel.items_name[8] = "Dhokla";
    myHotel.items_name[9] = "Mushroom Matar";
    myHotel.items_name[10] = "Rogan Josh";
    myHotel.items_name[11] = "Hyderabadi Dum Biryani";
    myHotel.items_name[12] = "Egg Curry";
    myHotel.items_name[13] = "Butter Chicken";
    myHotel.items_name[14] = "Mutton Curry";
    myHotel.items_name[15] = "Mughal Mutton Curry";
    myHotel.items_name[16] = "Chicken Tikka";
    myHotel.items_name[17] = "Keema Matar";
    myHotel.items_name[18] = "Murgh Musallam";
    myHotel.items_name[19] = "village chicken";
    myHotel.items_name[20] = "tea";
    myHotel.items_name[21] = "coffee";
    myHotel.items_name[22] = "cold drinks";

    cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
    cout << "\t\t\t\t|                                                                |" << endl;
    cout << "\t\t\t\t|                      Welcome to BulBul Hotel                   |" << endl;
    cout << "\t\t\t\t|                                                                |" << endl;
    cout << "\t\t\t\t ----------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\tEnter your Id number ---->";
    cin >> id_num;
    cout << "\t\t\t\tpassword--->";
    cin >> pass;

    if (id_num == 8573 && pass == 4545)
    {

        cout << "\t\t\t\t you are in :)\n\n\n\n"
             << endl;
         
         myHotel.main_menu();

       
    }
    else
    {
        system("cls");
        cout << "\t\t\t\t WRONG ID AND PASSWORD :( \n\n\n\n12" << endl;
        main();
    }

    getch();
    return 0;
}