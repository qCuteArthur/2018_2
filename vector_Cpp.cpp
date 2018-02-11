#include <vector>
using std::vector;
vector<int> numbers1;
std::vector <int> numbers2; 

//Vector操作——
函数 ？？？？
operator[] 返回容器中指定位置的一个引用？？？？

//创建Vector——
vector<Widget> vWidgets;
因为vector是一个容器，所以他的member func是对于迭代器和容器本身进行的操作，所以这个容器可以包含任意类型。

vector<Widegt> vWidgets(500,Widget(0));  
vector<Widegt> another_vW(vWidgets);//创建一个拷贝 

//添加数据——
for（int i=0；i<10;i++){
    std::vWidgets.push_back(Widgest(0));
}

.size()判断大小，.empty()判断是不是为空

//获取数据——
vector<int> v;
v.reserve(10);//reserve提前分配空间。
for (int i=0;i<7;i++){
    v.push_back(i);
}
try: 
{
    int iVal1 = v[7];
    int iVal2 = v.at(7);//输出idx为7时候的数据。
}
//异常处理程序，判断到底这个东西是不是一个越界的
//一个exception对象，然后用const& 加速引用，防止修改
catch(const exception &e){
    //exception对象自带的.what接口
    cout<<e.what();
}

//删除vector的数据
用erase 和 pop——back clear

//remove——if算法
   Remove_if()有三个参数：

1、   iterator _First：指向第一个数据的迭代指针。

2、   iterator _Last：指向最后一个数据的迭代指针。

3、   predicate _Pred：一个可以对迭代操作的条件函数。

#include <Algorithm>
条件函数是一个按照用户定义的条件返回是或否的结果，是最基本的函数指针，或者是一个函数对象。这个函数对象需要支持所有的函数调用操作，重载operator()()操作。remove_if()是通过unary_function继承下来的，允许传递数据作为条件。

//首先定义了很多种的检索方式
#include <functional>
enum findmodes{
    fm_invalid =0;//无效为0
    fm_is;
    fm_startswith;
    fm_endswith;
    fm_contains;
}
typedef struct tagFindStr{
    UINT mode;
    CString match_string;
}FindStr;
//定义一个结构，并且定义一个指针。这个结构存储的是要寻找的字符串和字符串的寻找模式。
typedef FindStr* FindStrPts;
//这个指针指向的是这个结构。

//然后要处理的就是这个条件判断的情况
class FindMatchingString{
    public：
}


STL的Alogorithm中的remove以及remove_if 都是建立在迭代的前提下的。

//去除vector中的多余的数据 
reserve可以改变大小
clear可以改变缓存的大小
对于需要进行一个节约空间的vector的建立，可以通过建立vector之后重新赋给一个新的vector的方式来进行。


//vector中的数据的罗列
方法一：
#include <iostream>
#include <vector>

vector <int> valList ={0,1,2,3};
void ShowVec(const vector<int> &valList){
    int count= valList.size();
    for(int i =0;i<count;i++){
        std::cout<<valList.at[i]<<std::endl;
    }
    //展示的是idx=i情况下的数据的情况，然后就是说有效的防止了越界情况的发生。
}
方法二:
//创建一个迭代器进行输出。[for 循环迭代器输出]
void ShowVec(const vector<int>& valList){
    for(vector<int>::const_iterator iter = valList.cbegin();iter!= valList.cend();iter++){
        cout<<(*iter)<<endl;
    }
}
void showVec(const <int> &valList){
    for(auto iter= valList.cbegin();iter!= valList.cend();iter++){
        //对于迭代器指针解除引用。
        cout<<*iter<<endl;
    }
}//使用auto自动判断类型
方法三:
//for_each加函数,for_each有三个参数，操作集中于一个函数里面。
template<typename T>
void printer(const T& val){
    cout<<val<<endl;
}
void ShowVec(const vector<int>& valList){
    for_each(valList.cbegin();valList.cend(),printer<int>);
}
方法四:for_each和仿函数
template <typename T>
struct functor{
    void operator()(const T&obj){
        cout<<obj<<endl;
    }
};
void ShowVec(const vector <int>& valList){
    for_each(valList.cbegin(),valList.cend();functor<int>());
}
方法五:for_each 加Lambda匿名函数
void ShowVec(const vector <int>&valList){
    for_each(
        valList.cbegin(),valList.cend(),
        [](const int&val)->void(const<<val<<endl;)
        );//C11 Lambda匿名函数
}

方法六:
for区间遍历
for(  std::vector<int> val:valList){
    cout<<val<<endl;
}




//用const和%来修饰变量，表示变量不会被改变以及变量是个引用。
int main(){
    vector<int> valList ={0,1,2,3,4}；
    ShowVec(valList);
    return 0;
}

