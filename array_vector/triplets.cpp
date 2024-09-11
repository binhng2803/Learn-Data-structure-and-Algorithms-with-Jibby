/*
Given an array containiing N numbers and an number S denoting a target sum.
Find all distinct integers that can add up to form target sum.
The numbers in each triplet should be ordered in ascending order, 
and triplets should be ordered too.
Return empty array if no such triplet exists.

Input:
array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 15]
targetSum = 18

Output:
[
    [1, 2, 15]
    [3, 4, 11]
    ...
    [4, 5, 9]
    [5, 6, 7]
]
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> triplets(vector<int> arr, int targetSum){
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;

    for (int i=0; i<arr.size()-2; i++){
        int l = i+1;
        int r = arr.size()-1;
        while(l<r){
            int currentSum = arr[i];
            currentSum += arr[l];
            currentSum += arr[r];

            if (currentSum == targetSum){
                result.push_back({arr[i], arr[l], arr[r]});
                l++;
                r--;
            }
            else if (currentSum < targetSum){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return result;
}


int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int targetSum = 18;

    vector<vector<int>> result = triplets(arr, targetSum);
    if (result.size()==0){
        cout<<"No such triplets found"<<endl;
    }
    else{
        for(vector<int> v: result){
            for(int n: v){
                cout<<n<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}