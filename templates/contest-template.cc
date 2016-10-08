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
#include "tuple"
#include "memory"
#include "limits"
#include "stack"
#include "forward_list"
#include "iterator"
#include "array"
#include "random"
#include "queue"


using namespace std;
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

int main() {
    return 0;
}
