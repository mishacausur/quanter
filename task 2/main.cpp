//
//  main.cpp
//  quanter
//
//  Created by Misha Causur on 25.03.2023.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    int n;
    std::cin >> n;
    std::vector<int64_t> f = {0 , 1};
    
    while ((int)f.size() <= n) {
        f.push_back(f[f.size() - 1] + f[f.size() - 2]);
    }
    std::cout << f[n] << std::endl;
}
