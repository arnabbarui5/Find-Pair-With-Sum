#include <iostream>

using namespace std;

  bool linearSearch(int *arr, int n , int x) {
        for(int i=0; i<n; i++) {
            if(arr[i] == x)
                return true;
          }
           return false;
    }

    bool findPairSum(int* arr, int n , int x) {
        for(int i=0; i<n-1; i++) {
            if(linearSearch(arr+i+1, n-i-1, x-arr[i]))
                return true;
             }
            return false;
    }

int main()
{
    int arr[] = {2,9,7,4,5,1,0,8};
    cout << findPairSum(arr, 8, 15);

    return 0;
}
