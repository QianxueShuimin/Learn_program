#pragma once

#ifndef LUOGU_BORROWING_BASE_H
#define LUOGU_BORROWING_BASE_H

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <cstdio>

namespace SM{
	inline void eg_1_1() {
		std::cout << "I love Luogu!";
	}

	inline void eg_1_2() {
		std::cout << 2 + 4 << " " << 10 - 2 - 4;
	}

	inline void eg_1_3() {
		std::cout << 14 / 4 << std::endl;
		std::cout << 14 / 4 * 4 << std::endl;
		std::cout << 14 - 14 / 4 * 4 << std::endl;
		// std::cout << 14 % 4 << std::endl;
	}

	inline void eg_1_4() {
		std::cout << 500.0 / 3 << std::endl;
	}

	inline void eg_1_5() {
		std::cout << 500.0 / 3 << std::endl;
		std::cout << 5000000.0 / 3 << std::endl;
		std::cout << 0.000005 / 3 << std::endl;
		std::cout << 5e6 / 3 + 5e-6 / 3 - 5e6 / 3 << std::endl;
	}

	inline void eg_1_6() {
		std::cout << (260 + 220) / (12 + 20) << std::endl;
	}

	inline void eg_1_7() {
		std::cout << sqrt(pow(6, 2) + pow(9, 2)) << std::endl;
	}

	inline void eg_1_8() {
		int balance = 100;
		balance = balance + 10;
		std::cout << balance << std::endl;
		balance -= 20;
		std::cout << balance << std::endl;
		balance = 0;
		std::cout << balance << std::endl;
	}

	inline void eg_1_9() {
		double r = 5;
		const double PI = 3.141593;
	//#define PI 3.141593
		std::cout << 2 * PI * r << std::endl;
		std::cout << PI * r * r << std::endl;
		std::cout << 4.0 / 3 * PI * pow(r, 3) << std::endl;
	//#undef PI
	}

	inline void eg_1_10() {
		int num = 1;
		num = (num + 1) * 2;
		num = (num + 1) * 2;
		num = (num + 1) * 2;
		std::cout << num << std::endl;
	}

	inline void eg_1_11() {
		int n1 = 8, t1 = 30, n2 = 10, t2 = 6;
		int t3 = 10;
		double inc_rate = (1.0 * n1 * t1 - n2 * t2) / (t1 - t2);
		double init_num = n2 * t2 - inc_rate * t2;
		double ans = (init_num + t3 * inc_rate) / t3;
		std::cout << ans;
	}

	inline void ex_1_4_1() {
		std::cout << 27 << "\n";
	}

	inline void ex_1_4_2() {
		std::cout << 140 << "\n";
	}

	inline void ex_1_4_3() {
		std::cout << 200 << " " << 280 << "\n";
	}

	inline void ex_1_4_4() {
		std::cout << 47 << " " << 12 << "\n";
	}

	inline void ex_1_4_5(){
		std::cout << 24 << "\n";
	}

	inline void ex_1_4_6() {
		std::cout << 12 << " " << 23 << "\n";
	}

	inline void ex_1_4_7() {
		std::cout << 11876.86 << " " << 12000 << "\n";
	}

	inline void eg_2_1() {
		int v_a = 5, v_yao = 8, distance = 100;
		double delta, ans;
		delta = v_yao - v_a;
		ans = distance / delta;
		//ans = 1.0 * dustance / (v_yao - v_a);
		std::cout << ans << std::endl;
	}

	inline void eg_2_2() {
		int ans1;
		char ans2;
		ans1 = 'M' - 'A' + 1;
		ans2 = 'A' + 18 - 1;
		std::cout << ans1 << std::endl;
		std::cout << ans2 << std::endl;
	}

	inline void eg_2_3() {
	#define PI 3.141593
		int r1 = 4, r2 = 10;
		double V, l;
		V = 4.0 / 3 * PI * (r1 * r1 * r1 + r2 * r2 * r2);
		l = pow(V, 1.0 / 3);
		std::cout << (int)l << std::endl;

	#undef PI
	}

	inline void eg_2_4() {
		double a = 1, b = -100, c = 2400;
		double delta, ans;
		delta = pow(b, 2) - 4 * a * c;
		ans = (-b + sqrt(delta)) / (2 * a);
		std::cout << 110 - int(ans + 0.5) << std::endl;
	}

	inline void eg_2_5() {
		int t, n;
		std::cin >> t >> n;
		std::cout << t * n << std::endl;
	}

