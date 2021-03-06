#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "console.h"

using namespace std;

int main()
{
    int x,y, step = 0;
    char field[5][5];
    startField( field );
    cout << " You are welcome \n ";
    show ( field );
    system ( " pause " );
    do
    {
        system( " cls " );
        ++ step;
        // CODE FOR PEOPLE
        cout << " Please, enter coordinates X and Y \n ";
        cin >> x;
        cin >> y;
        if( !checkForError( x, y ) )
        {
            cout << "Error! Lol \n ";
        }
        if( checkFor( x, y, field ) )
        {
            field[ 2 * ( y - 1 ) ][ 2 * ( x - 1 ) ] = 'X';
            system( " cls " );
            show ( field );
            system( " pause " );
        }
        else
        {
            cout << " This cell has the symbol \n ";
        }
        if( win( field ) == 'X' )
        {
            cout << " People is win \n ";
            return 0;
        }

        //CODE FOR COMPUTER
        cout << " Computer... \n ";
        y = rand() %3;
        x = rand() %3;
        if( checkFor( 2 * ( x + 1 ), 2 * ( y + 1 ), field ) )
        {
            field[ 2 * y ][ 2 * x ] = 'O';
            system( " cls " );
            show ( field );
            system( " pause " );
        }
        else
        {
            cout << " This cell has the symbol \n ";
        }
        if( win( field ) == 'O' )
        {
            cout << " Computer is win \n ";
            return 0;
        }
    } while( step < 9 );

    return 0;
}
