// RomanToInteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
                                               
int main()
{
    //RomanValues
    constexpr int I_Value = 1;               
    constexpr int V_Value = 5;                      
    constexpr int X_Value = 10;
    constexpr int L_Value = 50;
    constexpr int C_Value = 100;
    constexpr int D_Value = 500;
    constexpr int M_Value = 1000;

    while (true)
    {
    string InputRomanText;         
    int IntegerTotal = 0;
    char LastCharacter = 0;

    cout << "Enter Roman Number, please. \n ";

    getline(cin, InputRomanText);  
    
    for (const char ch : InputRomanText)
    {
      switch (ch)            
        {
            case 'I':
                IntegerTotal += I_Value;
                break;

            case 'V':
                if (LastCharacter == 'I')
                {
                    IntegerTotal += V_Value;
                    IntegerTotal -= 2*I_Value;
                    break;
                }
                else
                {
                    IntegerTotal += V_Value;
                    break;
                }

            case 'X':
                if (LastCharacter == 'V')
                {
                    IntegerTotal += X_Value;
                    IntegerTotal -= 2 * V_Value;
                    break;
                }
                else if (LastCharacter == 'I')
                {
                    IntegerTotal += X_Value;
                    IntegerTotal -= 2 * I_Value;
                    break;
                }
                else
                {
                    IntegerTotal += X_Value;
                    break;
                }

            case 'L':
                if (LastCharacter == 'X')
                {
                    IntegerTotal += L_Value;
                    IntegerTotal -= 2 * X_Value;
                    break;
                }
                else
                {
                    IntegerTotal += L_Value;
                    break;
                }
            case 'C':
                if (LastCharacter == 'L')
                {
                    IntegerTotal += C_Value;
                    IntegerTotal -= 2 * L_Value;
                    break;
                }
                else if (LastCharacter == 'X')
                {
                    IntegerTotal += C_Value;
                    IntegerTotal -= 2 * X_Value;
                    break;
                }
                else
                {
                    IntegerTotal += C_Value;
                    break;
                }

            case 'D':
                if (LastCharacter == 'C')
                {
                    IntegerTotal += D_Value;
                    IntegerTotal -= 2 * C_Value;
                    break;
                }
                else
                {
                    IntegerTotal += D_Value;
                    break;
                }

            case 'M':
                if (LastCharacter == 'D')
                {
                    IntegerTotal += M_Value;
                    IntegerTotal -= 2 * D_Value;
                    break;
                }
                else
                {
                    IntegerTotal += M_Value;
                    break;
                }


            default:
                break;
        }         
      LastCharacter = ch;
    }

        cout << "Total number of characters is: " << IntegerTotal << "\n";
   }

   return 0;

 }


