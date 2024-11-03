#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> lst;//vector创建
	lst.push_back(2);//push_back()在容器列表添加元素
	lst.push_back(8);
	cout <<dec<< lst[0] + lst.at(1)<<endl;//可用索引或.at(索引值)获取vector中元素
	lst.erase(lst.begin() + 1);//erase(第几个元素)删除指定元素
	cout << lst.size();//.size()获取vector中元素个数
	lst.clear();//clear()清空元素
}










//#include <iostream>
//#include <vector>
//
//int main() {
//    // 创建一个空的整数向量
//    std::vector<int> myVector;
//
//    // 添加元素到向量中
//    myVector.push_back(3);
//    myVector.push_back(7);
//    myVector.push_back(11);
//    myVector.push_back(5);
//
//    // 访问向量中的元素并输出
//    std::cout << "Elements in the vector: ";
//    for (int element : myVector) {
//        std::cout << element << " ";
//    }
//    std::cout << std::endl;
//
//    // 访问向量中的第一个元素并输出
//    std::cout << "First element: " << myVector[0] << std::endl;
//
//    // 访问向量中的第二个元素并输出
//    std::cout << "Second element: " << myVector.at(1) << std::endl;
//
//    // 获取向量的大小并输出
//    std::cout << "Size of the vector: " << myVector.size() << std::endl;
//
//    // 删除向量中的第三个元素
//    myVector.erase(myVector.begin() + 2);
//
//    // 输出删除元素后的向量
//    std::cout << "Elements in the vector after erasing: ";
//    for (int element : myVector) {
//        std::cout << element << " ";
//    }
//    std::cout << std::endl;
//
//    // 清空向量并输出
//    myVector.clear();
//    std::cout << "Size of the vector after clearing: " << myVector.size() << std::endl;
//
//    return 0;
//}
