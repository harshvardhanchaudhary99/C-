#include <bits/stdc++.h>
using namespace std;


bool find3Numbers(vector<int>& arr, int sum) 
{
    int n = arr.size();
    

    for (int i = 0; i < n - 2; i++)
    { 
      
        for (int j = i + 1; j < n - 1; j++)
        { 
   
            for (int k = j + 1; k < n; k++)
            { 
                if (arr[i] + arr[j] + arr[k] == sum)
                { 
                    cout << "Triplet is " << arr[i] <<
                        ", " << arr[j] << ", " << arr[k]; 
                    return true; 
                } 
            } 
        } 
    } 


    return false; 
} 


int main() 
{ 
    vector<int> arr = { 1, 4, 45, 6, 10, 8 }; 
    int sum = 22; 
    find3Numbers(arr, sum); 
    return 0; 
}
