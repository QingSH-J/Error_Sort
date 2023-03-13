//
//  main.cpp
//  Count_Algorithm
//
//  Created by 金心羽 on 2023/3/13.
//

#include <iostream>
#include "Error_Sort.hpp"
int main(int argc, const char * argv[]) {
    Error_Sort error_sort;
    long long ans = error_sort.Calculate(6);
    cout << ans << endl;
    return 0;
}
