#pragma once
#ifndef AJ_JM_JM_CE_CPP 
#define AJ_JM_JM_CE_CPP

#include<iostream>
#include<bitset>
#include<windows.h>
//2022.7.9
#include<cstdio>
#include<conio.h>
#include<stdio.h>

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\全局量.cpp>
#include  <E:\lib\文件读写.cpp>
#include  <E:\lib\文字读取.cpp>

//#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) //必要的，我是背下来的 
///#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")
#//define 检测是否按下 check
//#define 显示文字 print_letter
//#define 长字符 gks
//#define ct VK_CONTROL
// 
//#define 四位个数 swgu
//#define 四位个数初始化 swguiuh
//#define 四位个数一帧 swguyv

using namespace std;


class 按键检测
{
public:
	SYSTEMTIME sys;
	//FILE* fp;
	//errno_t err = fopen_s(&fp, "E:/PINKIE PIE/记忆/输入流存档.cpp", "w+");
	////errno_t err = fopen_s(&fp, 存档路径.c_str(), "w+"); //报错
public:
	string 存档路径无头 = ":/PINKIE PIE/记忆/输入流存档.cpp";
	string 存档路径无头尾 = ":/PINKIE PIE/记忆/输入流存档/";
	string 文件名当前时间;
	//>计数
	int 四位个数 = 0, 四位个数_有数值 = 1, 八位个数 = 0, 四位数个数, 八位数个数, 四位个数初始化 = 0; //>四位个数= >1w的四位数个体 \ 四位个数_有数值= 有数值的四位数个体 \ 四位个数_有数值= 四位个数+1;

	int 计数[46]; //46号出错, 多一个1. 只能有45个
	int 四位个数一帧 = 1, 刷新 = 0; //计数1 = 0, 计数2 = 0, 
	int 按下 = 0; //>按下= 1: 按下, 按下= 2: 放开
	int 现在[1400], 之前[1400];

	int 键盘布局 = 1;

	//初始化 初始化;
	//string 盘符 = 初始化.盘符;
	//string 存档路径 = 盘符 + 存档路径无头;
	string 存档路径;
	fstream 输入流存档;

public:
	//Women dream of world peace, a safe environment, and eliminating hunger. What do men dream of? Being stuck in an elevator with the Doublemint twins.
	按键检测() {

	}
	void 之前和现在归零(int ish) {
		之前[ish] = 0; 现在[ish] = 0;
	}
	void 之前和现在相等(int vqhxzxd) {
		之前[vqhxzxd] = 现在[vqhxzxd];
	}

	void 之前和现在初始化(int vqhxziuh) {
		for (int i = 0; i < vqhxziuh; i++) {
			之前和现在归零(i);
		}
	}
	void 之前和现在批量相等(int vqhxzplxd) {
		for (int i = 0; i < vqhxzplxd; i++) {
			之前和现在相等(i);
		}
	}

	void 如果之前和现在不同(int rgvqhxzbt) {
		for (int i = 1; i < rgvqhxzbt; i++) {
			if (现在[rgvqhxzbt] != 之前[rgvqhxzbt]) { //!现在和之前
				break;
			}
		}
	}

