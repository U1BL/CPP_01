#include "Zombie.hpp"

int main() {
    Zombie* zombie = newZombie("Zombie");
    zombie->announce();
    delete zombie;

    randomChump("Zombie3");

    return 0;
}
