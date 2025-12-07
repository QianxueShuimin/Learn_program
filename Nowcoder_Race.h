#pragma once

#ifndef NOWCODER_RACE_H
#define NOWCODER_RACE_H

#include "Header_file.h"

namespace SM {
	inline void A_125434() {
        std::vector<int> a;
        int temp1 = 0;
        for (int i = 0; i < 3; i++) {
            std::cin >> temp1;
            a.push_back(temp1);
        }

        if (abs(a[0] - a[1]) != abs(a[1] - a[2])) {
            std::cout << "No" << "\n";
        }
        else {
            std::cout << "Yes" << "\n";
        }
	}


}

#endif // !NOWCODER_RACE_H
