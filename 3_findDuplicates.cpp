#include <iostream>
using namespace std;

int main()
{
    int nums[7] = {1, 3, 4, 3, 5, 1, 4};
    int res[4];
    int index = 0;
    for (int i = 0; i < 7; ++i)
    {
        int index = abs(nums[i]) - 1; // Get the index corresponding to the number
        if (nums[index] < 0)
        {                 // If the number at index is negative, it means it's seen before
            res[index++]; // Add the duplicate number to the result
        }
        else
        {
            nums[index] = -nums[index]; // Mark the number as seen by negating it
        }
    }
    for(int i=0;i<4;i++){
        cout<<res[i]<<" ";
    }
}