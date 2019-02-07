#include <cstdlib>

int main (int argc, char ** argv)
{
    int c;

    if (c & 1) {
        return EXIT_SUCCESS;
    }
    else {
        return EXIT_FAILURE;
    }
}
