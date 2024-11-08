#include <iostream.h>
#include <fstream.h>
#include <canio.h>

void main()
{
    ofstream fout;
    fout.open("demo.txt");
    fout<<"hello";
    getch();
}
