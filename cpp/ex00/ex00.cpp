#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;

    if (ac > 1)
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (av[i][j] >= 97 && av[i][j] <= 122)
                    putchar(toupper(av[i][j]));
            j++;
            }
            i++;
        }
    }
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";    
    return (0);
}