#include "funset.hpp"  
#include <math.h>  
#include <iostream>  
#include <string>  
#include <vector>  
#include <opencv2/opencv.hpp>  
#include "common.hpp"  
  
// =============================== ¼ÆËã sigmoidº¯Êý ==========================  
template<typename _Tp>  
int sigmoid_function(const _Tp* src, _Tp* dst, int length)  
{  
    for (int i = 0; i < length; ++i) {  
        dst[i] = (_Tp)(1. / (1. + exp(-src[i])));  
    }  
  
    return 0;  
}  
  
template<typename _Tp>  
int sigmoid_function_fast(const _Tp* src, _Tp* dst, int length)  
{  
    for (int i = 0; i < length; ++i) {  
        dst[i] = (_Tp)(src[i] / (1. + fabs(src[i])));  
    }  
  
    return 0;  
}  
  
int test_sigmoid_function()  
{  
    std::vector<double> src{ 1.23f, 4.14f, -3.23f, -1.23f, 5.21f, 0.234f, -0.78f, 6.23f };  
    int length = src.size();  
    std::vector<double> dst1(length), dst2(length);  
  
    fprintf(stderr, "source vector: \n");  
    fbc::print_matrix(src);  
    fprintf(stderr, "calculate sigmoid function:\n");  
    fprintf(stderr, "type: sigmoid functioin, result: \n");  
    fbc::sigmoid_function(src.data(), dst1.data(), length);  
    fbc::print_matrix(dst1);  
    fprintf(stderr, "type: fast sigmoid function, result: \n");  
    fbc::sigmoid_function_fast(src.data(), dst2.data(), length);  
    fbc::print_matrix(dst2);  
  
    return 0;  
}  
