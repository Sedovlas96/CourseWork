#ifndef CONSOLE_H
#define CONSOLE_H
#include <iostream>

using namespace std;

char win( char field[][5] );
bool checkForError( int x, int y );
bool checkFor( int x, int y, char field[][5] );
void show ( char field[ ][ 5 ] );

#endif // CONSOLE_H
