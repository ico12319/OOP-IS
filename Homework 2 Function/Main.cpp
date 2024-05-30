#include "FunctionCrafter.h"

int main(int argc, const char * argv[]) {
    
    // Binary file for 0
    //int16_t N = 7;
    //int16_t T = 0;
    
    //std::ofstream ofs("Binar.dat",std::ios::binary);
    //ofs.write((const char*) &N, sizeof(int16_t));
    //ofs.write((const char*) &T,sizeof(int16_t));
    
    //int32_t points[] = {0,1,2,3,5,6,7};
    //int32_t values[] = {0,3,3,3,4,4,0};
    
    //ofs.write((const char*) points,sizeof(int32_t) * N);
    
    //ofs.write((const char*) values,sizeof(int32_t) * N);
    
    // Binary file for 1
    //int16_t N = 2;
    //int16_t T = 1;
    //std::ofstream ofs("TestCaseWith1.dat",std::ios::binary);
    //ofs.write((const char*)&N,sizeof(int16_t));
    //ofs.write((const char*)&T,sizeof(int16_t));
    //int32_t points[] = {3,5};
    //ofs.write((const char*) &points,sizeof(int32_t) * N);
    
    //std::ifstream ifs("TestCaseWith1.dat",std::ios::binary);
    //PartialFunction<Pair>* function = crafter(ifs);
    //std::cout<<function->operator()(7)<<std::endl;
    //std::cout<<function->operator()(2)<<std::endl;
    //std::cout<<function->isDefined(3)<<std::endl;
    //std::cout<<function->isDefined(5)<<std::endl;
    //try{
        //std::cout<<function->operator()(3)<<std::endl;
    //}
    //catch(const std::exception& e){
        //std::cout<<e.what()<<std::endl;
    //}
    
    // Binary File for 2
    //int16_t N = 4;
    //int16_t T = 2;
    //std::ofstream ofs("TestCaseWith2.dat",std::ios::binary);
    //ofs.write((const char*)&N,sizeof(int16_t));
    //ofs.write((const char*)&T,sizeof(int16_t));
    //int32_t points[] = {0,5,6,7};
    //ofs.write((const char*) &points,sizeof(int32_t) * N);
    
    //std::ifstream ifs("TestCaseWith2.dat",std::ios::binary);
    //PartialFunction<Pair>* function = crafter(ifs);
    //std::cout<<function->operator()(0)<<std::endl;
    //std::cout<<function->operator()(5)<<std::endl;
    //std::cout<<function->operator()(6)<<std::endl;
    //std::cout<<function->operator()(1)<<std::endl;
    
    //std::cout<<function->isDefined(7)<<std::endl;
    //std::cout<<function->isDefined(1)<<std::endl;
    //std::cout<<function->isDefined(43)<<std::endl;
    //try{
        //std::cout<<function->operator()(3)<<std::endl;
    //}
    //catch(const std::exception& e){
        //std::cout<<e.what()<<std::endl;
    //}
    
    
    
    //int16_t N = 3;
    //int16_t T = 3;
    //std::ofstream ofs("TestcaseWith3.dat",std::ios::binary);
    //ofs.write((const char*) &N,sizeof(int16_t));
    //ofs.write((const char*) &T,sizeof(int16_t));
    
    //char fileName1[] = {"Binar.dat"};
    //char fileName2[] = {"TestCaseWith1.dat"};
    //char fileName3[] = {"TestCaseWith2.dat"};
    
    //ofs.write(fileName1, std::strlen(fileName1) + 1);
    //ofs.write(fileName2, std::strlen(fileName2) + 1);
    //ofs.write(fileName3, std::strlen(fileName3) + 1);
    
    
    std::ifstream ifs("TestCaseWith3.dat",std::ios::binary);
    PartialFunction<Pair>* function = crafter(ifs);
    std::cout<<function->operator()(6)<<std::endl;
    //std::cout<<function->operator()(0)<<std::endl;
    //std::cout<<function->operator()(5)<<std::endl;
    //std::cout<<function->operator()(6)<<std::endl;
    //std::cout<<function->operator()(1)<<std::endl;
    
}
