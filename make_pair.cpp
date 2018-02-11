template <class T1,class T2>
    pair <V1,V2> make_pair(T1&&x, T2&&y);

返回一个叫做pair的对象，分别赋给x和y两个对象。

# include <utility> 
# include <iostream>

int main(){
    std::pair<int ,int> foo;
    std::pair<int ,int> bar;
    foo = std::make_pair(10,20);
    bar = std::make_pair(10.5,'A');//make_pair 可以对于元素进行一个隐式转化
    
    std::cout << "foo"<< foo.first<<","<<foo.second<<'\n';
    std::cout << "bar"<< bar.first<<","<<bar.second<<'\n';
}

  
//pair in vector
#include <utility>
#include <iostream>
#include <vector>
using namespace std;
bool strict_weak_ordering(const pair<int ,string> a,const pair<int,string> b)
{
    return a.first<b.first;
}

int main()      
{          
    //声明一个动态数组的存在 
　　vector<pair<int, string> > vec;      
    //向动态数组中增加元素
   vec.push_back(make_pair<int, string>(5, "hello"));      
   vec.push_back(make_pair<int, string>(4, "hell"));      
   vec.push_back(make_pair<int, string>(6, "hello,"));      
   //根据某一种特定的规则来选择这个pair的情况。  
   sort(vec.begin(), vec.end(), strict_weak_ordering);      
       
   vector<pair<int, string> >::iterator it = vec.begin(), end = vec.end();      
   
   for(; it != end; ++it)      
   　　cout<<it->second<<endl;      
　　return 0;        
}