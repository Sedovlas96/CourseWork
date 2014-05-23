#include "console.h"

void startField( char field[][5] )
{
    for( int i = 0; i < 3; ++i )
    {
        for( int j = 0; j < 3; ++j  )
        {
            if( j == 1 || j ==  3 )
            {
                field[ 2 * i ][ j ] = '|';
            }
            if( i == 1 || i ==  3 )
            {
                field[ i ][ j ] = '_ _';
            }
        }
    }
}


char win( char field[ ][5] )
{
    if( field[0][0] == field[0][2] && field[0][2] == field[0][4] )
    {
        return field[0][0];
    }
    if( field[2][0] == field[2][2] && field[2][2] == field[2][4] )
    {
        return field[2][0];
    }
    if( field[4][0] == field[4][2] && field[4][2] == field[4][4] )
    {
        return field[4][0];
    }
    if( field[0][0] == field[2][0] && field[2][0] == field[4][0] )
    {
        return field[0][0];
    }
    if( field[0][2] == field[2][2] && field[2][2] == field[4][2] )
    {
        return field[0][2];
    }
    if( field[0][4] == field[2][4] && field[2][4] == field[4][4] )
    {
        return field[0][4];
    }
    if( field[0][0] == field[2][2] && field[2][2] == field[4][4] )
    {
        return field[0][0];
    }
    if( field[0][4] == field[2][2] && field[2][2] == field[4][0] )
    {
        return field[0][4];
    }
}

bool checkForError( int x, int y )
{
    if( x > 3 || y > 3 || x < 1 || y < 1 )
    {
        return 0;
    }
    return 1;
}

bool checkFor( int x, int y, char field[ ][ 5 ] )
{
    if( field[ 2 * ( y - 1 ) ][ 2 * ( x - 1 ) ] != 'X' && field[ 2 * ( y - 1 ) ][ 2 * ( x - 1 ) ] != 'O' )
    {
        return 1;
    }
    return 0;
}

void show ( char field[ ][5] )
{
    for( int i = 0; i < 5; ++i)
    {
        for( int j = 0; j < 5; ++j)
        {
            cout.width( 2 );
            cout << field[ i ][ j ];
        }
        cout << endl;
    }
}

