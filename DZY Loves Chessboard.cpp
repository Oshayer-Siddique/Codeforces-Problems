#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[110][110];
    /* for(int i = 0; i < 110; i++)
     {
         for(int j = 0; j < 110; j++)
         {
             arr[i][j] = 0;
         }
     }*/

    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j<= m; j++ )
        {
            cin >> arr[i][j];

        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(arr[i][j] == '.')
            {
                if((i+j) % 2 == 0)
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }

            }
        }
    }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cout << arr[i][j];
            }
            cout<<endl;

        }




}

