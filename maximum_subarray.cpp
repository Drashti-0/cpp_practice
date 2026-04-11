#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray() {
       int nums[10]={-2,1,-3,4,-1,2,1,-5,4};
        int sum[100];
        int total=0;
        for(int i=0;i<10;i++){
           
                if(nums[i]+nums[i+1]<0){
                    break;
                }

                else if(nums[i]+nums[i+1]>0){
               total=total+sum[i+1];
                    
                }
        }
cout<<total;
    
    }
};
int main(){

    Solution s1;
   
    s1.maxSubArray();
}