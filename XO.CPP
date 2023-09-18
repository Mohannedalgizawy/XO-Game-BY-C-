#include<iostream>
using namespace std;

void board(char** arr,int row,int column){
    cout << "-------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "|";
        for (int j = 0; j < 3; j++)
        {
            //cout << "     |";
            //cout << "  " << arr[row][column] << "  |";
            if (i == row && j == column)
            {
                cout << "  " << arr[row][column] << "  |";
            }
            else if (arr[i][j] == 'X' || arr[i][j] == 'O' )
            {
                cout << "  " << arr[i][j] << "  |";
            }
            
            else
            {
                cout << "     |";
            }
            
        }
        cout << endl;
        cout << "-------------------" << endl;
    }
}

int main()
{
    char** arr = new char*[3];
    for (int i = 0; i < 3;i++)
    {
        arr[i] = new char[3];
    }
        
 
    for (int i = 0; i < 9; i++)
    {
    
        int row ;
        cout << "enter row:" << endl ; 
        cin >> row;

        int column ;
        cout << "enter column:" << endl ; 
        cin >> column;

        // arr[row][column];

        if ( i == 0 || i == 2 || i == 4 || i == 6 || i == 8)
        {
            arr[row][column] = 'X';
        }
        
        if ( i == 1 || i == 3 || i == 5 || i == 7)
        {
            arr[row][column] = 'O';
        }

        if (row < 0 || row > 2 || column < 0 || row < 0 || row > 2)
        {
            cout << "invalid valeo!" << endl;
            break;
        }    

        board(arr,row,column);
    
        if (arr[0][0] == 'X'  && arr[0][1] == 'X' && arr[0][2] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }

        if (arr[1][0] == 'X'  && arr[1][1] == 'X' && arr[1][2] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }


        if (arr[2][0] == 'X'  && arr[2][1] == 'X' && arr[2][2] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }

        if (arr[0][0] == 'X'  && arr[1][0] == 'X' && arr[2][0] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }    

        if (arr[0][1] == 'X'  && arr[1][1] == 'X' && arr[2][1] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }    

        if (arr[0][2] == 'X'  && arr[1][2] == 'X' && arr[2][2] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }    

        if (arr[0][0] == 'X'  && arr[1][1] == 'X' && arr[2][2] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }    

        if (arr[0][2] == 'X'  && arr[1][1] == 'X' && arr[2][0] == 'X')
        {
            cout << "winner is X" << endl;
            break;
        }

        ///////////////// 
        if (arr[0][0] == 'O'  && arr[0][1] == 'O' && arr[0][2] == 'O')
        {
            cout << "winner is O!" << endl;
            break;
        }

        if (arr[1][0] == 'O'  && arr[1][1] == 'O' && arr[1][2] == 'O')
        {
            cout << "winner is O!" << endl;
            break;
        }


        if (arr[2][0] == 'O'  && arr[2][1] == 'O' && arr[2][2] == 'O')
        {
            cout << "winner is O!" << endl;
            break;
        }

        if (arr[0][0] == 'O'  && arr[1][0] == 'O' && arr[2][0] == 'O')
        {
            cout << "winner is O!" << endl;
            break;
        }    

        if (arr[0][1] == 'O'  && arr[1][1] == 'O' && arr[2][1] == 'O')
        {
            cout << "winner is O!" << endl;
            break;
        }    

        if (arr[0][2] == 'O'  && arr[1][2] == 'O' && arr[2][2] == 'O')
        {
            cout << "winner is X!" << endl;
            break;
        }    

        if (arr[0][0] == 'O'  && arr[1][1] == 'O' && arr[2][2] == 'O')
        {
            cout << "winner is O!" << endl;
            break;
        }    

        if (arr[0][2] == 'O'  && arr[1][1] == 'O' && arr[2][0] == 'O')
        {
            cout << "winner is O!" << endl;
            break;
        }

        if (i == 8)
        {
            cout << "no winner!" << endl;
        }
        
    } 

    int close;
    cout << "to close press enter:";
    cin >> close;
    cout << "  ";
   
    return 0;
}