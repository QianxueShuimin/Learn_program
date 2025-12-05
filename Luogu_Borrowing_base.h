#pragma once

#ifndef LUOGU_BORROWING_BASE_H
#define LUOGU_BORROWING_BASE_H

#include <iostream>
#include <cmath>

namespace SM{
	void eg_1_1() {
		std::cout << "I love Luogu!";
	}

	void eg_1_2() {
		std::cout << 2 + 4 << " " << 10 - 2 - 4;
	}

	void eg_1_3() {
		std::cout << 14 / 4 << std::endl;
		std::cout << 14 / 4 * 4 << std::endl;
		std::cout << 14 - 14 / 4 * 4 << std::endl;
		// std::cout << 14 % 4 << std::endl;
	}

	void eg_1_4() {
		std::cout << 500.0 / 3 << std::endl;
	}

	void eg_1_5() {
		std::cout << 500.0 / 3 << std::endl;
		std::cout << 5000000.0 / 3 << std::endl;
		std::cout << 0.000005 / 3 << std::endl;
		std::cout << 5e6 / 3 + 5e-6 / 3 - 5e6 / 3 << std::endl;
	}

	void eg_1_6() {
		std::cout << (260 + 220) / (12 + 20) << std::endl;
	}

	void eg_1_7() {
		std::cout << sqrt(pow(6, 2) + pow(9, 2)) << std::endl;
	}

	void eg_1_8() {
		int balance = 100;
		balance = balance + 10;
		std::cout << balance << std::endl;
		balance -= 20;
		std::cout << balance << std::endl;
		balance = 0;
		std::cout << balance << std::endl;
	}

	void eg_1_9() {
		double r = 5;
		const double PI = 3.141593;
	//#define PI 3.141593
		std::cout << 2 * PI * r << std::endl;
		std::cout << PI * r * r << std::endl;
		std::cout << 4.0 / 3 * PI * pow(r, 3) << std::endl;
	//#undef PI
	}

	void eg_1_10() {
		int num = 1;
		num = (num + 1) * 2;
		num = (num + 1) * 2;
		num = (num + 1) * 2;
		std::cout << num << std::endl;
	}

	void eg_1_11() {
		int n1 = 8, t1 = 30, n2 = 10, t2 = 6;
		int t3 = 10;
		double inc_rate = (1.0 * n1 * t1 - n2 * t2) / (t1 - t2);
		double init_num = n2 * t2 - inc_rate * t2;
		double ans = (init_num + t3 * inc_rate) / t3;
		std::cout << ans;
	}

	void ex_1_4_1() {
		std::cout << 27 << "\n";
	}

	void ex_1_4_2() {
		std::cout << 140 << "\n";
	}

	void ex_1_4_3() {
		std::cout << 200 << " " << 280 << "\n";
	}

	void ex_1_4_4() {
		std::cout << 47 << " " << 12 << "\n";
	}

	void ex_1_4_5(){
		std::cout << 24 << "\n";
	}

	void ex_1_4_6() {
		std::cout << 12 << " " << 23 << "\n";
	}

	void ex_1_4_7() {
		std::cout << 11876.86 << " " << 12000 << "\n";
	}

	void eg_2_1() {
		int v_a = 5, v_yao = 8, distance = 100;
		double delta, ans;
		delta = v_yao - v_a;
		ans = distance / delta;
		//ans = 1.0 * dustance / (v_yao - v_a);
		std::cout << ans << std::endl;
	}

	void eg_2_2() {
		int ans1;
		char ans2;
		ans1 = 'M' - 'A' + 1;
		ans2 = 'A' + 18 - 1;
		std::cout << ans1 << std::endl;
		std::cout << ans2 << std::endl;
	}

	void eg_2_3() {
	#define PI 3.141593
		int r1 = 4, r2 = 10;
		double V, l;
		V = 4.0 / 3 * PI * (r1 * r1 * r1 + r2 * r2 * r2);
		l = pow(V, 1.0 / 3);
		std::cout << (int)l << std::endl;

	#undef PI
	}

	void eg_2_4() {
		double a = 1, b = -100, c = 2400;
		double delta, ans;
		delta = pow(b, 2) - 4 * a * c;
		ans = (-b + sqrt(delta)) / (2 * a);
		std::cout << 110 - int(ans + 0.5) << std::endl;
	}

	void eg_2_5() {
		int t, n;
		std::cin >> t >> n;
		std::cout << t * n << std::endl;
	}

	void eg_2_6() {
		char ch, ans;
		std::cin >> ch;
		ans = ch - 'a' + 'A';
		std::cout << ans;
	}

	void eg_2_7() {
		double p;
		int q, a, b, c, d;
		std::cin >> p;
		q = int(p * 10);
		a = q / 1000;
		b = q / 100 % 10;
		c = q / 10 % 10;
		d = q % 10;
		std::cout << d << "." << c << b << a << std::endl;
	}



}

#endif // LUOGU_BORROWING_BASE_H