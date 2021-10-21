#include <stdio.h>

    int main()
    {
          int n;
  scanf ("%d", &n);
  int arr[n];

  for (int j = 0; j < n; j++)
    {
      scanf ("%d", &arr[j]);
    }


        int length = sizeof(arr)/sizeof(arr[0]);
        int fr[length];
        int visited = -1;

        for(int i = 0; i < length; i++){
            int count = 1;
            for(int j = i+1; j < length; j++){
                if(arr[i] == arr[j]){
                    count++;
                    fr[j] = visited;
                }
            }
            if(fr[i] != visited)
                fr[i] = count;
        }

        for(int i = 0; i < length; i++){
            if(fr[i] != visited){
                if(fr[i]==2)
                printf("%d", arr[i]);
            }
        }
        return 0;
    }
