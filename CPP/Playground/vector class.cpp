#include <iostream>
#include <vector>

class vectors {
    public:
        
        std::vector<int> getVec();

    private:
        std::vector<int> vec = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
};


int main(){

    std::cout << "This is a test" << std::endl;
    vectors vec1;


    std::cout << "vector data starting address: " << vec1.getVec().data() << std::endl;
    std::cout << "Vector data..." << std::endl;

    for(int value : vec1.getVec() )
        std::cout << value << " ";

    std::cout << std::endl;
}




std::vector<int> vectors::getVec(){
    return vec;
}