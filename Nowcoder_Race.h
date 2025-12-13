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

    inline void B_125435() {
        int n = 0;
        std::cin >> n;

        std::vector<int> a;
        int temp1 = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> temp1;
            a.push_back(temp1);
        }

        std::sort(a.begin(), a.end());

        int ans = a[a.size() - 1] - a[0];
        if (a[0] == a[a.size() - 1]) {
            std::cout << 1 << " " << 0 << "\n";
        }
        else {
            std::cout << 2 << " " << ans << "\n";
        }
    }
}

#endif // !NOWCODER_RACE_H
