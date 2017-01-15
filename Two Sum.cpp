
class Solution {
public:
    // My solution
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        vector<int> a;
        while( i < nums.size())
        {

            j=i+1;
            while( j < nums.size())
            {
                if(nums[i]+nums[j]==target)
                {
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
                j++;
                    
                }
                i++;
            }
            return a;
        }
        
        
 // Top solution Using Hash_map
    vector<int> twoSum1(vector<int> &numbers, int target)
    {
        //Key is the number and value is its index in the vector.
      unordered_map<int, int> hash;
      vector<int> result;
      for (int i = 0; i < numbers.size(); i++) {
        int numberToFind = target - numbers[i];

                //if numberToFind is found in map, return them
        if (hash.find(numberToFind) != hash.end()) {
                        //+1 because indices are NOT zero based
          result.push_back(hash[numberToFind] + 1);
          result.push_back(i + 1);			
          return result;
        }

                //number was not found. Put it in the map.
        hash[numbers[i]] = i;
      }
      return result;
    }
        
        
};