	inline void eg_2_6() {
		char ch, ans;
		std::cin >> ch;
		ans = ch - 'a' + 'A';
		std::cout << ans;
	}

	inline void eg_2_7() {
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

	inline void eg_2_8() {
		double t;
		int n;
		scanf("%lf %d", &t, &n);
		printf("%.3f\n%d", t / n, n * 2);
	}

	inline void eg_2_9() {
		int a, b, t;
		scanf("%d %d", &a, &b);
		t = a; a = b; b = t;
		printf("%d %d", a, b);
	}

	inline void eg_2_10() {
		int a, b, c, d, e, f, delta;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		delta = (60 * c + d) - (60 * a + b);
		e = delta / 60;
		f = delta % 60;
		printf("%d %d", e, f);
	}
	inline void eg_2_11() {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		printf("%d", a * 2 / 10 + b * 3 / 10 + c * 5 / 10);
	}

	inline void eg_2_12() {
		int s, v;
		scanf("%d %d", &s, &v);
		int t_walk = ceil(1.0 * s / v) + 10;
		int from_zero = 60 * (24 + 8) - t_walk;
		int hh = (from_zero / 60) % 24;
		int mm = from_zero % 60;
		printf("%02d:%02d\n", hh, mm);
	}

	inline void ex_2_1_1() {
		double Students = 0.0, Students_temp1 = 0.0;
		double Time = 0.0, Time_temp1 = 0.0;
		double Classroom = 0.0, Classroom_temp1 = 0.0;

		std::cin >> Students >> Time >> Classroom;
		std::cin >> Students_temp1 >> Time_temp1;

		double rate = Classroom / (Students *Time);
		int Classsroom_temp1 = Students_temp1 * Time_temp1 * rate;
		std::cout << Classroom_temp1 << "\n";
	}

	inline void ex_2_1_2() {
		double sum = 0.0, diff = 0.0;
		std::cin >> sum >> diff;

		//sum = length + width
		//diff = length - width
		double length = (sum + diff) / 2;
		double width = (sum - diff) / 2;

		std::cout << length << " " << width << "\n";
	}

	inline void ex_2_1_3() {
		//Small_A + Uim = Sum;
		//Uim = 1.4 * Small_A;
		int Small_A = 0, Uim = 0, Sum = 0;
		std::cin >> Sum;

		Small_A = Sum / 2.4;
		Uim = Sum - Small_A;

		std::cout << Small_A << " " << Uim << "\n";
	}

	inline void ex_2_1_4() {
		int Impart = 0, Impart_temp1 = 0;
		int Remain = 0, Remain_temp1 = 0;

		std::cin >> Impart >> Remain;
		std::cin >> Impart_temp1 >> Remain_temp1;

		int Sum_People = 0, Sum_Apple = 0;
		Sum_People = (Remain_temp1 - Remain) / (Impart - Impart_temp1);
		Sum_Apple = Impart * Sum_People + Remain;

		std::cout << Sum_People << " " << Sum_Apple << "\n";
	}

	inline void ex_2_1_5() {
		int Small_A = 0, Uim = 0, Uim_Time = 0;
		std::cin >> Small_A >> Uim >> Uim_Time;

		double Time = static_cast<double>(Uim * Uim_Time) / (Small_A - Uim);
		std::cout << Time << "\n";
	}
	
	inline void ex_2_1_6() {
		int Feet = 0, Feet_temp1 = 0;
		int Sum_Head = 0, Sum_Feet = 0;
		std::cin >> Feet >> Feet_temp1 >> Sum_Head >> Sum_Feet;
		
		// x = Sum_Head - y
		int y = (Feet * Sum_Head - Sum_Feet) / (Feet - Feet_temp1);
		int x = Sum_Head - y;
		std::cout << x << " " << y << std::endl;
	}

	inline void ex_2_1_7() {
		double principal = 0.0, rate1 = 0.0, rate2 = 0.0;
		int years = 0;
		std::cin >> principal >> rate1 >> rate2 >> years;

		rate1 /= 100.0;
		rate2 /= 100.0;

		double amountA = principal;
		for (int i = 0; i < years; i++) {
			amountA *= (1 + rate1);
		}

		double amountUim = principal * (1 + rate2 * years);

		printf("%.2f %.2f\n", amountA, amountUim);
	}
}

#endif // LUOGU_BORROWING_BASE_H