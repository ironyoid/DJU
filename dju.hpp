#ifndef __DJU_H
#define __DJU_H
#include <array>
#include <iostream>
#include <memory>
#include <vector>
#include <functional>
#include <stack>

class Dju
{
   public:
    Dju(int size) : _tree(size, 0), _size(size, 1) {
        for(int i = 0; i < _tree.size(); ++i) {
            _tree[i] = i;
        }
    }

    int find_set (int elem) {
        if(_tree[elem] == elem) {
            return elem;
        }
        return _tree[elem] = find_set(_tree[elem]);
    }

    void union_set (int a, int b) {
        int tmp_a = find_set(a);
        int tmp_b = find_set(b);
        std::cout << "a = " << tmp_a << " b = " << tmp_b << std::endl;
        if(_size[tmp_a] > _size[tmp_b]) {
            _tree[tmp_b] = tmp_a;
            _size[tmp_a] += _size[tmp_b];
        } else {
            _tree[tmp_a] = tmp_b;
            _size[tmp_b] += _size[tmp_a];
        }
    }

    void print (void) {
        std::cout << "size: ";
        for(auto n : _size) {
            std::cout << n << " ";
        }
        std::cout << std::endl << "tree: ";
        for(auto n : _tree) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }

   private:
    std::vector<int> _tree;
    std::vector<int> _size;
};

#endif /* __DJU_H */