	void color(int cmd颜色) {//改变输出的颜色，比system("color x")快得多
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cmd颜色);
	}

	//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//显示 单按键
	void 显示文字_示例(int c1) { //char string wchar_t
		color(7); //112 白
		printf("  %c  ", c1);
	}
	//按键颜色 
	void 显示文字(int c1) { //char string wchar_t
		if (GetKeyState(c1) < 0) { color(177); }
		else {
			color(7);
		}
		printf("  %c  ", c1);

	}
	void 长字符(int gks1, string str) { //GetKeyState 's'
		if (GetKeyState(gks1) < 0) { color(177); }
		else {
			color(7);
		}
		printf("%s ", str.c_str()); //printf("  %c", gks2);//"  %s", \ cout << gks1;
	}
	void 特殊键(int tuj1, string tuj2) { //符号之类 \ _getch检测
		if (GetKeyState(tuj1) < 0) { color(177); }
		else {
			color(7);
		}
		//if (_kbhit() != 0) {
		//	if (_getch() == tuj1) {
		//		color(177);
		//	}
		//	else {
		//		color(7); //7
		//	}
		//}
		cout << tuj2; //printf("%s ", tuj2.c_str()); //cout << tuj2; //printf("  %s", tuj2);//"  %s",
	}

	//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//cout数字 \ 四位一分开
	auto 清屏并cout数字() //刷新一下
	{
		system("cls");//清屏
		cout数字();
	}
	auto 测试_计数(int 第n个四位数, int uu) {
		计数[第n个四位数] = uu;
	}

	void cout数字_四位个数初始化()
	{
		for (size_t i = 1; i < 14; i++)
		{
			if (计数[i] > 0) {
				四位个数_有数值 = i;
			}
		}
	}

	void cout数字_补充0(int 第n个四位数) //>如果是n位数, 显示4-n个0
	{
		//>左边有数字, 中间+0
		if (四位个数 >= 第n个四位数) { //x左边的四位数有数字, 才需要+0
			int _0的个数 = 4 - to_string(计数[第n个四位数]).size();
			if (_0的个数 >= 0) { //case(负数): 会一直循环 
				for (size_t i = 0; i < _0的个数; i++) {
					cout << "0";
				}
			}
		}
	}
	void cout数字_进位(int 第n个四位数)
	{
		if (计数[第n个四位数] >= 10000) {
			if (四位个数 <= 第n个四位数 - 1) { //限定 \ 只运行一次
				四位个数 = 第n个四位数; //记录位数
				四位个数_有数值 = 第n个四位数 + 1;
			}
			while (计数[第n个四位数] >= 10000) //>进位_限制在4位数 \ 超过4位数就归零
			{
				计数[第n个四位数] = 计数[第n个四位数] - 10000; //进位后归零
				计数[第n个四位数 + 1] += 1; //>左边的四位数 \ 第n+1个四位数
			}
		}
	}
	void 进位_限制在4位数(int 第n个四位数) //进位 /2 \
																																int 第n个四位数, int 第n加1个四位数 \ int 目标, int 目标加1 \ .
	{
		while (计数[第n个四位数] >= 10000)
		{
			计数[第n个四位数] = 计数[第n个四位数] - 10000; //进位后归零
			计数[第n个四位数 + 1] += 1; //>左边的四位数 \ 第n+1个四位数
		}
	}
	void cout_四位数(int 第n个四位数) //cout_四位数个体
	{
		if (四位个数_有数值 >= 第n个四位数) {
			cout << 计数[第n个四位数] << ",";
		}
	}
	//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//cout数字 \ 实现功能
	void cout数字() //显示数字
	{
		//计算/进位 从右往左 
		//显示	  从左往右 \ 是否有数字->补充0->显示数字->右边的四位数 
		//todo 从左到右 四位数一组
		cout数字_四位个数初始化();
		//x..............................................................................
		for (size_t i = 1; i < 14; i++) //从1到140
		{
			cout数字_进位(i);
		}
		//>四位数 进位-->五位数 \ 第1->第2个四位
		//>进位-->九位数 第3个四位
		//x..............................................................................
		for (size_t i = 14; i > 1; i--) //从140到1
		{
			cout数字_补充0(i);
			//cout << i<<"="; //>测试 \ 不然看不懂
			cout_四位数(i);
		}
		//>cout 第3个四位数
		//>补充0 \ 第二个四位数 显示0\ 如果是n位数, 显示4-n个0
		//>cout 第2个四位数
		///>补充0 \ 第一个四位数 显示0
		cout数字_补充0(1);
		cout << 计数[1];
		cout << '\n';
	}

	void cout数字_每次加一() //显示数字
	{
		//>进位-->九位数
		if (计数[2] >= 9999) {
			四位个数 += 1; //进位
			四位个数一帧 = 四位个数;//显示用
			//四位个数 = 四位个数一帧; <-
			计数[3] += 1; //>第二个四位数
			计数[2] = 0;
		}
		//>cout 第3个四位数
		if (四位个数 > 2) {
			//		//cout << 四位个数 << endl; 
					//cout << 计数[四位个数一帧
			cout << 计数[3] << ",";
		}
		//>第二个四位数 显示0
		if (四位个数 > 2) {
			//千位
			if (计数[1] < 1000) { cout << "0"; }
			//cout百位		   
			if (计数[1] < 100) { cout << "0"; }
			//十位
			if (计数[1] < 10) { cout << "0"; }
			//个位
		}

		//>四位数 进位-->五位数
		if (计数[1] >= 9999) {
			四位个数 += 1; //进位
			四位个数一帧 = 四位个数;//显示用
			//四位个数 = 四位个数一帧; <-
			计数[2] += 1; //>第二个四位数
			计数[1] = 0; //进位后归零
		}
		//手动
		if (四位个数 > 1) {
			//		//cout << 四位个数 << endl; 
					//cout << 计数[四位个数一帧
			cout << 计数[2] << ",";
		}

		//中间插0

		//if*3
		/*if (计数[1] < 10)cout << "0";
		if (计数[1] < 100)cout << "0";
		if (计数[1] < 1000)cout << "0";*/

		//1000的if*2 剩下的*3
		///>第一个四位数 显示0
		//cout千位
		if (计数[1] < 1000) { cout << "0"; }
		//cout百位		   
		if (计数[1] < 100) { cout << "0"; }
		//十位
		if (计数[1] < 10) { cout << "0"; }
		//个位
		cout << 计数[1] << endl;


		//自动while
		//while (四位个数一帧 > 0) {
		//	cout << 四位个数 << endl; 
		//	cout << 计数[四位个数一帧]; 
		//	四位个数一帧 -= 1; //要的
		//	//cout << 计数[2];
		//}
		//cout << endl;
		//计数[1] += 1;

		////自动for
		// for(;四位个数一帧>0;四位个数一帧-=1){
		// 	//cout << 四位个数 << endl; 
		//	cout << 计数[四位个数一帧]<< ",";
		//	}
		//cout << endl;
		//计数[1] += 1000;
	}

	//实现 按键显示
	void print() {
		system("cls");//清屏
		//a[数字]才能运行
		cout数字();

		if (按下 == 1) {
			计数[1] += 1; //自增
		}

		//>switch:卡住, 不能运行
		///>键盘布局移出后 \ 计数增加, 不显示其他的
		//switch (键盘布局){case 1:
		//	键盘布局1();
		//	break;
		//case 2:
		//	键盘布局2();
		//	break;
		//default:
		//	break;
		//}

		//>if: 计数不增加
		///>键盘布局移出后 \ 计数增加, 不显示其他的
		//if (键盘布局 == 1){
		//	键盘布局1();
		//}
		//else if (键盘布局 == 2) {
		//	键盘布局2();
		//}

		键盘布局1();
	}

	//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//键盘组件
	void Fn行() {
		长字符(VK_ESCAPE, "ESC "); //24
		长字符(VK_F1, " F1"); //101 
		长字符(VK_F2, " F2"); //102
		长字符(VK_F3, " F3"); //103
		长字符(VK_F4, " F4"); //104
		长字符(VK_F5, " F5"); //105
		长字符(VK_F6, " F6"); //106
		长字符(VK_F7, " F7"); //107
		长字符(VK_F8, " F8"); //108
		长字符(VK_F9, " F9"); //109
		长字符(VK_F10, " F10"); //110
		长字符(VK_F11, " F11"); //111l
		长字符(VK_F12, " F12"); //112
		长字符(VK_DELETE, "DELETE"); //43
		printf("	");
		长字符(VK_PRIOR, "PRIOR"); //30
		长字符(VK_NEXT, "NEXT"); //31
		长字符(VK_HOME, "HOME"); //33
		长字符(VK_END, "END"); //32
	}
	void 数字行() {
		显示文字('1'); 显示文字('2'); 显示文字('3'); 显示文字('4'); 显示文字('5'); 显示文字('6'); 显示文字('7'); 显示文字('8'); 显示文字('9'); 显示文字('0'); //显示文字('9'); 显示文字('0'); 
	}
	void Q行() {
		长字符(VK_TAB, "TAB"); //7
		显示文字('Q'); 显示文字('W'); 显示文字('E'); 显示文字('R'); 显示文字('T'); 显示文字('Y'); 显示文字('U'); 显示文字('I'); 显示文字('O'); 显示文字('P');
	}
	void CAPS行() {
		长字符(VK_CAPITAL, "CAPS"); //14
		显示文字('A'); 显示文字('S'); 显示文字('D'); 显示文字('F'); 显示文字('G'); 显示文字('H'); 显示文字('J'); 显示文字('K'); 显示文字('L');
	}
	void SHIFT行() {
		长字符(VK_SHIFT, "SHIFT"); //10	
		显示文字('Z'); 显示文字('X'); 显示文字('C'); 显示文字('V'); 显示文字('B'); 显示文字('N'); 显示文字('M');
	}
	void Ctrl行() {
		长字符(VK_CONTROL, "Ctrl"); //11
		长字符(VK_LWIN, "Win"); //81 //⊞
		//长字符(VK_LMENU, "Alt"); //132

		长字符(VK_MENU, "Alt"); //12
		长字符(VK_SPACE, "         SPACE         "); //29
		长字符(VK_RWIN, "Win"); //82 //⊞
		长字符(VK_MENU, "Alt"); //12
		长字符(14, "Fn");
		//长字符(VK_RMENU, "Alt"); //133

		长字符(VK_CONTROL, "Ctrl"); //11
		printf("	");
		//方向键
		长字符(VK_LEFT, "LEFT"); //34
		长字符(VK_DOWN, "DOWN"); //37
		长字符(VK_RIGHT, "RIGHT"); //36
		//printf("	");
		长字符(VK_NUMPAD0, " 0"); //85
	}
	//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//键盘布局
	void 键盘布局1() {
		//F1
		Fn行();
		printf("\n\n");
		//特殊键(, " ");
		//>数字键
		数字行();
		/*特殊键(45, " -"); 特殊键(95, "_"); 特殊键(61, " ="); 特殊键(43, "+");*/
		长字符(VK_OEM_MINUS, " -_");
		长字符(VK_OEM_PLUS, " =+");
		长字符(VK_BACK, "  BACK  "); //6
		printf("	"); //空格
		长字符(VK_DIVIDE, " /"); //100
		长字符(VK_MULTIPLY, " *"); //95
		长字符(VK_SUBTRACT, " -"); //98
		长字符(VK_ADD, " +"); //96
		//长字符(VK_SEPARATOR, "SEPARATOR"); //97
		//长字符(VK_DECIMAL, "DECIMAL"); //99
		printf("\n\n");

		//Q
		Q行();
		//特殊键(91, " ["); 特殊键(123, "{"); 特殊键(93, " ]");  特殊键(125, "}"); 特殊键(92, "   /"); 特殊键(124, "|");
		长字符(VK_OEM_4, " [{");
		长字符(VK_OEM_6, " ]}");
		长字符(VK_OEM_5, " /|");
		printf("	");
		长字符(VK_NUMPAD7, " 7"); //92
		长字符(VK_NUMPAD8, " 8"); //93
		长字符(VK_NUMPAD9, " 9"); //94
		printf("\n\n");

		//CAPS A
		CAPS行();
		/*特殊键(59, " ;"); 	特殊键(39, " '");*/
		长字符(VK_OEM_1, " ;:");
		长字符(VK_RETURN, "RETURN"); //9
		printf("	");
		printf("	");
		长字符(VK_NUMPAD4, " 4"); //89
		长字符(VK_NUMPAD5, " 5"); //90
		长字符(VK_NUMPAD6, " 6"); //91
		printf("\n\n");

		//SHIFT Z	
		SHIFT行();
		//特殊键(44, " ,");
		//特殊键(46, "<");
		//特殊键(60, " .");
		//特殊键(62, ">");
		//特殊键(47, " /");
		//特殊键(63, "?");
		长字符(VK_OEM_COMMA, " ,<");
		长字符(VK_OEM_PERIOD, " .>");
		长字符(VK_OEM_2, " /?");
		长字符(VK_SHIFT, "SHIFT"); //10		
		printf("	");
		长字符(VK_UP, "UP"); //35
		printf("	");
		长字符(VK_NUMPAD1, " 1"); //86
		长字符(VK_NUMPAD2, " 2"); //87
		长字符(VK_NUMPAD3, " 3"); //88
		printf("\n\n");

		//Ctrl Win
		Ctrl行();

		//测试行
		printf("\n\n");
		长字符(VK_MBUTTON, "中键"); //3
		长字符(VK_RBUTTON, "右键"); //1 //报错
		长字符(VK_XBUTTON2, "4键"); //4
		长字符(VK_XBUTTON1, "5键"); //5
		//长字符(VK_CANCEL, "CANCEL"); //2
		//长字符(VK_CLEAR, "CLEAR"); //8
		//长字符(VK_SCROLL, "SCROLL"); //126

		//长字符(VK_OEM_MINUS, "LEFT");
	/*

		printf("\n\n");


	长字符(VK_PAUSE, "PAUSE"); //13
	长字符(VK_KANA, "KANA"); //15
	//长字符(VK_HANGUEL, "HANGUEL"); //16
	长字符(VK_HANGUL, "HANGUL"); //17
		长字符(VK_IME_ON, "IME_ON"); //18
	长字符(VK_JUNJA, "JUNJA"); //19
	长字符(VK_FINAL, "FINAL"); //20
	长字符(VK_HANJA, "HANJA"); //21
	长字符(VK_KANJI, "KANJI"); //22
	长字符(VK_IME_OFF, "IME_OFF"); //23
	长字符(VK_CONVERT, "CONVERT"); //25
	长字符(VK_NONCONVERT, "NONCONVERT"); //26
	printf("\n\n");
		长字符(VK_ACCEPT, "ACCEPT"); //27
	长字符(VK_MODECHANGE, "MODECHANGE"); //28


	长字符(VK_SELECT, "SELECT"); //38
	长字符(VK_PRINT, "PRINT"); //39
	长字符(VK_EXECUTE, "EXECUTE"); //40
	长字符(VK_SNAPSHOT, "SNAPSHOT"); //41
	长字符(VK_INSERT, "INSERT"); //42
	长字符(VK_HELP, "HELP"); //44
	printf("\n\n");

	长字符(VK_APPS, "APPS"); //83
	长字符(VK_SLEEP, "SLEEP"); //84
	长字符(VK_F13, "F13"); //113
	长字符(VK_F14, "F14"); //114
	长字符(VK_F15, "F15"); //115
	长字符(VK_F16, "F16"); //116
		长字符(VK_F17, "F17"); //117
	长字符(VK_F18, "F18"); //118
	长字符(VK_F19, "F19"); //119
	长字符(VK_F20, "F20"); //120
	长字符(VK_F21, "F21"); //121
	长字符(VK_F22, "F22"); //122
	长字符(VK_F23, "F23"); //123
	长字符(VK_F24, "F24"); //124
	长字符(VK_NUMLOCK, "NUMLOCK"); //125
	printf("\n\n");

	//长字符(0x92 - 96, "0x92 - 96"); //127
	长字符(VK_LSHIFT, "LSHIFT"); //128
	长字符(VK_RSHIFT, "RSHIFT"); //129
	长字符(VK_LCONTROL, "LCONTROL"); //130
	长字符(VK_RCONTROL, "RCONTROL"); //131

	长字符(VK_BROWSER_BACK, "BROWSER_BACK"); //134
		长字符(VK_BROWSER_FORWARD, "BROWSER_FORWARD"); //135
	长字符(VK_BROWSER_REFRESH, "BROWSER_REFRESH"); //136
	长字符(VK_BROWSER_STOP, "BROWSER_STOP"); //137
	长字符(VK_BROWSER_SEARCH, "BROWSER_SEARCH"); //138
	长字符(VK_BROWSER_FAVORITES, "BROWSER_FAVORITES"); //139
	长字符(VK_BROWSER_HOME, "BROWSER_HOME"); //140
	长字符(VK_VOLUME_MUTE, "VOLUME_MUTE"); //141
	长字符(VK_VOLUME_DOWN, "VOLUME_DOWN"); //142
	长字符(VK_VOLUME_UP, "VOLUME_UP"); //143
	printf("\n\n");
		长字符(VK_MEDIA_NEXT_TRACK, "MEDIA_NEXT_TRACK"); //144
	长字符(VK_MEDIA_PREV_TRACK, "MEDIA_PREV_TRACK"); //145
	长字符(VK_MEDIA_STOP, "MEDIA_STOP"); //146
	长字符(VK_MEDIA_PLAY_PAUSE, "MEDIA_PLAY_PAUSE"); //147
	长字符(VK_LAUNCH_MAIL, "LAUNCH_MAIL"); //148
	长字符(VK_LAUNCH_MEDIA_SELECT, "LAUNCH_MEDIA_SELECT"); //149
	长字符(VK_LAUNCH_APP1, "LAUNCH_APP1"); //150
	长字符(VK_LAUNCH_APP2, "LAUNCH_APP2"); //151

	长字符(VK_OEM_PLUS, "+"); //153
	长字符(VK_OEM_COMMA, ","); //154
	长字符(VK_OEM_MINUS, "-"); //155
	长字符(VK_OEM_PERIOD, "."); //156
	长字符(VK_OEM_2, "/?"); //157
	长字符(VK_OEM_3, "`~"); //158
	长字符(VK_OEM_4, "[{"); //159
	长字符(VK_OEM_5, "\|"); //160
	长字符(VK_OEM_6, "]}"); //161
	printf("\n\n");
		长字符(VK_OEM_7, "'"); //162
	长字符(VK_OEM_8, "OEM_8"); //163
	长字符(0xE1, "0xE1"); //164
	长字符(VK_OEM_102, "OEM_102"); //165
	//长字符(0xE3 - E4, "0xE3 - E4"); //166
	长字符(VK_PROCESSKEY, "PROCESSKEY"); //167
	长字符(0xE6, "0xE6"); //168
	长字符(VK_PACKET, "PACKET"); //169
	//长字符(0xE9 - F5, "0xE9 - F5"); //170
		长字符(VK_ATTN, "ATTN"); //171
	长字符(VK_CRSEL, "CRSEL"); //172
	长字符(VK_EXSEL, "EXSEL"); //173
	长字符(VK_EREOF, "EREOF"); //174
	长字符(VK_PLAY, "PLAY"); //175
	长字符(VK_ZOOM, "ZOOM"); //176
	长字符(VK_NONAME, "NONAME"); //177
	长字符(VK_PA1, "PA1"); //178
	长字符(VK_OEM_CLEAR, "OEM_CLEAR"); //179
	printf("\n\n");
	printf("\n\n  ");
	*/
	}

	void 键盘布局2() {
		//F1
		长字符(VK_ESCAPE, "ESC "); //24
		长字符(VK_F1, " F1"); //101 
		长字符(VK_F2, " F2"); //102
		长字符(VK_F3, " F3"); //103
		长字符(VK_F4, " F4"); //104
		长字符(VK_F5, " F5"); //105
		长字符(VK_F6, " F6"); //106
		长字符(VK_F7, " F7"); //107
		长字符(VK_F8, " F8"); //108
		长字符(VK_F9, " F9"); //109
		长字符(VK_F10, " F10"); //110
		长字符(VK_F11, " F11"); //111l
		长字符(VK_F12, " F12"); //112
		长字符(VK_DELETE, "DELETE"); //43
		printf("	");
		长字符(VK_PRIOR, "PRIOR"); //30
		长字符(VK_NEXT, "NEXT"); //31
		长字符(VK_HOME, "HOME"); //33
		长字符(VK_END, "END"); //32
		printf("\n\n");

		//特殊键(, " ");

		//0
		显示文字('0'); 显示文字('1'); 显示文字('2'); 显示文字('3'); 显示文字('4'); 显示文字('5'); 显示文字('6'); 显示文字('7'); 显示文字('8'); 显示文字('9'); //显示文字('9'); 显示文字('0'); 
		特殊键(45, " -"); 特殊键(95, "_"); 特殊键(61, " ="); 特殊键(43, "+");
		长字符(VK_BACK, "  BACK  "); //6
		printf("	");
		长字符(VK_DIVIDE, " /"); //100
		长字符(VK_MULTIPLY, " *"); //95
		长字符(VK_SUBTRACT, " -"); //98
		长字符(VK_ADD, " +"); //96
		//长字符(VK_SEPARATOR, "SEPARATOR"); //97
		//长字符(VK_DECIMAL, "DECIMAL"); //99
		printf("\n\n");
		//Q
		长字符(VK_TAB, "TAB"); //7
		显示文字('Q'); 显示文字('W'); 显示文字('E'); 显示文字('R'); 显示文字('T'); 显示文字('Y'); 显示文字('U'); 显示文字('I'); 显示文字('O'); 显示文字('P');
		特殊键(91, " ["); 特殊键(123, "{"); 特殊键(93, " ]");  特殊键(125, "}"); 特殊键(92, "   /"); 特殊键(124, "|");
		printf("	");
		长字符(VK_NUMPAD7, " 7"); //92
		长字符(VK_NUMPAD8, " 8"); //93
		长字符(VK_NUMPAD9, " 9"); //94
		printf("\n\n");
		//CAPS A
		长字符(VK_CAPITAL, "CAPS"); //14
		显示文字('A'); 显示文字('S'); 显示文字('D'); 显示文字('F'); 显示文字('G'); 显示文字('H'); 显示文字('J'); 显示文字('K'); 显示文字('L');
		特殊键(59, " ;"); 	特殊键(39, " '");

		长字符(VK_RETURN, "RETURN"); //9
		printf("	");
		printf("	");
		长字符(VK_NUMPAD4, " 4"); //89
		长字符(VK_NUMPAD5, " 5"); //90
		长字符(VK_NUMPAD6, " 6"); //91
		printf("\n\n");
		//SHIFT Z	
		长字符(VK_SHIFT, "SHIFT"); //10	
		显示文字('Z'); 显示文字('X'); 显示文字('C'); 显示文字('V'); 显示文字('B'); 显示文字('N'); 显示文字('M');
		特殊键(44, " ,");
		特殊键(46, "<");
		特殊键(60, " .");
		特殊键(62, ">");
		特殊键(47, " /");
		特殊键(63, "?");
		//printf(" ");
		长字符(VK_SHIFT, "SHIFT"); //10		
		printf("	");
		长字符(VK_UP, "UP"); //35
		printf("	");
		长字符(VK_NUMPAD1, " 1"); //86
		长字符(VK_NUMPAD2, " 2"); //87
		长字符(VK_NUMPAD3, " 3"); //88
		printf("\n\n");
		//Ctrl Win
		长字符(VK_CONTROL, "Ctrl"); //11
		长字符(VK_LWIN, "Win"); //81 //⊞
		//长字符(VK_LMENU, "Alt"); //132

		长字符(VK_MENU, "Alt"); //12
		长字符(VK_SPACE, "         SPACE         "); //29
		长字符(VK_RWIN, "Win"); //82 //⊞
		长字符(VK_MENU, "Alt"); //12
		长字符(14, "Fn");
		//长字符(VK_RMENU, "Alt"); //133

		长字符(VK_CONTROL, "Ctrl"); //11
		printf("	");
		//方向键
		长字符(VK_LEFT, "LEFT"); //34
		长字符(VK_DOWN, "DOWN"); //37
		长字符(VK_RIGHT, "RIGHT"); //36
		//printf("	");
		长字符(VK_NUMPAD0, " 0"); //85
		//测试行
		printf("\n\n");
		长字符(VK_MBUTTON, "中键"); //3
		长字符(VK_RBUTTON, "右键"); //1 //报错
		长字符(VK_XBUTTON2, "4键"); //4
		长字符(VK_XBUTTON1, "5键"); //5
		//长字符(VK_CANCEL, "CANCEL"); //2
		//长字符(VK_CLEAR, "CLEAR"); //8
		//长字符(VK_SCROLL, "SCROLL"); //126

		//长字符(VK_OEM_MINUS, "LEFT");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//写入输入流
	void 写入输入流存档之一个按键(fstream 输入流存档, string 存档路径)
	{
		//按键检测 按键检测;
		//按键检测.写入输入流存档__一个按键( 输入流存档,  存档路径);
	}

	void 写入输入流存档__一个按键(char gks, string ajjmmy)
	{
		//string gksstring = to_string(gks);
		//写入一个按键
		if (GetKeyState(gks) < 0) {
			输入流存档 << ajjmmy;
			输入流存档 << ";";
		}
	}
	void 写入输入流存档__一个按键(char gks)
	{
		//写入一个按键
		if (GetKeyState(gks) < 0) {
			输入流存档 << gks;
			输入流存档 << ";";
		}
	}
	void 写入输入流存档__主体()
	{
		/*//\
	,.{0,99}["]$
		//	\
	^[0-9]{1,99}.{0,99}["]$
		//	\
	^[0-9]{0,99}$
		*/

		写入输入流存档__一个按键(VK_ESCAPE, "ESC ");
		写入输入流存档__一个按键(VK_F1, " F1");
		写入输入流存档__一个按键(VK_F2, " F2");
		写入输入流存档__一个按键(VK_F3, " F3");
		写入输入流存档__一个按键(VK_F4, " F4");
		写入输入流存档__一个按键(VK_F5, " F5");
		写入输入流存档__一个按键(VK_F6, " F6");
		写入输入流存档__一个按键(VK_F7, " F7");
		写入输入流存档__一个按键(VK_F8, " F8");
		写入输入流存档__一个按键(VK_F9, " F9");
		写入输入流存档__一个按键(VK_F10, " F10");
		写入输入流存档__一个按键(VK_F11, " F11");
		写入输入流存档__一个按键(VK_F12, " F12");
		写入输入流存档__一个按键(VK_DELETE, "DELETE");
		写入输入流存档__一个按键('0');
		写入输入流存档__一个按键('1');
		写入输入流存档__一个按键('2');
		写入输入流存档__一个按键('3');
		写入输入流存档__一个按键('4');
		写入输入流存档__一个按键('5');
		写入输入流存档__一个按键('6');
		写入输入流存档__一个按键('7');
		写入输入流存档__一个按键('8');
		写入输入流存档__一个按键('9');
		写入输入流存档__一个按键('9');
		写入输入流存档__一个按键('0');
		写入输入流存档__一个按键(VK_TAB, "TAB");
		写入输入流存档__一个按键('Q');
		写入输入流存档__一个按键('W');
		写入输入流存档__一个按键('E');
		写入输入流存档__一个按键('R');
		写入输入流存档__一个按键('T');
		写入输入流存档__一个按键('Y');
		写入输入流存档__一个按键('U');
		写入输入流存档__一个按键('I');
		写入输入流存档__一个按键('O');
		写入输入流存档__一个按键('P');
		写入输入流存档__一个按键(VK_CAPITAL, "CAPS");
		写入输入流存档__一个按键('A');
		写入输入流存档__一个按键('S');
		写入输入流存档__一个按键('D');
		写入输入流存档__一个按键('F');
		写入输入流存档__一个按键('G');
		写入输入流存档__一个按键('H');
		写入输入流存档__一个按键('J');
		写入输入流存档__一个按键('K');
		写入输入流存档__一个按键('L');
		写入输入流存档__一个按键(VK_RETURN, "RETURN");
		//写入输入流存档__一个按键(VK_SHIFT, "SHIFT");
		写入输入流存档__一个按键('Z');
		写入输入流存档__一个按键('X');
		写入输入流存档__一个按键('C');
		写入输入流存档__一个按键('V');
		写入输入流存档__一个按键('B');
		写入输入流存档__一个按键('N');
		写入输入流存档__一个按键('M');
		写入输入流存档__一个按键(VK_SHIFT, "SHIFT");
		写入输入流存档__一个按键(VK_UP, "UP");
		//写入输入流存档__一个按键(VK_CONTROL, "Ctrl");
		写入输入流存档__一个按键(VK_LWIN, "Win");
		//写入输入流存档__一个按键(VK_LMENU, "LAlt");
		写入输入流存档__一个按键(VK_MENU, "Alt");
		写入输入流存档__一个按键(VK_SPACE, "         SPACE         ");
		写入输入流存档__一个按键(VK_RWIN, "Win");
		//写入输入流存档__一个按键(VK_MENU, "Alt");
		//写入输入流存档__一个按键(VK_RMENU, "RAlt");
		写入输入流存档__一个按键(VK_CONTROL, "Ctrl");
		写入输入流存档__一个按键(VK_LEFT, "LEFT");
		写入输入流存档__一个按键(VK_DOWN, "DOWN");
		写入输入流存档__一个按键(VK_RIGHT, "RIGHT");
		写入输入流存档__一个按键(VK_PRIOR, "PRIOR");
		写入输入流存档__一个按键(VK_NEXT, "NEXT");
		写入输入流存档__一个按键(VK_HOME, "HOME");
		写入输入流存档__一个按键(VK_END, "END");
		写入输入流存档__一个按键(VK_BACK, "  BACK  ");
		写入输入流存档__一个按键(VK_DIVIDE, " /");
		写入输入流存档__一个按键(VK_MULTIPLY, " *");
		写入输入流存档__一个按键(VK_SUBTRACT, " -");
		写入输入流存档__一个按键(VK_ADD, " +");
		写入输入流存档__一个按键(VK_SEPARATOR, "SEPARATOR");
		写入输入流存档__一个按键(VK_DECIMAL, "DECIMAL");
		写入输入流存档__一个按键(VK_NUMPAD7, " N7");
		写入输入流存档__一个按键(VK_NUMPAD8, " N8");
		写入输入流存档__一个按键(VK_NUMPAD9, " N9");
		写入输入流存档__一个按键(VK_NUMPAD4, " N4");
		写入输入流存档__一个按键(VK_NUMPAD5, " N5");
		写入输入流存档__一个按键(VK_NUMPAD6, " N6");
		写入输入流存档__一个按键(VK_NUMPAD1, " N1");
		写入输入流存档__一个按键(VK_NUMPAD2, " N2");
		写入输入流存档__一个按键(VK_NUMPAD3, " N3");
		写入输入流存档__一个按键(VK_NUMPAD0, " N0");

	}
	void 写入输入流存档()
	{
		从末尾读写(输入流存档, 存档路径);
		//$ 时间 \
			^ 按键
		// 
		输入流存档 << "\n";
		//输入流存档 << endl;
		输入流存档 << '$';
		输入流存档 << " ";
		GetLocalTime(&sys);

		//fprintf (fp, "%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d\n",
		//	sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
		//	sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);

		//年月日
		/*uijm = to_string(sys.wYear);
		输入流存档 << uijm;
			输入流存档 << ".";
		uijm = to_string(sys.wMonth);
		输入流存档 << uijm;
			输入流存档 << ".";
		uijm = to_string(sys.wDay);
		输入流存档 << uijm;
			输入流存档 << ".";*/
			//时间
		输入流存档 << to_string(sys.wHour);
		输入流存档 << ".";
		输入流存档 << to_string(sys.wMinute);
		输入流存档 << ".";
		输入流存档 << to_string(sys.wSecond);
		输入流存档 << ".";
		输入流存档 << to_string(sys.wMilliseconds);

		//输入流存档 << ".";
	//uijm = to_string(sys.wDayOfWeek);
	//输入流存档 << uijm;
		输入流存档 << '\n';
		//
		输入流存档 << '^' << " ";
		//写按键
		写入输入流存档__主体();
		//输入流存档 << '\n';
		//输入流存档 << "\n";
		//输入流存档 << endl;

		输入流存档.close();
	}
	//======================================================================//======================================================================
	//out输入流存档
	void cout输入流存档__一个按键(char gks, string ajjmmy)
	{
		//string gksstring= to_string(gks);
		if (GetKeyState(gks) < 0) {
			cout << ajjmmy;
			cout << ";";
		}
	}
	void cout输入流存档__一个按键(char gks)
	{
		if (GetKeyState(gks) < 0) {
			cout << gks;
			cout << ";";
		}
	}
	void cout输入流存档__主体()
	{
		cout输入流存档__一个按键(VK_ESCAPE, "ESC ");
		cout输入流存档__一个按键(VK_F1, " F1");
		cout输入流存档__一个按键(VK_F2, " F2");
		cout输入流存档__一个按键(VK_F3, " F3");
		cout输入流存档__一个按键(VK_F4, " F4");
		cout输入流存档__一个按键(VK_F5, " F5");
		cout输入流存档__一个按键(VK_F6, " F6");
		cout输入流存档__一个按键(VK_F7, " F7");
		cout输入流存档__一个按键(VK_F8, " F8");
		cout输入流存档__一个按键(VK_F9, " F9");
		cout输入流存档__一个按键(VK_F10, " F10");
		cout输入流存档__一个按键(VK_F11, " F11");
		cout输入流存档__一个按键(VK_F12, " F12");
		cout输入流存档__一个按键(VK_DELETE, "DELETE");
		cout输入流存档__一个按键('0');
		cout输入流存档__一个按键('1');
		cout输入流存档__一个按键('2');
		cout输入流存档__一个按键('3');
		cout输入流存档__一个按键('4');
		cout输入流存档__一个按键('5');
		cout输入流存档__一个按键('6');
		cout输入流存档__一个按键('7');
		cout输入流存档__一个按键('8');
		cout输入流存档__一个按键('9');
		cout输入流存档__一个按键('9');
		cout输入流存档__一个按键('0');
		cout输入流存档__一个按键(VK_TAB, "TAB");
		cout输入流存档__一个按键('Q');
		cout输入流存档__一个按键('W');
		cout输入流存档__一个按键('E');
		cout输入流存档__一个按键('R');
		cout输入流存档__一个按键('T');
		cout输入流存档__一个按键('Y');
		cout输入流存档__一个按键('U');
		cout输入流存档__一个按键('I');
		cout输入流存档__一个按键('O');
		cout输入流存档__一个按键('P');
		cout输入流存档__一个按键(VK_CAPITAL, "CAPS");
		cout输入流存档__一个按键('A');
		cout输入流存档__一个按键('S');
		cout输入流存档__一个按键('D');
		cout输入流存档__一个按键('F');
		cout输入流存档__一个按键('G');
		cout输入流存档__一个按键('H');
		cout输入流存档__一个按键('J');
		cout输入流存档__一个按键('K');
		cout输入流存档__一个按键('L');
		cout输入流存档__一个按键(VK_RETURN, "RETURN");
		cout输入流存档__一个按键(VK_SHIFT, "SHIFT");
		cout输入流存档__一个按键('Z');
		cout输入流存档__一个按键('X');
		cout输入流存档__一个按键('C');
		cout输入流存档__一个按键('V');
		cout输入流存档__一个按键('B');
		cout输入流存档__一个按键('N');
		cout输入流存档__一个按键('M');
		cout输入流存档__一个按键(VK_SHIFT, "SHIFT");
		cout输入流存档__一个按键(VK_UP, "UP");
		cout输入流存档__一个按键(VK_CONTROL, "Ctrl");
		cout输入流存档__一个按键(VK_LWIN, "Win");
		cout输入流存档__一个按键(VK_LMENU, "Alt");
		cout输入流存档__一个按键(VK_MENU, "Alt");
		cout输入流存档__一个按键(VK_SPACE, "         SPACE         ");
		cout输入流存档__一个按键(VK_RWIN, "Win");
		cout输入流存档__一个按键(VK_MENU, "Alt");
		cout输入流存档__一个按键(VK_RMENU, "Alt");
		cout输入流存档__一个按键(VK_CONTROL, "Ctrl");
		cout输入流存档__一个按键(VK_LEFT, "LEFT");
		cout输入流存档__一个按键(VK_DOWN, "DOWN");
		cout输入流存档__一个按键(VK_RIGHT, "RIGHT");
		cout输入流存档__一个按键(VK_PRIOR, "PRIOR");
		cout输入流存档__一个按键(VK_NEXT, "NEXT");
		cout输入流存档__一个按键(VK_HOME, "HOME");
		cout输入流存档__一个按键(VK_END, "END");
		cout输入流存档__一个按键(VK_BACK, "  BACK  ");
		cout输入流存档__一个按键(VK_DIVIDE, " /");
		cout输入流存档__一个按键(VK_MULTIPLY, " *");
		cout输入流存档__一个按键(VK_SUBTRACT, " -");
		cout输入流存档__一个按键(VK_ADD, " +");
		cout输入流存档__一个按键(VK_SEPARATOR, "SEPARATOR");
		cout输入流存档__一个按键(VK_DECIMAL, "DECIMAL");
		cout输入流存档__一个按键(VK_NUMPAD7, " N7");
		cout输入流存档__一个按键(VK_NUMPAD8, " N8");
		cout输入流存档__一个按键(VK_NUMPAD9, " N9");
		cout输入流存档__一个按键(VK_NUMPAD4, " N4");
		cout输入流存档__一个按键(VK_NUMPAD5, " N5");
		cout输入流存档__一个按键(VK_NUMPAD6, " N6");
		cout输入流存档__一个按键(VK_NUMPAD1, " N1");
		cout输入流存档__一个按键(VK_NUMPAD2, " N2");
		cout输入流存档__一个按键(VK_NUMPAD3, " N3");
		cout输入流存档__一个按键(VK_NUMPAD0, " N0");
	}
	void cout输入流存档()
	{
		cout << '$' << " ";
		GetLocalTime(&sys);
		printf("%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d\n",
			sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
			sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
		//
		cout << '^' << " ";
		cout输入流存档__主体();
		cout << '\n';
	}
	//======================================================================//======================================================================




	//检测 的功能
	void 检测是否按下(int 序号, int 键码) { //之前 现在

		if (GetKeyState(键码) < 0) {
			现在[序号] = 1; //按下
		}
		else {
			现在[序号] = 0; //松开
		}
		if (现在[序号] != 之前[序号]) {
			if (现在[序号] == 1) {
				按下 = 1;
			}
			if (现在[序号] == 0) {
				按下 = 2;
			}
		}
		//print();
	//刷新 = 1;
	}
	//虚拟键值表，模拟按键表
	//https://developer.aliyun.com/article/332609

	/*
	此事来源
	https://blog.csdn.net/everlasting_20141622/article/details/52222006
	*/

};
//----------------------------------------------------------------------//----------------------------------------------------------------------
//======================================================================//======================================================================











#endif