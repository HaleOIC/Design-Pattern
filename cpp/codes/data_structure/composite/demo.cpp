#include "Composite.hpp"
#include "Leaf.hpp"

int main()
{
    Composite *root = new Composite();
    Leaf *leaf1 = new Leaf();
    Leaf *leaf2 = new Leaf();

    root->Add(leaf1);
    root->Add(leaf2);

    Composite *subtree = new Composite();
    subtree->Add(new Leaf());
    subtree->Add(new Leaf());

    root->Add(subtree);

    root->Operation();

    delete root; // Automatically deletes all children

    return 0;
}
