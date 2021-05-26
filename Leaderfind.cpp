#include <iostream>
using namespace std;

void leaderprint(int arr[], int n)
  {                                             // function for finding leaders
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }

            if (j == n - 1)
                printf("%d is a leader\n", arr[i]);
        }
    }
}

int main()
{
    int arr[] = { 16, 17, 4, 3, 5, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
	
    leaderprint(arr, n);                // calling function
    return 0;
}
