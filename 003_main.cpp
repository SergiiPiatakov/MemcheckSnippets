#include <cstdlib>

int * DoStuff ()
{
    int * r = nullptr;
    r = new int (42);
}

int main (int argc, char ** argv)
{
    int * i = nullptr;
    i = DoStuff ();

    return EXIT_SUCCESS;
}
