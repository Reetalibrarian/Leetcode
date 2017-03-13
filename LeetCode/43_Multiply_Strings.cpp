//
//  43_Multiply_Strings.cpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 13/03/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#include "43_Multiply_Strings.hpp"

std::string MultiplyStrings::multiply(std::string num1, std::string num2) {
    std::string s(1000,'0');
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    for(int i = 0; i < num1.length(); i++) {
        for(int j = 0;j < num2.length(); j++) {
            int temp = (num1[i] - '0') * (num2[j] - '0');
            s[i+j+1] = s[i+j+1] - '0' + (s[i+j] - '0' + temp) / 10 + '0';
            s[i+j] = (s[i+j] - '0'+ temp) % 10 + '0';
        }
    }
    reverse(s.begin(),s.end());
    if(s.find_first_not_of('0') == std::string::npos)
        return "0";
    else
        return s.substr(s.find_first_not_of('0'));
}
