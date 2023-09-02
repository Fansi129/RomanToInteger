// RomanToInteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
                                                //If you can make something constant, make it constant. Constantst should be CAPITALAZIED
int main()
{
    //RomanValues
    constexpr int I_Value = 1;                  //Constant separately outside of while loop
    constexpr int V_Value = 5;                      
    constexpr int X_Value = 10;
    constexpr int L_Value = 50;
    constexpr int C_Value = 100;
    constexpr int D_Value = 500;
    constexpr int M_Value = 1000;


    string InputRomanText;              //TODO Put everything for while loop - Condition should be Inputed Roman text
    int IntegerTotal = 0;
    char LastCharacter = 0;

    cout << "Enter Roman Number, please. \n ";

    getline(cin, InputRomanText);       //Better for text inputs


    vector<char> CharactersArray; // dynamic array type apparently 
    CharactersArray.reserve(InputRomanText.size()); //When creating vector, you should reserve amount of memory it is supposed to use.

    for (const char ch : InputRomanText) // Here I am separating InputRomanText string to characters and storing them
    {
        CharactersArray.push_back(ch); //This adds one element to array
    }
    
    
    for (const char ch : CharactersArray) 
    {
      switch (ch)            
        {
            case 'I':
                IntegerTotal += I_Value;
                LastCharacter = ch;
                break;

            case 'V':
                if (LastCharacter == 'I')
                {
                    IntegerTotal += V_Value;
                    IntegerTotal -= 2*I_Value;
                    LastCharacter = ch;             //TODO Move after switch statement
                    break;
                }
                else
                {
                    IntegerTotal += V_Value;
                    LastCharacter = ch;
                    break;
                }

            case 'X':
                if (LastCharacter == 'V')
                {
                    IntegerTotal += X_Value;
                    IntegerTotal -= 2 * V_Value;
                    LastCharacter = ch;
                    break;
                }
                else if (LastCharacter == 'I')
                {
                    IntegerTotal += X_Value;
                    IntegerTotal -= 2 * I_Value;
                    LastCharacter = ch;
                    break;
                }
                else
                {
                    IntegerTotal += X_Value;
                    LastCharacter = ch;
                    break;
                }

            case 'L':
                if (LastCharacter == 'X')
                {
                    IntegerTotal += L_Value;
                    IntegerTotal -= 2 * X_Value;
                    LastCharacter = ch;
                    break;
                }
                else
                {
                    IntegerTotal += L_Value;
                    LastCharacter = ch;
                    break;
                }

            case 'C':                               //TODO Add values here
                IntegerTotal += C_Value;
                break;

            case 'D':
                IntegerTotal += D_Value;
                break;

            case 'M':
                IntegerTotal += M_Value;
                break;                  

            default:
                break;
        }                        
    }
                                     //TODO Look into functions, parse/find in string 
                                   //TODO   Mesure performance by start and end time library "chrono"
                                    //TODO  Scanning paterns - study ->Probably bad performance

        cout << "Total number of characters is: " << IntegerTotal << "\n";

        main();     //BAD 


 }


