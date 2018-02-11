{public int[] twosum(int []numbers ,int target){
    int [] res =new int[2];
    //首先判断异常情况
    if(numbers = null || numbers.length<2)
        return null;
    }

class Solution_brute_force{
    public : 
    //vector<int>的意思是返回一个动态数组，
    //然后vector<int>&data 意思是一个原始的动态数组
    vector<int> twosum(vector<int>&data,int target){
        vector<int> index;//也就是要输出的东西
        //vector容器自带方法，包括size和push_back
        for(int i=0;i<data.size();++i){
            for(int j=i+1;j<data.size();++j){
                if(data.at(i)+data.at(j) == target ){
                    index.push_back(i+1);
                    index.push_back(j+1);
                    return index;
                }
            }
        }
        return index;
    }
}
核心就是首先进行一个数组的排序，数组排序之后，如果result=cdata[i]+cdata[i+1] 和 target相比大小不一样，就要按照顺序进行下一次操作。
cdata[--j]会变小。

class Solution {  
public:  
    vector<int> twoSum(vector<int>& data, int target) {  
        vector<int>cdata(data);//用于存储排序数据  
        vector<int>index;//索引  

        partial_sort_copy(data.begin(), data.end(), cdata.begin(), cdata.end());//拷贝排序 ,cdata有序

        int i = 0, j = cdata.size() - 1;//双下标  
        int result = cdata.at(i) + cdata.at(j);  
        while(result != target){  
            if (result > target){  
                --j;//向前移动下标  
            }  
            else{  
                ++i;//向后移动下标  
            }  
            result = cdata.at(i) + cdata.at(j);  
        }  
        //记录原始的data的位置。
        int pos = find(data.begin(), data.end(), cdata.at(i)) - data.begin(); 

        index.push_back(pos + 1);  
        data.at(pos) = cdata.at(j) + 1;//防止该位置被二次检索  
        index.push_back(find(data.begin(), data.end(), cdata.at(j)) - data.begin() + 1);  
        sort(index.begin(), index.end());  

        return index;  
    }  
};  

class hash_map{

}