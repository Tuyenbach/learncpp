#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    map<int, int> mapList;

    mapList.insert(pair<int, int>(1, 0));
    mapList.insert(pair<int, int>(2, 3));
    mapList.insert(pair<int, int>(3, 4));
    mapList.insert(pair<int, int>(4, 8));
    mapList.insert(pair<int, int>(5, 8));
    mapList.insert(pair<int, int>(6, 7));

    sort(mapList.begin(), mapList.end(), [](int i, int j) -> bool {
        return (i < j);
    })

    return 0;
}