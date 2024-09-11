/*
Given an array containing N numbers, and a number S denoting a target sum.
Find 2 DISTINCT numbers that can pair up to form target sum. 
Let us assue there will be only one such pair.

Input:
array = [10, 5, 2, 3, -6, 9, 11]
targetSum = 4

Output:
[10, -6]

*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr, int S) {

    unordered_set<int> s;
    vector<int> result;
    for (int i=0; i<arr.size(); i++){
        int x = S - arr[i];
        if (s.find(x) != s.end()){
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
    }
    return {};

}


int main() {

    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;

    vector<int> result = pairSum(arr, S);
    if (result.size()==0){
        cout<<"No such pair"<<endl;
    }
    else{
        cout<<result[0]<<", "<<result[1]<<endl;
    }
}

