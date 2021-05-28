#include <iostream>
#include <vector> 
#pragma once
using namespace std;

struct CRSMatrix
{
    int m; // number of rows
    int n; // number of columns
    int k; // number of non-zero elements
    vector<double> AN; // non-zero elements 
    vector<int> JA; // column indices 
    vector<int> IA; // row ptr 
};
CRSMatrix sparse_transpose(const CRSMatrix& input);
