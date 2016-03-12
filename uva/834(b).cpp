#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int a;
    int b;
    vector <int> output;

    while ( scanf ("%d %d", &a, &b) != EOF ) {
        output.clear ();

        if ( a == 1 ) {
            printf ("[0;%d]\n", b);
            continue;
        }

        while ( a != 1 ) {
            int c = a / b;
            a -= c * b;
            swap (a, b);
            output.push_back (c);
        }

        //output.push_back (b);

        // print output
        printf ("[");
        printf ("%d;", output [0]);
        printf ("%d", output [1]);
        for ( int i = 2; i < output.size (); i++ )
            printf (",%d", output [i]);
        printf ("]\n");

    }

    return 0;
}
