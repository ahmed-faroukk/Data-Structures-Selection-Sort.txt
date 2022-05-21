#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int binary_Search(int arr[], int l, int h, int element) {
    // must be sorted array
    while (l <= h) {
         int mid;
        mid = (l + h) / 2;
        if (arr[mid] == element) {
            return mid;

        }

        if (element < arr[mid])
            h = mid - 1;
        else
            l = mid + 1;

    }


    return -1;

}
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for ( int i = 0; i < n; i++) {
        int element;
        cin >> arr[i];

    }
  //sort array
    sort(arr, arr+n);

  
    while (q--)//3 2 1
    {
        int x, result;
        cin >> x;
        result = binary_Search(arr, 0, n - 1, x);
        if (result!=-1) {
            cout << "found" << endl;

        }
        else cout << "not found" << endl;

    }



    return 0;

}
//input              .       output
//5 3                .
//1 5 4 3 2          .
//5                  .       found
//3                  .       found
//6                  .       not found


