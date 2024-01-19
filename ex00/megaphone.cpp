#include<iostream>

int main(int ac, char **av)
{
    if(ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i = 1;
        while(av[i])
        {
            for(int j = 0;av[i][j];j++)
                std::cout<<(char) toupper(av[i][j]);
            if(av[i+1])
                std::cout<<" ";
            i++;
        }
    }
    std::cout<<"\n";
    return 0;
}
