#pragma once

#ifndef STARRYCODING_QUESTION_BANK_H
#define STARRYCODING_QUESTION_BANK_H

#include "Header_file.h"

//一星为A，到五星为E
namespace SM {
	inline void A_1() {
		int A = 0, B = 0;
		std::cin >> A >> B;

		std::cout << A + B << "\n";
	}

	inline void A_2() {
		std::cout << "StarryCoding 启动！" << "\n";
	}

	inline void B_3() {

	}

	inline void A_4() {
		int n = 0;
		std::cin >> n;

		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}

		std::cout << sum << "\n";
	}

	inline void B_5() {

	}

	inline void B_6() {

	}

	inline void A_7() {
		int T = 0;
		std::cin >> T;

		while (T--) {
			int n = 0, q = 0;
			std::cin >> n >> q;

			std::vector<int> a;
			int temp1 = 0;
			for (int i = 0; i < n; i++) {
				std::cin >> temp1;
				a.push_back(temp1);
			}

			int temp2 = 0, temp3 = 0;
			for (int i = 0; i < q; i++) {
				std::cin >> temp2 >> temp3;
				long long sum = 0;
				for (int j = temp2 - 1; j <= temp3 - 1; j++) {
					sum += a[j];
				}

				std::cout << sum << "\n";
			}
		}
	}


}

#endif // !STARRYCODING_QUESTION_BANK_H
