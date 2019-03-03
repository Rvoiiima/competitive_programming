#include <iostream>
#include <string>
using namespace std;

int pos = str.find("xxx"); // 左から検索 (-1 or pos)
int pos = str.find("xxx", start_pos);
int pos = str.rfind("xxx"); // 右から検索 (-1 or pos)
int main(void) {

    // 非破壊的
    str.substr(pos, len);
    str.substr(pos); // 末尾まで

    // 破壊的
    str.replace(pos, len, "yyy");
    str.insert(pos, "_INSERT_"); // _INSERT_xxx
    str.erase(pos, len);
    str.erase(pos); // 末尾まで

    strcmp(s1.c_str(), s2.c_str());
}
