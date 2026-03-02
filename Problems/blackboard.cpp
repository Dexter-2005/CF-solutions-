#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i;
        }

        int remaining = n;
        bool alice_wins = false;

        while (true)
        {
            bool move_found = false;

            
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != -1)
                {
                    int a = arr[i];
                    arr[i] = -1;
                    remaining--;

                    
                    bool bob_move = false;
                    for (int j = 0; j < n; j++)
                    {
                        if (arr[j] != -1 && (a + arr[j]) % 4 == 3)
                        {
                            arr[j] = -1;
                            remaining--;
                            bob_move = true;
                            break;
                        }
                    }

                    if (!bob_move)
                    {
                        alice_wins = true;
                    }

                    move_found = true;
                    break;
                }
            }

            if (!move_found || alice_wins)
                break;
        }

        if (alice_wins)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}
