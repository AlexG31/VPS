#include "iostream"
#include "sstream"
#include "string"
#include "cstring"
#include "cstdio"
#include "cstdlib"
#include "cmath"
#include "algorithm"
#include "utility"
#include "vector"
#include "map"
#include "unordered_map"
#include "set"
#include "bitset"
#include "unordered_set"
#include "list"
#include "deque"
#include "functional"
#include "ctime"
#include "cctype"
#include "tuple"
#include "memory"
#include "limits"
#include "climits"
#include "stack"
#include "forward_list"
#include "iterator"
#include "array"
#include "random"
#include "queue"


using namespace std;

// Functions
vector<string> StrSplit(string work, char delim, int rep);

template <typename T, typename Display> 
void print_vector(const vector<T>& vec, Display disp);

vector<string> StrSplit(string work, char delim, int rep = 0) {
    // rep == 1: Also insert empty strings
    vector<string> flds;
    if (!flds.empty()) flds.clear();  // empty vector if necessary
    string buf = "";
    int i = 0;
    while (i < work.size()) {
        if (work[i] != delim)
            buf += work[i];
        else if (rep == 1) {
            flds.push_back(buf);
            buf = "";
        } else if (!buf.empty()) {
            flds.push_back(buf);
            buf = "";
        }
        i++;
    }
    if (!buf.empty())
        flds.push_back(buf);
    cout << flds.size() << endl;
    return flds;
}

template <typename T, typename Display> 
void print_vector(const vector<T>& vec, Display disp) {
    for (const auto& val:vec) {
        disp(val);
    }
}

class Point {
public:
    typedef int pos_type;
    pos_type x,y;
    explicit Point(pos_type x_in, pos_type y_in):x(x_in), y(y_in) {}
    explicit Point():x(), y() {}
    bool operator < (const Point& other) const {
        if (x != other.x) return x < other.x;
        return y < other.y;
    }
    bool operator == (const Point& other) const {
        return x == other.x && y == other.y;
    }
    void print() {
        // for debug
        cout << "(" << x << "," << y << ")";
    }
};

#define MP make_pair
#define debug false
#define UNM unordered_map
#define UNS unordered_set
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define FOR_REV(i, a, b) for(int i = a; i >= b; --i)

typedef vector<int> VI;
typedef vector<VI> Mat;
typedef pair<int,int> PI;

class Solution {
public:
    void solve() {}
};


int main() {
    Solution sol;
    sol.solve();
    return 0;
}
