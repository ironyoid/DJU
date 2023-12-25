#include <functional>
#include <iostream>
#include <utility>
#include "dju.hpp"

int main (int argc, char *argv[]) {
    Dju test_tree(10);
    test_tree.union_set(0, 1);
    test_tree.union_set(1, 2);
    test_tree.union_set(0, 6);
    test_tree.print();
}