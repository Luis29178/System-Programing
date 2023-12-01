// Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


using namespace std;// std::XXXXXX <----- can replace this 


#include <iostream>


    void p1_1(char f,char l, int age);
    void p1_2();
    void p1_3();
    void p1_4();
    void p1_5();
    void p1_6();
    void p1_7();
    bool p1_8(int x,int y);
    void p1_9();
    void p1_10();
    int intinputcheck();
    void pause();

int main()
{
    
    cout << "What are your initials?";
    char initial[2];
    cin.getline(initial,2);
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    system("CLS");
    cout << "How old are you?";
    int age;
    age = intinputcheck();
    system("CLS");
    p1_1(initial[0],initial[1],age);
    pause();

    system("CLS");
    p1_2();
    pause();

    system("CLS");
    p1_3();
    pause();

    system("CLS");
    p1_4();
    pause();

    system("CLS");
    p1_5();
    pause();

    system("CLS");
    p1_6();
    pause();
    
    system("CLS");
    p1_7();
    pause();

    system("CLS");
    srand(time(NULL));
    cin.clear();
    
    int rnadom[3] = {};
    for (size_t i = 0; i < 3; i++)
    {
        rnadom[i] = rand();
    }
    cout << "Please enter a divisor: ";
    int sevdiv = intinputcheck();
    for (size_t i = 0; i < 3; i++)//p1_8 here
    {
        bool divsev = p1_8(sevdiv, rnadom[i]);
        if (divsev)
        {
            cout << rnadom[i] << "        -yes"<<endl;
        }
        else
        {
            cout << rnadom[i] << "        -no"<<endl;
        }
    }
    pause();

    system("CLS");
    p1_9();
    pause();

    system("CLS");
    p1_10();
    pause();




}
 void p1_1( char f , char l, int age)
{
    std::cout << f << l << " did you know You're at least " << age * 365 << " days old?";
}
 void p1_2()
 {
     int notchar[5];     
     int x = 5;
     for (int i = 0; i < 5; i++)
     {     
         
         cout << "Please input a number: ";
         while (true)
         {
        
             cin >> notchar[i];
             if (cin.fail())
             {
                 cin.clear();
                 cin.ignore(INT_MAX,'\n');                 
                 cout << "pLEasE iNPuT a NuMBer1. "<<endl;
                 continue;
             }
             cin.ignore(INT_MAX, '\n');
             break;
         }
     }
     cout << "\nYou entered: ";
     for (size_t i = 0; i < 5; i++)
     {
             cout << notchar[i];
     }
     
 }
 void p1_3()
 {

     int a;
     int b;
     int c;
     
     
     cout << "Please input integer for A: ";
     a = intinputcheck();
     cout << "Please input integer for B: ";
     b = intinputcheck();
     cout << "Please input integer for C: ";
     c = intinputcheck();
         
     
     int equation1 = a + 1 * b + 2 - c;
     int equation2 = (a + 1) * (b + 2) - c;
     cout << "\n" <<a << " + 1 * " << b << " + 2 - " <<c <<" = "<<equation1<<'\n';
     cout << "\n(" << a << " + 1) * (" << b << " + 2) - " <<c <<" = "<<equation2<<endl;
 }
 void p1_4()
 {
     cout << "           Table f integral variable type range in C++"<<endl;
     cout << "\n Type                        Range"<<endl;
     cout << "--------------------------------------------------------------------------"<<endl;
     cout << "  ushort                       0" <<" to "<< USHRT_MAX << endl;
     cout << "  short                        "<< SHRT_MIN << " to " << SHRT_MAX << endl;
     cout << "  int                          " << INT_MIN << " to " << INT_MAX << endl;
     cout << "  uint                         0"  << " to " << UINT_MAX << endl;
     cout << "  long                         " << LONG_MIN << " to " << LONG_MAX << endl;
     cout << "  ushort                       0" << " to " << ULONG_MAX << endl;

 }
 void p1_5()
 {
     char test[32] = {};
     cout << "Plese enter your name: ";
     cin.getline(test, 32);
     cout << "\nHello "<<test<<", did you know epstein didint kill himself!";
         
         
 }
 void p1_6()
 {
     int dreadallowed;
     cout << "What is your age: ";
     dreadallowed = intinputcheck();
     system("CLS");
     if (dreadallowed < 16)
     {
         cout << "\nI'm Sorry you're too young for these words. Bey!";
     }
     else
     {
         cout << "\nI saw that pain and disease existed and at the same time that they were void of sense and meaning.\nAmong the men of the rabble I had become a creature of a strange, unknown race, so much so that they had \nforgotten that I had once been part of their world. I had the dreadful sensation that I was not really alive or\nwholly dead. I was a living corpse, unrelated to the world of living people and at the same time deprived of the \noblivion and peace of death.\n\t--Sadegh Hedayat";
     }
     

 }
 void p1_7()
 {
     int evencheck;
     cout << "Plese enter an even number: ";
     evencheck = intinputcheck();
     cout << '\n';
     if (evencheck % 2 == 0)
     {
         cout << "Nice IQ";
     }
     else
     {
         cout << "How did you mess this up?";
     }

 }
 bool p1_8(int x, int y)
 {
     bool ret;
     if (y % x == 0)
     {
         ret = true;
     }
     else
     {
         ret = false;
     }
     return ret;
 }
 void p1_9()
 {
     enum jobs
     {
         SpaceDeliveryboy=1,
         Spacerabies=2,
         Oficeclerk=3,
         twetyfivestargeneral=4,
         scuffy=5

     };
     cout << "Hi this im your Fate Assignment Officer\nand today we will se what job fits you the best, take a look"<<endl;

     cout << "\n1) SD35600-D\n2) MD00001-A\n3) OC9999999978799545221419-D\n4) O-31-X\n5) SC777-$\n";
     cout << "\n> ";    
     jobs choice = static_cast<jobs>(intinputcheck());
     cout << "\n\n";
     switch (choice)
     {
     case SpaceDeliveryboy:
         cout << "Ohh, uhhm, starting tomorow you will be a delivery boy. ";
         break;
     case Spacerabies:
         cout << "I belive it says your spacerabies positive!?";
         break;
     case Oficeclerk:
         cout << "Your an office clerk. Wooo!";
         break;
     case twetyfivestargeneral:
         cout << "Recruit, *Solute's as soldiers drag you way*";
         break;
     case scuffy:
         cout << "Leela, likes you.";
         break;
     default:
         cout << "You whant to be a hobo?! Oookay.";
         break;
     }

 }
 void p1_10()
 {
     srand(time(NULL));
     
     int enemys = 0;
     cout << "Difficulty Levels\n1)   Easy\n2)   Medium\n3)   Hard\n\nChoose your fate: ";
     int choice = intinputcheck();
     switch (choice)
     {
     case 1:
         while (enemys < 1)
         {
             enemys = rand() % 26;
         }
         cout << "You haveto fight " << enemys <<" enemies.";
         break;
     case 2:
         while (enemys < 25)
         {
             enemys = rand() % 51;
         }
         cout << "You haveto fight " << enemys << " enemies.";
         break;
     case 3:
         while(enemys<50)
         {
             enemys = rand() % 101;
         }
         cout << "You haveto fight " << enemys << " enemies.";
         break;
     default:
         break;
     }

 }

 int intinputcheck()
 {
     int x;
     while (true)
     {
         cin >> x;
         if (cin.fail())
         {
             cin.clear();
             cin.ignore(INT_MAX, '\n');
             cout << "Invalid" << endl;
             continue;
         }
         cin.ignore(INT_MAX, '\n');
         break;

     }
     return x;
 }
 void pause()
 {
     cout << "\n\n Press any key to continue...";
     getchar();
 }