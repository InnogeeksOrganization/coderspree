#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        // cout << setfill('0') << setw(8) << arr[i] << endl;
        printf("%08d\n", arr[i]);
    }
    cout << endl;
}


void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void countsort(vector<int>& arr, int place) {
  vector<int> count(10, 0);
  vector<int> output(arr.size(), 0);
  
  for (auto i: arr){
    int idx = i / place;
    count[idx%10] += 1;
  }
  
  for (int i=1; i<10; i++){
      count[i] += count[i-1];
  }
  
  for (int i=arr.size()-1; i>=0; i--){
      output[--count[(arr[i] / place) % 10]] = arr[i];
  }

  for (int i=0; i<arr.size(); i++)
        arr[i] = output[i];

//   cout << "After sorting on " << place << " place -> ";
//   Display(arr);
//   cout << endl;
}

void sort01(vector<int> &arr)
{
    countsort(arr, 1000000);
    countsort(arr, 10000000);
    countsort(arr, 10000);
    countsort(arr, 100000);
    countsort(arr, 1);
    countsort(arr, 10);
    countsort(arr, 100);
    countsort(arr, 1000);
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> A(n, 0);
    input(A);

    sort01(A);
    print(A);
    return 0;
}