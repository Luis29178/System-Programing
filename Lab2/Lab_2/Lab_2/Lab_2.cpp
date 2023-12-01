#include <iostream>
#include <Windows.h>
#include <string>
#include "Console.h"


std::string intToBianaryString(unsigned int num, int bits);
unsigned int TurnOn(unsigned int bit);
unsigned int TurnOff(unsigned int bit);
unsigned int Toggle(unsigned int bit);
unsigned int Negate(unsigned int bit);
void SetCursorPosition(int x, int y);
void BitDraw(int carrot, unsigned int bite);
int LeftShift(int pos);
int RightShift(int pos);



int main()
{
    unsigned int bite = 0;      
    //bite |= TurnOn(6);                                            
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite |= TurnOn(3);                                     
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite |= TurnOn(11);
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite |= TurnOn(5);
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite |= TurnOn(9);
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite |= TurnOn(3);
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite &= TurnOff(6);                                    
    //std::cout << intToBianaryString(bite, 16) << std::endl;//> is all for testing but has the external operators for the final prudect ie the '*'=
    //bite ^= Toggle(3);                                     
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite ^= Toggle(3);                                 
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //bite = Negate(bite);
    //std::cout << intToBianaryString(bite, 16) << std::endl;
    //system("pause");
    unsigned int carrot = 24;// 25 is the last bit when line starts at 0,0
    unsigned int bit = 0;
    BitDraw(carrot, bite);
    while (true)
    {

        while (true)
        {

            if (GetAsyncKeyState(VK_F1))
            {
                bite |= TurnOn(bit);
                BitDraw(carrot, bite);
                break;
            }
            if (GetAsyncKeyState(VK_F2))
            {
                bite ^= Toggle(bit);
                BitDraw(carrot, bite);
                break;
            }
            if (GetAsyncKeyState(VK_F3))
            {
                bite &= TurnOff(bit);
                BitDraw(carrot, bite);
                break;
            }
            if (GetAsyncKeyState(VK_F4))
            {
                bite = Negate(bite);
                BitDraw(carrot, bite);
                break;
            }
            if (GetAsyncKeyState(VK_LSHIFT))
            {
                carrot = LeftShift(carrot);
                bit = RightShift(bit);
                BitDraw(carrot, bite);
                break;
            }
            if (GetAsyncKeyState(VK_RSHIFT))
            {
                carrot = RightShift(carrot);
                bit = LeftShift(bit);
                BitDraw(carrot, bite);
                break;
            }
        }
        Sleep(100);
    }
    
    
}
unsigned int TurnOn(unsigned int bit)
{
    unsigned int x;
     x = 1 << bit;
     return x;
}
unsigned int TurnOff(unsigned int bit)
{
    unsigned int x;
    x = ~(1 << bit);
    return x;
}
unsigned int Toggle(unsigned int bit)

{
    unsigned int x = 0;
    x = x ^ (1 << bit);
    return x;
}
unsigned int Negate(unsigned int bite)
{
    unsigned int x;
    x = ~bite;
    return x;
}
int LeftShift(int pos)
{
    if (pos < 25)
        pos--;

    return pos;
}
int RightShift(int pos)
{
    if(pos >= 0)
        pos++;

    return pos++;
}
void BitDraw(int carrot, unsigned int bite)
{
    system("CLS");
    std::cout << "Bits:    " << intToBianaryString(bite, 16) << "      Decimal Value:  " << bite << std::endl;

    SetCursorPosition(carrot, 1);
    std::cout << "^" << std::endl;
}

std::string intToBianaryString(unsigned int num, int bits)
{
    std::string bitText = "";
    for (int i = 0; i < bits; i++)
    {
        
        bitText = std::to_string(num % 2) + bitText;
        num = num / 2;
    }

    return bitText;
}

void SetCursorPosition(int x, int y) // set the positon of the curser in accordance to the pos declared by the left and right shifts.
{
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { x, y };
    SetConsoleCursorPosition(output, pos);
}


//void intToBianaryString(unsigned int num, int bits)// will also place a 1 for negative 0 for positives in teh last possible bit+1
//{
//    
//    char* text= new char[bits + 1];
//    text[bits] = '\0';
//    
//    for (int i = bits; i >= 0; i--)
//    {
//        if (num % 2 == 0)
//        {
//            text[i] = '0';
//        }
//        else
//        {
//            text[i] = '1';
//        }
//        num = num / 2;       
//    }
//    for (int i = 0; i <= bits; i++)
//    {
//        std::cout << text[i];
//    }
//
//}