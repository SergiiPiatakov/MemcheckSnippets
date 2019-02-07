#include <cstdlib>

int main (int argc, char ** argv)
{
    int * data = new int (8);

    for (int i = 0; i <= 8; ++i) {
        data [i] = 0;
    }

    int last = data [8];

    delete data;

    return EXIT_SUCCESS;
}
