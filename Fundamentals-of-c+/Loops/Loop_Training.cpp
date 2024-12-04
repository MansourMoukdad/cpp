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
    int result = 0;
    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    int numSize = sizeof(nums) / sizeof(nums[0]);
    
    for (int i = 0; i < numSize; i++ )
    {
        if(nums[i] > 0 && nums[i] % 2 == 0)
        {
            result += nums[i];
            // cout << result + nums[i] << "\n";
        }
    }
    cout << "Result Is " << result << "\n";
    return 0;
}