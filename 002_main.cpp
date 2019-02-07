#include <cstdlib>
#include <memory>

struct Friend
{
    std::shared_ptr <Friend> bestFriend = nullptr;
};

void MakeFriendship (std::shared_ptr <Friend> a, std::shared_ptr <Friend> b)
{
    a->bestFriend = b;
    b->bestFriend = a;
}

int main (int argc, char ** argv)
{
    auto Ben = std::make_shared <Friend> ();
    auto Bob = std::make_shared <Friend> ();

    #if 1
    MakeFriendship (Ben, Bob);
    #endif

    return EXIT_SUCCESS;
}
