#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n, m;
        cin >> n >> m;
       // m=m+1;
        int arr[n];
        int left = 0, right = 0;
        cout << "Case " << i << ":" << endl;
        for(int i=1;i<=m;i++)
        {
           cout<<" i = "<<i<<endl;
            string comand;
            cin >> comand;

            if (comand == "pushRight")
            {
                if (right == n)
                {
                    cout << "The queue is full "<<endl;
                }

                else if(left == 0 && right == 0)
                    {
                        left++;
                        right++;
                    }
                    else
                        right++;
                    int x;
                    cin >> x;
                    arr[right] = x;
                    cout << "pushed in right : " << arr[right] << endl;

                {
                    if (left == 0 && right == 0)
                    {
                        left++;
                        right++;
                    }
                    else
                        right++;
                    int x;
                    cin >> x;
                    arr[right] = x;
                    cout << "pushed in right : " << arr[right] << endl;
                }
            }

            else if (comand == "pushLeft")
            {
                if (left == 1 && right == n)
                {
                    cout << "The queue is full\n";
                }

                else if (left == 0 && right == 0)
                {
                    left++;
                    right++;
                }
                else
                    right++;

                if (right > 1 && left == 1)
                {

                    for (int i = left; i <= right; i++)
                    {
                        int temp = arr[i];
                        arr[i + 1] = temp;
                    }
                }
                else if (left > 1)
                {
                    left--;
                }
                // cout<<"pop left left = "<<left<<endl;

                int x;
                cin >> x;

                arr[left] = x;

                cout << "pushed in left : " << arr[left] << endl;
            }

            else if (comand == "popRight")
            {
                if (right == 0)
                {
                    cout << "The queue is empty\n";
                }
                else
                {
                    cout << "poped from right = " << arr[right] << endl;
                    ;
                    right--;
                }
            }
            else if (comand == "popLeft")
            {
                cout << "left = " << left << endl;
                if (left == 0)
                {
                    cout << "The queue is empty\n";
                }
                else
                {
                    cout << "poped from left = " << arr[left] << endl;
                    left++;
                }
            }
        }
    }

    return 0;
}