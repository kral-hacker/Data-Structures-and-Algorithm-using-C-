//Largest divisible set;
#include "iostream"
using namespace std;
#include "vector"
vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector <int> arr;
        int size = nums.size();
        int i = 0;
        int j = 1;
        while(i<size||j<size){
            if(nums[i]%nums[j]==0||nums[j]%nums[i]==0){
                arr.push_back(nums[i]);
                arr.push_back(nums[j]);
                i++;
                j++;
            }
        }
        return arr;
    }

int main(){
    vector <int> nums{1,2,3};
    vector<int> arr = largestDivisibleSubset(nums);
    for(auto i : arr){
        cout<<i<<" ";
    }
}