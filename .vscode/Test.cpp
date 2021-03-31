#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0])
        {
            nums.insert(nums.begin(), target);
            return 0;
        }   
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i - 1] <= target && target <= nums[i])
            {
                nums.insert(nums.begin() + i, target);
                return i;
            }
        }   
        nums.push_back(target);
        return nums.size() - 1;    
    }

int main()
{
    vector<int> nums= {1 ,3, 5, 6};
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
    cout << endl << searchInsert(nums, 7) <<endl;
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
    return 0;
}