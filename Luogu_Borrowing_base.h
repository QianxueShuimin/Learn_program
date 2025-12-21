#pragma once

#ifndef LUOGU_BORROWING_BASE_H
#define LUOGU_BORROWING_BASE_H

#include "Header_file.h"

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
		Classroom_temp1 = Students_temp1 * Time_temp1 * rate;
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

	inline void ex_2_2() {
		double a  = 0.0, b = 0.0, c = 0.0;
		std::cin >> a >> b >> c;

		double p = (a + b + c) / 2;
		double delta = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("%.1f\n", delta);
	}

	inline void ex_2_3() {
    	//eg_2_1
    	{
        	int v_a = 5, v_yao = 8, distance = 100;
        	double delta, ans;
        	delta = v_yao - v_a;
        	ans = distance / delta;
        	printf("%.15f\n", ans);
    	}

    	//eg_2_2
    	{
        	int ans1;
        	char ans2;
        	ans1 = 'M' - 'A' + 1;
        	ans2 = 'A' + 18 - 1;
        	printf("%d\n", ans1);
        	printf("%c\n", ans2);
    	}

    	//eg_2_3
    	{
        	#define PI 3.141593
        	int r1 = 4, r2 = 10;
        	double V, l;
        	V = 4.0 / 3 * PI * (r1 * r1 * r1 + r2 * r2 * r2);
        	l = pow(V, 1.0 / 3);
        	printf("%d\n", (int)l);
        	#undef PI
    	}

    	//eg_2_4
    	{
        	double a = 1, b = -100, c = 2400;
        	double delta, ans;
        	delta = pow(b, 2) - 4 * a * c;
        	ans = (-b + sqrt(delta)) / (2 * a);
        	printf("%d\n", 110 - (int)(ans + 0.5));
    	}

    	//eg_2_5
    	{
        	int t, n;
        	scanf("%d %d", &t, &n);
        	printf("%d\n", t * n);
    	}

    	//eg_2_6
    	{
        	char ch, ans;
        	scanf(" %c", &ch);
        	ans = ch - 'a' + 'A';
        	printf("%c\n", ans);
    	}

    	//eg_2_7
    	{
        	double p;
        	int q, a, b, c, d;
        	scanf("%lf", &p);
        	q = (int)(p * 10);
        	a = q / 1000;
        	b = q / 100 % 10;
        	c = q / 10 % 10;
        	d = q % 10;
        	printf("%d.%d%d%d\n", d, c, b, a);
    	}

    	//eg_2_8
    	{
        	double t;
        	int n;
        	scanf("%lf %d", &t, &n);
        	printf("%.3f\n%d\n", t / n, n * 2);
    	}

    	//eg_2_9
    	{
        	int a, b, t;
        	scanf("%d %d", &a, &b);
        	t = a; a = b; b = t;
        	printf("%d %d\n", a, b);
    	}

    	//eg_2_10
    	{
        	int a, b, c, d, e, f, delta;
        	scanf("%d %d %d %d", &a, &b, &c, &d);
        	delta = (60 * c + d) - (60 * a + b);
        	e = delta / 60;
        	f = delta % 60;
        	printf("%d %d\n", e, f);
    	}

    	//eg_2_11
    	{
        	int a, b, c;
        	scanf("%d %d %d", &a, &b, &c);
        	printf("%d\n", a * 2 / 10 + b * 3 / 10 + c * 5 / 10);
    	}

    	//eg_2_12
    	{
        	int s, v;
        	scanf("%d %d", &s, &v);
        	int t_walk = (int)ceil(1.0 * s / v) + 10;
        	int from_zero = 60 * (24 + 8) - t_walk;
        	int hh = (from_zero / 60) % 24;
        	int mm = from_zero % 60;
        	printf("%02d:%02d\n", hh, mm);
    	}
	}

	inline void ex_2_4() {
		float a = 0.1;
		printf("%d", int(2 - a * a * 100));
		//printf("%.10f", 2 - a * a *100);
	}

	inline void ex_2_5() {
		int a = 0, b = 0;
		std::cin >> a >> b;
		std::cout << (a * 10 + b) / 19 << "\n";
	}

	inline void ex_2_6() {
		int m = 0, t = 0, s = 0;
		std::cin >> m >> t >> s;

		std::cout << m- (s / t) << "\n";
	}

	inline void ex_2_7() {
		std::cout << "Ŀǰδ������\n";
	}

	inline void eg_3_1() {
		int a = 0, b = 0;
		std::cin >> a >> b;
		std::cout << (a > b) << " ";
		std::cout << (a <= b) << " ";
		std::cout << (a != b) << "\n";
	}

	inline void eg_3_2() {
		int x = 0;
		bool p1 = false, p2 = false;

		std::cin >> x;
		p1 = x % 2 == 0;
		p2 = 4 < x && x <= 12;

		std::cout << (p1 && p2) << ' ';
		std::cout << (p1 || p2) << ' ';
		std::cout << (p1 ^ p2) << ' ';
		std::cout << (!p1 && !p2);
		//std::cout << !(p1 || p2);
	}

	inline void eg_3_3() {
		int x = 0;
		bool p = false;

		std::cin >> x;
		p = (x % 400 == 0) || (x % 4 == 0) && (x % 100 != 0);
		//p = !(x % 400) || !(x % 4) && x % 100;

		std::cout << p << "\n";
	}

	inline void eg_3_4() {
		int x = 0;
		std::cin >> x;

		std::cout << "Today, I ate " << x << " apple";
		if (x != 0 && x != 1) {	//!(x == 0 || x == 1)
			std::cout << "s";
		}

		std::cout << ".\n";
	}

	inline void eg_3_5() {
		int n = 0;
		std::cin >> n;

		if ((5 * n) < (11 + 3 * n)) {
			std::cout << "Local\n";
		}
		else {
			std::cout << "Luogu\n";
		}
	}

	inline void eg_3_6() {
		char opt{};
		std::cin >> opt;

		switch (opt)
		{
		case 'G':
			std::cout << "Hello, my master!\n";
		case 'N':
			std::cout << "I'm Xiaoluo.\n";
			break;
		case 'S':
			std::cout << "Teinei teinei teinei~\n";
			break;
		case 'B':
		case 'Q':
			std::cout << "Bye bye!\n";
			break;
		default:
			std::cout << "Sorry...\n";
		}
	}

	inline void eg_3_7() {
		double m = 0.0, h = 0.0, BMI = 0.0;
		std::cin >> m >> h;

		BMI = m / h / h;
		if (BMI < 18.5) {
			std::cout << "Underweight\n";
		}
		else if (BMI < 24) {
			std::cout << "Normal\n";
		}
		else {
			std::cout << BMI << std::endl;
			std::cout << "Overweight" << std::endl;
		}
	}

	inline void eg_3_8() {
		int a = 0, b = 0, c = 0;
		std::cin >> a >> b >> c;
		scanf("%d %d %d", &a, &b, &c);

		if (a <= b && b <= c) {
			printf("%d %d %d\n", a, b, c);
		}
		else if (a <= c && c <= b) {
			printf("%d %d %d\n", a, c, b);
		}
		else if (b <= a && a <= c) {
			printf("%d %d %d\n", b, a, c);
		}
		else if (b <= c && c <= a) {
			printf("%d %d %d\n", b, c, a);
		}
		else if (c <= a && a <= b) {
			printf("%d %d %d\n", c, a, b);
		}
		else {	//if (c <= b && b <= a)
			printf("%d %d %d\n", c, b, a);
		}

		//eg_3_8 �ڶ��ֽⷨ
		/*
		int a = 0, b = 0, c = 0;
		scanf("%d %d %d", &a, &b, &c);
		if (a >= b && a >= c) {
			if (b >= c) {
				printf("%d %d %d\n", c, b, a);
			}
			else {
				printf("%d %d %d\n", b, c, a);
			}
		}
		else if (b >= a && b >= c) {
			if (a >= c) {
				printf("%d %d %d\n", c, a, b);
			}
			else {
				printf("%d %d %d\n", a, c, b);
			}
		}
		else {	//if (c >= a && c >= b)
			if (a >= b) {
				printf("%d %d %d\n", b, a, c);
			}
			else {
				printf("%d %d %d\n", a, b, c);
			}
		}
		*/
	}

	inline void eg_3_9() {
		int y = 0, m = 0;
		std::cin >> y >> m;
		switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			std::cout << 31 << "\n";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			std::cout << 30 << "\n";
			break;
		case 2:
			if (!(y % 400) || !(y % 4) && y % 100) {
				std::cout << 29 << "\n";
			}
			else {
				std::cout << 28 << "\n";
			}
			break;
		default:
			break;
		}
	}

	inline void eg_3_10() {
		int t1 = 0, t2 = 0, maxtime = 8, maxday = 0;

		std::cin >> t1 >> t2;
		if (t1 + t2 > maxtime) {
			maxtime = t1 + t2;
			maxday = 1;
		}

		std::cin >> t1 >> t2;
		if (t1 + t2 > maxtime) {
			maxtime = t1 + t2;
			maxday = 2;
		}

		std::cin >> t1 >> t2;
		if (t1 + t2 > maxtime) {
			maxtime = t1 + t2;
			maxday = 3;
		}

		std::cin >> t1 >> t2;
		if (t1 + t2 > maxtime) {
			maxtime = t1 + t2;
			maxday = 4;
		}

		std::cin >> t1 >> t2;
		if (t1 + t2 > maxtime) {
			maxtime = t1 + t2;
			maxday = 5;
		}

		std::cin >> t1 >> t2;
		if (t1 + t2 > maxtime) {
			maxtime = t1 + t2;
			maxday = 6;
		}

		std::cin >> t1 >> t2;
		if (t1 + t2 > maxtime) {
			maxtime = t1 + t2;
			maxday = 7;
		}

		std::cout << maxday << "\n";
	}

	inline void eg_3_11() {
		int n = 0, n1 = 0, n2 = 0, n3 = 0, p1 = 0, p2 = 0, p3 = 0, t1 = 0, t2 = 0, t3 = 0, total = 0;
		std::cin >> n >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;

		t1 = !(n % n1) ? n / n1 * p1 : (n / n1 + 1) * p1;
		t2 = !(n % n2) ? n / n2 * p2 : (n / n2 + 1) * p2;
		t3 = !(n % n3) ? n / n3 * p3 : (n / n3 + 1) * p3;

		total = t1;
		if (t2 < total) total = t2;
		if (t3 < total) total = t3;

		std::cout << total << "\n";
	}

	inline void eg_3_12() {
		char a{}, b{}, c{}, d{}, e{}, f{}, g{}, h{}, i{}, j{};
		int check = 0;

		scanf("%c - %c %c %c - %c %c %c %c %c - %c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
		check = ((a - '0') * 1 + (b - '0') * 2 + (c - '0') * 3 + (d - '0') * 4 + (e - '0') * 5 + (f - '0') * 6 + (g - '0') * 7 + (h - '0') * 8 + (i - '0') * 9);
		check %= 11;

		if (j == 'X' && check == 10 || check == j - '0') {
			printf("Right\n");
		}
		else {
			printf("%c - %c %c %c - %c %c %c %c %c - %c", a, b, c, d, e, f, g, h, i, check == 10 ? 'X' : check + '0');
		}
	}

	inline void ex_3_1() {
		int a = 3, b = 4, c = 5;
		std::cout << (a < b || b > c || a > b) << "\n";
		std::cout << (a > c || b > a && c > b) << "\n";
		std::cout << (b - a == c - b) << "\n";
		std::cout << (a * b - c > a * c - b || a * b + b * c == b * b * (c - a)) << "\n";
	}

	inline void ex_3_2() {
		int a = 1, b = 0, c = 1;
		std::cout << (!a || !b) << "\n";
		std::cout << ((a && !a) ||  (b || !b)) << "\n";
		std::cout << (a && b && c || !a || !c) << "\n";
		std::cout << (a && (b && c || a && c)) << "\n";
		std::cout << (!b && (c && (a && (!c || (!b || (!a)))))) << "\n";  
	}

	inline void ex_3_3() {
		int x = 0;
		std::cin >> x;

		std::cout << (x % 2 == 0) << "\n";
		std::cout << (x >= 1000 && x < 10000) << "\n";
		std::cout << (x >= 0 && int(sqrt(x) + 0.5) * int(sqrt(x) + 0.5) == x);
		
		int x_cbrt = static_cast<int>(cbrt(x) + (cbrt(x) >= 0 ? 0.5 : -0.5));
		std::cout << (x_cbrt * x_cbrt * x_cbrt == x && x %2 != 0 && x >= 100 && x < 1000);

		int x_first = 0;
		while (x > 10) {
			x_first = (x /= 10);
		}

		std::cout << (x_first * x_first * x_first == x && x >= 100 && x < 1000);
	}

	inline void ex_3_4() {
		double n = 0;
		std::cin >> n;

		if (n <= 150) {
			printf("%.1f\n", 0.4463 * (double)n);
		}

		else if (n > 150 && n <= 400) {
			n = ((n - 150) * 0.4663) + (150 * 0.4463);
			printf("%.1f\n", (double)n);
		}	

		else {
			n = (150 * 0.4463) + (250 * 0.4663) + ((n - 400) * 0.5663);
			printf("%.1f\n", (double)n);
		}
	}

	inline void ex_3_5() {
		int x = 0, n = 0, g = 0;
		std::cin >> x >> n;

		for (int i = 0; i < n; i++) {
			if (x > 7) x = 1;
			if (x < 6) g = g + 250;
			x++;
		}	

		std::cout << g << "\n";
	}

	inline void ex_3_6() {
		int a = 0, b = 0, c = 0;
		std::cin >> a >> b >> c;

		if (a > b) std::swap(a, b);
		if (a > c) std::swap(a, c);
		if (b > c) std::swap(b, c);

		auto gcd = [](int x, int y) -> int {
			x = std::abs(x);
			y = std::abs(y);
			while (y != 0) {
				int r = x % y;
				x = y;
				y = r;
			}
			return x;
		};

		std::cout << a / gcd(a, c) << "/" << c / gcd(a, b) << "\n";
	}

	inline void ex_3_7() {
		int Apple_high[10] = { 0 };

		for (int i = 0; i <= 9; i++) std::cin >> Apple_high[i];

		int TaoTao_high = 0;
		std::cin >> TaoTao_high;
		TaoTao_high = TaoTao_high + 30;

		int k = 0;
		for (int i = 0; i <= 9; i++) if (Apple_high[i] <= TaoTao_high) k++;

		std::cout << k << "\n";
	}

	inline void ex_3_8() {
		int a = 0, b = 0, c = 0;
		std::cin >> a >> b >> c;

		if (a < b) std::swap(a, b);
		if (a < c) std::swap(a, c);
		if (b < c) std::swap(b, c);

		if (b + c <= a) {
			std::cout << "Not triangle" << "\n";
		}

		else if (b + c > a) {
			if (b * b + c * c == a * a) std::cout << "Right triangle" << "\n";
			if (b * b + c * c > a * a) std::cout << "Acute triangle" << "\n";
			if (b * b + c * c < a * a) std::cout << "Obtuse triangle" << "\n";
			if (a == b || b == c || c == a) std::cout << "Isosceles triangle" << "\n";
			if (a == b && b == c) std::cout << "Equilateral triangle" << "\n";
		}
	}

	inline void ex_3_9() {
		int a = 0, b = 0, c = 0;
		std::cin >> a >> b >> c;

		std::string Letter;
		std::cin >> Letter;

		if (a > b) std::swap(a, b);
		if (a > c) std::swap(a, c);
		if (b > c) std::swap(b, c);

		for (int i = 0; i < 3; i++) {
			if (Letter[i] == 'A') std::cout << a;
			if (Letter[i] == 'B') std::cout << b;
			if (Letter[i] == 'C') std::cout << c;
			if (i < 2) std::cout << " ";
		}
	}

	inline void eg_4_1() {
		int L = 0;
		std::cin >> L;
		for (int i = 1; i <= L; i++) {
			std::cout <<"Today, I ate " << i << " apple";
			if (i != 0 && i != 1) {
				std::cout << "s";
			}
			std::cout << ".\n";
		}
	}

	inline void eg_4_2() {
		int n = 0, tmp = 0, minnum = 100000000;
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			std::cin >> tmp;
			if (tmp < minnum) {
				minnum = tmp;
			}
		}

		std::cout << minnum << "\n";
	}

	inline void eg_4_3() {
		int n = 0, k = 0, Asum = 0, Bsum = 0;
		scanf("%d %d", &n, &k);
		
		for (int i = k; i <= n; i += k) {
			Asum += i;
		}

		Bsum = (1 + n) * n / 2 - Asum;
		/*
		printf("%.1f", double(Asum) / (n / k));
		printf("%.1f", double(Bsum) / (n - n / k));
		*/
		printf("%.1f", static_cast<double>(Asum) / (static_cast<double>(n) / k));
		printf("%.1f", static_cast<double>(Bsum) / (n - static_cast<double>(n) / k));
	}

	inline void eg_4_4() {
		int a = 0, days = 1;
		std::cin >> a;
		
		while (a > 1) {
			days++;
			a /= 2;
		}
		std::cout << days << "\n";
	}

	inline void eg_4_5() {
		int ans = 0, guess = 0;
		srand(time(0));
		ans = rand() % 100 + 1;

		do {
			std::cin >> guess;
			if (guess < ans) {
				std::cout << "Too small\n";
			}
			if (guess > ans) {
				std::cout << "Too large\n";
			}
		} while (ans != guess);

		std::cout << "You are right!!\n";
	}

	inline void eg_4_6() {
		int cnt = 0, n = 0;
		scanf("%d", &n);

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n - i + 1; j++) {
				printf("%02d", ++cnt);
			}
			printf("\n");
		}
	}

	inline void eg_4_7() {
		long long n = 0, ans = 0;
		std::cin >> n;
		
		for (int i = 1; i <= n; i++) {
			long long factor = 1;
			for (int j = 1; j <= i; j++) {
				factor *= j;
			}
			ans += factor;
		}

		std::cout << ans << "\n";
	}

	inline void eg_4_8() {
		int n = 0, x = 0, ans = 0;
		std::cin >> n >> x;

		for (int i = 1; i <= n; i++) {
			int tmp = i, num = 0;

			while (tmp != 0) {
				num = tmp % 10;
				if (num == x) {
					ans++;
				}
				tmp /= 10;
			}
		}

		std::cout << ans << "\n";
	}

	inline void eg_4_9() {
		int k = 0, ans = 0;
		std::cin >> k;

		for (double Sn = 0.0; Sn <= k; ans++, Sn += 1.0 / ans);
		std::cout << ans << "\n";
	}

	inline void eg_4_10() {
		int k = 0, coin = 0, day = 0;
		std::cin >> k;

		for (int i = 1; ; i++) {
			for (int j = 1; j <= i; j++) {
				coin += i;
				day++;

				if (day == k) {
					std::cout << coin << "\n";
					return;
				}
			}
		}
	}

	inline void eg_4_11() {
		int s = 0, n = 0;
		std::cin >> n;

		for (int i = 1; i <= n; i++) {
			s += i;
		}

		std::cout << s << "\n";

		//解法2
		/*
		int s = 0, i = 0, n = 0;
		std::cin >> n;

		while (n--) {
			s += ++i;
		}
		
		std::cout << s << "\n";
		*/
	}

	inline void eg_4_12() {
		int n;
		std::cin >> n;
		
		if (n < 0 || n > 100) {
			return;
		}
		
		int terms = 10 * n - 1;
		double sum = terms / 2.0 * (0.1 + (n - 0.1));
		
		std::cout << sum << "\n";
	}

	inline void eg_4_13() {
		int L = 0, load = 0, ans = 0;
		std::cin >> L;
		
		for (int i = 2; ; i++) {
			int is_prime = 1;
			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					is_prime = 0;
					break;
				}
			}

			if (!is_prime) continue;
			if (i + load > L) {
				break;
			}

			std::cout << i << "\n";
			
			ans++;
			load += i;
		}

		std::cout << ans;
	}

	inline void eg_4_14() {
		int a = 0, b = 0;
		std::cin >> a >> b;

		if ( a <= 5 && b >= 5) {
			std::cout << 5 << "\n";
		}
		if (a <= 7 && b >= 7) {
			std::cout << 7 << "\n";
		}
		if (a <= 11 && b >= 11) {
			std::cout << 11 << "\n";
		}

		for (int d1 = 1; d1 <= 9; d1 += 2) {
			for (int d2 = 0; d2 <= 9; d2++) {
				int num = 100 * d1 + 10 * d2 + d1;
				if (num < a) {
					continue;
				}
				if (num > b) {
					return;
				}
				
				int flag = 1;
				for (int j = 3; j * j <= num; j++) {
					if (num % j == 0) {
						flag = 0;
						break;
					}
				}
				if (flag) {
					std::cout << num << "\n";
				}
			}
		}  
		for (int d1 = 1; d1 <= 9; d1 += 2) {
			for (int d2 = 0; d2 <= 9; d2++) {
				for (int d3 = 0; d3 <= 9; d3++) {
					int num = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;
					if (num < a) {
						continue;
					}
					if (num > b) {
						return;
					}

					int flag = 1;
					for (int j = 3; j * j <= num; j++) {
						if (num % j == 0) {
							flag = 0;
							break;
						}
					}
					if (flag) {
						std::cout << num << "\n";
					}
				}
			}
		}
		for (int d1 = 1; d1 <= 9; d1 += 2) {
			for (int d2 = 0; d2 <= 9; d2++) {
				for (int d3 = 0; d3 <= 9; d3++) {
					for (int d4 = 0; d4 <=9; d4++) {
						int num = 1000000 * d1 + 100000 * d2 + 10000 * d3 + 1000 * d4 + 100 * d3 + 10 * d2 + d1;
						if (num < a) {
							continue;
						}
						if (num > b) {
							return;
						}

						int flag = 1;
						for (int j = 3; j * j <= num; j++) {
							if (num % j == 0) {
								flag = 0;
								break;
							}
						}
						if (flag) {
							std::cout << num << "\n";
						}
					}
				}                   
			}
		}
	}

	inline void ex_4_1() {
		std::cout << "题目为：如果想求一个数列的最大值，还要求出是第几个数字是最大的，该如何实现呢？\n";
		std::cout << "回答为：有公式套公式，没有公式就将[值][编号]计入到二维数组vector中，并且只排序\n";
		std::cout << "[值]，随后获取该值对应的编号并输出\n";
	}

	inline void ex_4_2() {
		double s = 0.0, bu = 2.0, y = 0.0;
		std::cin >> s;

		if (s <= bu) {
			std::cout << 1 << "\n";
			return;
		}
		else {
			while (s > 2) {
				bu *= 0.98;
				s -= bu;
				y++;
			}
			y++;
		}

		std::cout << y;
	}

	inline void ex_4_3() {
		std::string Str_i = "";
		std::cin >> Str_i;

		int Int_i = std::stoi(Str_i);
		bool Bool_i_Reverse = false;
		bool Bool_i_Minus = false; 

		if (Int_i == 0) {
			std::cout << 0 << std::endl;
			return;
		}

		if (Int_i % 10 == 0) {
			Bool_i_Reverse = true;
		}
		while(Bool_i_Reverse) {
			Int_i = Int_i / 10;
			if (Int_i % 10 != 0) Bool_i_Reverse = false;
		}

		if (Int_i < 0) {
			Int_i = -Int_i;
			Bool_i_Minus = true;
		}

		Str_i = std::to_string(Int_i);

		std::string Str_i_Reverse;
		for (int i = Str_i.size() - 1; i >= 0; i--) {
			Str_i_Reverse += Str_i[i];
		}

		if (Bool_i_Minus) {
			std::cout << "-" << Str_i_Reverse << std::endl;
		}
		else {
			std::cout << Str_i_Reverse << std::endl;
		}
	}

	inline void ex_4_4() {
		double n = 0.0;
    	std::cin >> n;

    	double F_n = (std::pow(((1 + sqrt(5)) / 2), n) - std::pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
    	printf("%.2f \n", F_n);
	}

	inline void ex_4_5() {
		int n = 0;
		std::cin >> n;

		std::vector<int> a;
		int temp1 = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> temp1;
			a.push_back(temp1);
		}
		
		std::sort(a.begin(), a.end());
		std::cout << a[a.size() - 1] - a[0] << "\n";
	}

	inline void ex_4_6() {
		int n =  0;
		std::cin >> n;

		int temp1 = 0;
		std::vector<int> a;
		for (int i = 0; i < n; i++) {
			std::cin >> temp1;
			a.push_back(temp1);
		}
		
		int sum = 0;
		int temp2 = 1;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] == a[i + 1] - 1) {
				temp2++;
			}
			else {
				sum = std::max(sum, temp2);
				temp2 = 1;
			}
		}
		sum = std::max(sum, temp2);

		std::cout << sum << "\n";
	}

	inline void ex_4_7() {
		int n = 0;
		std::cin >> n;

		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				std::cout << n / i << "\n";
				return;
			}
		}
		
		return;
	}

	inline void ex_4_8() {
		int n = 0;
		std::cin >> n;
		
		int current = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%02d", current);
				current++;
			}
			std::cout << "\n";
		}

		std::cout << "\n";

		current = 1;
		int total_width = 2 * n;
		
		for (int i = 0; i < n; i++) {
			int num_count = i + 1;
			int space_count = total_width - 2 * num_count;
			
			for (int s = 0; s < space_count; s++) {
				std::cout << " ";
			}
			
			for (int j = 0; j < num_count; j++) {
				printf("%02d", current);
				current++;
			}
			
			std::cout << "\n";
		}
	}

	inline void ex_4_9() {
		int n = 0;
		std::cin >> n;
		std::vector<int> a;

		int temp1 = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> temp1;
			a.push_back(temp1);
		}

		sort(a.begin(), a.end());

		double sum = 0.0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		sum = sum - (a[0] + a[a.size() - 1]);
		
		sum = sum / (n - 2);

		printf("%.2f", sum);
	}

	inline void ex_4_10() {
		int n = 0;
    	std::cin >> n;

		n /= 364;
		if(n <= 103) {
			std::cout << n - 3 << "\n" << 1 << "\n";
		}
		else {
			if(n % 3 == 0) {
				std::cout << 99 << "\n" << (n - 99) / 3 << "\n";
			}
			if(n % 3 == 1) {
				std::cout << "100" << "\n" << (n - 100) / 3 << "\n";
			}
			if(n % 3 == 2) {
				std::cout << 98 << "\n" << (n - 98) / 3 << "\n";
			}
		}
	}

	inline void ex_4_11() {
		double ma = 0.0;
		int temp1 = 0;
		std::vector<int> a;

		for (int i = 0; i < 12; i++) {
			std::cin >> temp1;
			a.push_back(temp1);
		}

		int sum = 0;
		for (int i = 0; i < 12; i++) {
			int temp2 = 0;
			temp2 += 300 - a[i];
			sum += temp2;
			if (sum < 0) {
				std::cout << "-" << i + 1 << "\n";
				return;
			}
			if (sum >= 100) {
				int temp3 = 0;
				temp3 = sum % 100;
				ma += sum - temp3;
				sum = temp3;
			}
		}

		std::cout << ma * 1.2 + sum;
	}

	inline void eg_5_1() {
		int a[110], n;
		std::cin >> n;

		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}	
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = i - 1; j >= 0; j--) {
				if (a[j] < a[i]) {
					cnt++;
				}
			}

			std::cout << cnt << " ";
		}
	}

	inline void eg_5_2() {
		int n = 0, tmp = 0, a[110];
		do {
			std::cin >> tmp;
			a[n] = tmp;
			n++;
			//std::cin >> a[n++];
		} while (tmp != 0);
		n--;
		while (n--) {
			std::cout << a[n] << " ";
		}
	}

	inline void eg_5_3() {
	#define MAXN 205

		int n = 0, num = 0, a[MAXN];
		std::cin >> n;
		while (n != 1) {
			a[num] = n;
			num++;
			//a[num++] = n;

			if (n % 2 == 0) {
				n /= 2;
			}
			else {
				n = 3 * n + 1;
			}
		}
		a[num] = 1;
		for (int i = num; i >= 0; i--) {
			std::cout << a[i] << " ";
		}

	#undef MAXN
	}

	inline void eg_5_4() {
		int l = 0, m = 0, tree[10010] = { 0 }, a = 0, b = 0, s = 0;
		std::cin >> l >> m;
		
		//memset(tree, 0, sizeof(tree));
		for (int i = 0; i < m; i++) {
			std::cin >> a >> b;
			for (int j = a; j <= b; j++) {
				tree[j] = 1;
			}
		}
		for (int i = 0; i <= l; i++) {
			if (tree[i] == 0) {
				s++;
			}
		}
		std::cout << s << "\n";
	}

	inline void eg_5_5() {
	#define MAXN 1024

		int n = 0, a[3][MAXN], ans = 0;
		std::cin >> n;

		for (int i = 1; i <= n; i++) {
			std::cin >> a[0][i] >> a[1][i] >> a[2][i];
		}
		for (int i = 1; i <= n - 1; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (abs(a[0][i] - a[0][j]) <= 5
					&& abs(a[1][i] - a[1][j]) <= 5
					&& abs(a[2][i] - a[2][j]) <= 5
					&& abs(a[0][i] + a[1][i] + a[2][i] - a[0][j] - a[1][j] - a[2][j]) <= 10
				) {
					ans++;
				}
			}
		}

		std::cout << ans << "\n";

	#undef MAXN
	}

	inline void eg_5_6() {
	#define MAXN 55

		int n = 0, m = 0, a[MAXN][MAXN] = { 0 };
		memset(a, 0, sizeof(a));
		std::cin >> n >> m;

		for (int i = 1; i <= m; i++) {
			int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
			std::cin >> x1 >> y1 >> x2 >> y2;

			for (int j = x1; j <= x2; j++) {
				for (int k = y1; k <= y2; k++) {
					a[j][k]++;
				}
			}
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				std::cout << a[i][j] << (j == n ? '\n' : ' ');
			}
		}

	#undef MAXN
	}

	inline void eg_5_7() {
		int v[22][22][22], w = 0, x = 0, h = 0, q = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0, z1 = 0, z2 = 0, ans= 0;
		std::cin >> w >> x >> h >> q;
		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= x; j++) {
				for (int k = 1; k <= h; k++) {
					v[i][j][k] = 1;
				}
			}
		}
		while (q--) {
			std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
			for (int i = x1; i <= x2; i++) {
				for (int j = y1; j <= y2; j++) {
					for (int k = z1; k <= z2; k++) {
						v[i][j][k] = 0;
					}
				}
			}
		}
		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= x; j++) {
				for (int k = 1; k <= h; k++) {
					ans += v[i][j][k];
				}
			}
		}
		std::cout << ans << "\n";
	}

	inline void eg_5_8() {
		int n = 0, a[10], num[10] = { 10 };
		std::cin >> n;
		for (int i = 1; i <= 7; i++) {
			std::cin >> a[i];
		}
		while (n--) {
			int ans = 0;
			for (int i = 1; i <= 7; i++) {
				int x = 0;
				std::cin >> x;
				for (int j = 1; j <= 7; j++) {
					if (a[j] == x) {
						ans++;
					}
				}
			}
			num[ans]++;
		}
		for (int i = 7; i; i--) {
			std::cout << num[i] << (i == 1 ? '\n' : ' ');
		}
	}

	inline void eg_5_9() {
		int n = 0, g[40][40], x = 0, y = 0;
		std::cin >> n;
		
		g[1][n / 2 + 1] = 1;
		x = 1, y = n / 2 + 1;

		for (int i = 2; i <= n * n; i++) {
			if (x == 1 && y != n) {
				g[n][y + 1] = i;
				x = n, y++;
			}
			else if (y == n && x != 1) {
				g[x - 1][1] = i;
				x--, y = 1;
			}
			else if (x == 1 && y == n) {
				g[2][n] = i;
				x = 2;
			}
			else if (x != 1 && y != n) {
				if (g[x - 1][y + 1] == 0) {
					g[x - 1][y + 1] = i;
					x--, y++;
				}
				else {
					g[x + 1][y] = i;
					x++;
				}
				continue;
			}
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; i <= n; j++) {
				std::cout << g[i][j] << " ";
			}
			std::cout << "\n";
		}
	}

	inline void eg_5_10() {
		int tubes[10][8] = { 
			{6, 0, 1, 2, 4, 5, 6}, {2, 2, 5}, {5, 0, 2, 3, 4, 6}, {5, 0, 2, 3, 5, 6},
			{4, 1, 2, 3, 5}, {5, 0, 1, 3, 5, 6}, {6, 0, 1, 3, 4, 5, 6},
			{3, 0, 2, 5}, {7, 0, 1, 2, 3, 4, 5, 6}, {6, 0, 1, 2, 3, 5, 6}
		};
		int dot[7][3][2] = {
			{{0, 0}, {0, 1}, {0, 2}},
			{{0, 0}, {1, 0}, {2, 0}},
			{{0, 2}, {1, 2}, {2, 2}},
			{{2, 0}, {2, 1}, {2, 2}},
			{{2, 0}, {3, 0}, {4, 0}},
			{{2, 2}, {3, 2}, {4, 2}},
			{{4, 0}, {4, 1}, {4, 2}},
		};
		char num[110], out[5][500];
		int n = 0;
		std::cin >> n;

		for (int i = 0; i < n; i++) {
			std::cin >> num[i];
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 4 * n - 1; j++) {
				out[i][j] = '.';
			}
		}
		for (int i = 0; i < n; i++) {
			int basex = 0, basey = i * 4, digit = num[i] - '0';
			for (int j = 1; j <= tubes[digit][0]; j++) {
				int tubenum = tubes[digit][j];
				out[basex + dot[tubenum][0][0]][basey + dot[tubenum][0][1]] = 'X';
				out[basex + dot[tubenum][1][0]][basey + dot[tubenum][1][1]] = 'X';
				out[basex + dot[tubenum][2][0]][basey + dot[tubenum][2][1]] = 'X';
			}
		}
		for (int i = 0; i < 5; i++, std::cout << "\n") {
			for (int j = 0; j < 4 * n - 1; j++) {
				std::cout << out[i][j];
			}
		}
	}
}

#endif // LUOGU_BORROWING_BASE_H