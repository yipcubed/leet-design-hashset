#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/design-hashset/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class MyHashSet {
public:
    vector<bool> v;
    /** Initialize your data structure here. */
    MyHashSet() {
        v.resize(1024);
    }

    void add(int key) {
        while (key > v.size())
            v.resize(v.size() * 2);
        v[key] = true;
    }

    void remove(int key) {
        if (key < v.size())
        v[key] = false;
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return key < v.size() && v[key];

    }
};


void test1() {
    unsigned long long x = 1;
    cout << sizeof(x) << endl;
    MyHashSet* obj = new MyHashSet();
    obj->add(5);
//    obj->remove(5);
    obj->remove(50);
    bool param_3 = obj->contains(5);

    cout << " ? " << param_3 << endl;
}

void test2() {

}

void test3() {

}