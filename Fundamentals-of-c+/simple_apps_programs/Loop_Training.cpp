/*
  Loop
  - Compare
  --- For => Specific Number Of Loops
  --- While => Loop As Long Condition Is True
  --- Do While => Always Execute Once

  Create Three Apps
  -- Count Positive & Even Numbers Only
  -- Guess The Number
  -- Reversed Elements From User
*/

#include <iostream>
using namespace std;

int main()
{
    // int result = 0;
    // int nums[] = {10, 20, -20, 13, 30, -30, 40};
    // int numSize = sizeof(nums) / sizeof(nums[0]);
    
    // for (int i = 0; i < numSize; i++ )
    // {
    //     if(nums[i] > 0 && nums[i] % 2 == 0)
    //     {
    //         result += nums[i];
    //         // cout << result + nums[i] << "\n";
    //     }
    // }
    // cout << "Result Is " << result << "\n";



    // // Guess The Number

    // int guessNumber = 7;
    // int guessTries = 0;
    // int choose;
    // cout << "Please Guess The Number Between 1 and  10 \n";
    // while (true)
    // {
    //     cin >> choose;
    //     if(choose == guessNumber) 
    //     {
    //         cout << "Great, You Guess The Number \n";
    //         break;
    //     } else 
    //     {
    //         if(choose != guessNumber)
    //         {
    //             cout << "Sorry, Wrong Guess, Try Again \n";
    //             guessTries++;
    //         }
    //     }
    //     if(guessTries == 3) {
    //         cout << "The Number Is 7 \n";
    //         break;
    //     }
    // }


    // Reversed Elements From User

    int vals[5];
    int inp;
    cout << "Type 5 Number To Reverse \n";
    for(int i = 4; i > -1; i--) 
    {
        cin >> inp;
        vals[i] = inp;
    }
    cout << "\n=======================\n";
    for(int i = 0; i < 5; i++)
    {
        cout << vals[i] << "\n";
    }
    
    return 0;
}