// C11 使用unordered_map 属于和vector相同级别的容器。
// 其实就是hashmap。
// hashmap通过把key映射到表中的一个位置来访问记录。
// 这个映射函数叫做散列函数。

// 和map的区别。
// map == 红黑树 == 近似于平衡的二叉查找树，里面的数据是有顺序的。
// 在红黑树上时间复杂度是logn
// 然后在hashmap时间复杂度是1

// 哈希表的一个重要问题就是如何解决映射冲突的问题。
// 对于内存有要求或者说是要求数据保持原有的顺序，就要去使用这个红黑树map。

// unordered_map 和 map之间用法大同小异。

#include <iostream>
#include <unordered_map>
#include <string> 

using namespace std;

int main(){
    unordered_map<int,string> map_name;
    map_name.insert(make_pair);
}