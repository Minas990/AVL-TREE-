#include <iostream>
#include "Avl Tree.h"
using namespace std;

int main()
{
    AvlTree<int> mina;
    for (int i = 1; i <= 10; i++)
    {
        mina.insert(i);
    }
    mina.printTree();




    return 0;
}

