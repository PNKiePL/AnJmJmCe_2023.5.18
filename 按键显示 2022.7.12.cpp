//按键检测 2023.5.18
//AnJmJmCe_2023.5.18
#include<iostream>
#include<bitset>
#include<windows.h>
//2022.7.9
#include<cstdio>
#include<conio.h>
#include<stdio.h>

#include<E:\lib\按键检测.cpp>

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) //必要的，我是背下来的 
//#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")
#//define 检测是否按下 check
//#define 显示文字 print_letter
//#define 长字符 gks
//#define ct VK_CONTROL
// 
//#define 四位个数 swgu
//#define 四位个数初始化 swguiuh
//#define 四位个数一帧 swguyv

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class 主程序
{
public:
	int main() {
		SetConsoleMode(GetStdHandle(-10), 128); //禁止鼠标点击 \ https://learn.microsoft.com/en-us/windows/console/setconsolemode \ SetConsoleMode( _In_ HANDLE hConsoleHandle, _In_ DWORD  dwMode);

		按键检测 按键检测;
		system("color 0B");//黑蓝
		//system("C:\\Windows\\system32\\chcp 65001");//utf-8
		system("mode con cols=84 lines=14 "); //2 3
		//	system("mode con cols=84 lines=14 "); //2 3

		/*
		//ctrl shif -
		INPUT input[6];
		memset(input, 0, sizeof(input));
		input[0].type = input[1].type = input[2].type = input[3].type = input[4].type = input[5].type =INPUT_KEYBOARD;  //设置键盘模式
		input[0].ki.wVk = input[4].ki.wVk = VK_LCONTROL; //04
		input[1].ki.wVk = input[5].ki.wVk = VK_SHIFT; //15
		//input[3].ki.wVk = input[2].ki.wVk = '-'; //23
		input[3].ki.wVk = input[2].ki.wVk = VK_OEM_MINUS; //23

		input[4].ki.dwFlags = input[3].ki.dwFlags = input[5].ki.dwFlags=KEYEVENTF_KEYUP; //012|3 45

		SendInput(6, input, sizeof(INPUT));
		SendInput(6, input, sizeof(INPUT));
		SendInput(6, input, sizeof(INPUT));
		SendInput(6, input, sizeof(INPUT));
		SendInput(6, input, sizeof(INPUT));
		SendInput(6, input, sizeof(INPUT));
		*/

		//初始化
		for (按键检测.四位个数初始化 = 0; 按键检测.四位个数初始化 < 46; 按键检测.四位个数初始化 += 1) //四位个数初始化= 序号
		{
			按键检测.计数[按键检测.四位个数初始化] = 0;
		}
		按键检测.之前和现在初始化(200);

		//测试_cout计数
		//按键检测.测试_计数(1, 9999);
		//按键检测.测试_计数(2, 9999);
		//按键检测.测试_计数(3, 9999); //9999,9999,9999-> 1,0000,0000,0000

		//按键检测.测试_计数(1, 9998998989);
		//按键检测.测试_计数(2, 9998998989);
		//按键检测.测试_计数(3, 9998998989);
		//按键检测.测试_计数( 4, 9998998989);
		///成负数了
		//按键检测.测试_计数(1, 9998898989899998989);
		//按键检测.测试_计数(2, 9998898989899998989);
		//按键检测.测试_计数(3, 9998898989899998989);
		//按键检测.测试_计数( 4, 9999898989898998989);

		//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		按键检测.键盘布局 = 2;

		按键检测.print();

		while (1) {
			////////////////////
			//检测是否按下 //178行
			{
				按键检测.检测是否按下(1, VK_RBUTTON);
				按键检测.检测是否按下(2, VK_CANCEL);
				按键检测.检测是否按下(3, VK_MBUTTON);
				按键检测.检测是否按下(4, VK_XBUTTON1);
				按键检测.检测是否按下(5, VK_XBUTTON2);
				按键检测.检测是否按下(6, VK_BACK);
				按键检测.检测是否按下(7, VK_TAB);
				按键检测.检测是否按下(8, VK_CLEAR);
				按键检测.检测是否按下(9, VK_RETURN);
				按键检测.检测是否按下(10, VK_SHIFT);
				按键检测.检测是否按下(11, VK_CONTROL);
				按键检测.检测是否按下(12, VK_MENU);
				按键检测.检测是否按下(13, VK_PAUSE);
				按键检测.检测是否按下(14, VK_CAPITAL);
				按键检测.检测是否按下(15, VK_KANA);
				按键检测.检测是否按下(16, VK_HANGUL);
				按键检测.检测是否按下(17, VK_IME_ON);
				按键检测.检测是否按下(18, VK_JUNJA);
				按键检测.检测是否按下(19, VK_FINAL);
				按键检测.检测是否按下(20, VK_HANJA);
				按键检测.检测是否按下(21, VK_KANJI);
				按键检测.检测是否按下(22, VK_IME_OFF);
				按键检测.检测是否按下(23, VK_ESCAPE);
				按键检测.检测是否按下(24, VK_CONVERT);
				按键检测.检测是否按下(25, VK_NONCONVERT);
				按键检测.检测是否按下(26, VK_ACCEPT);
				按键检测.检测是否按下(27, VK_MODECHANGE);
				按键检测.检测是否按下(28, VK_SPACE);
				按键检测.检测是否按下(29, VK_PRIOR);
				按键检测.检测是否按下(30, VK_NEXT);
				按键检测.检测是否按下(31, VK_END);
				按键检测.检测是否按下(32, VK_HOME);
				按键检测.检测是否按下(33, VK_LEFT);
				按键检测.检测是否按下(34, VK_UP);
				按键检测.检测是否按下(35, VK_RIGHT);
				按键检测.检测是否按下(36, VK_DOWN);
				按键检测.检测是否按下(37, VK_SELECT);
				按键检测.检测是否按下(38, VK_PRINT);
				按键检测.检测是否按下(39, VK_EXECUTE);
				按键检测.检测是否按下(40, VK_SNAPSHOT);
				按键检测.检测是否按下(41, VK_INSERT);
				按键检测.检测是否按下(42, VK_DELETE);
				按键检测.检测是否按下(43, VK_HELP);
				按键检测.检测是否按下(44, '0');
				按键检测.检测是否按下(45, '1');
				按键检测.检测是否按下(46, '2');
				按键检测.检测是否按下(47, '3');
				按键检测.检测是否按下(48, '4');
				按键检测.检测是否按下(49, '5');
				按键检测.检测是否按下(50, '6');
				按键检测.检测是否按下(51, '7');
				按键检测.检测是否按下(52, '8');
				按键检测.检测是否按下(53, '9');
				按键检测.检测是否按下(54, 'A');
				按键检测.检测是否按下(55, 'B');
				按键检测.检测是否按下(56, 'C');
				按键检测.检测是否按下(57, 'D');
				按键检测.检测是否按下(58, 'E');
				按键检测.检测是否按下(59, 'F');
				按键检测.检测是否按下(60, 'G');
				按键检测.检测是否按下(61, 'H');
				按键检测.检测是否按下(62, 'I');
				按键检测.检测是否按下(63, 'J');
				按键检测.检测是否按下(64, 'K');
				按键检测.检测是否按下(65, 'L');
				按键检测.检测是否按下(66, 'M');
				按键检测.检测是否按下(67, 'N');
				按键检测.检测是否按下(68, 'O');
				按键检测.检测是否按下(69, 'P');
				按键检测.检测是否按下(70, 'Q');
				按键检测.检测是否按下(71, 'R');
				按键检测.检测是否按下(72, 'S');
				按键检测.检测是否按下(73, 'T');
				按键检测.检测是否按下(74, 'U');
				按键检测.检测是否按下(75, 'V');
				按键检测.检测是否按下(76, 'W');
				按键检测.检测是否按下(77, 'X');
				按键检测.检测是否按下(78, 'Y');
				按键检测.检测是否按下(79, 'Z');
				按键检测.检测是否按下(80, VK_LWIN);
				按键检测.检测是否按下(81, VK_RWIN);
				按键检测.检测是否按下(82, VK_APPS);
				按键检测.检测是否按下(83, VK_SLEEP);
				按键检测.检测是否按下(84, VK_NUMPAD0);
				按键检测.检测是否按下(85, VK_NUMPAD1);
				按键检测.检测是否按下(86, VK_NUMPAD2);
				按键检测.检测是否按下(87, VK_NUMPAD3);
				按键检测.检测是否按下(88, VK_NUMPAD4);
				按键检测.检测是否按下(89, VK_NUMPAD5);
				按键检测.检测是否按下(90, VK_NUMPAD6);
				按键检测.检测是否按下(91, VK_NUMPAD7);
				按键检测.检测是否按下(92, VK_NUMPAD8);
				按键检测.检测是否按下(93, VK_NUMPAD9);
				按键检测.检测是否按下(94, VK_MULTIPLY);
				按键检测.检测是否按下(95, VK_ADD);
				按键检测.检测是否按下(96, VK_SEPARATOR);
				按键检测.检测是否按下(97, VK_SUBTRACT);
				按键检测.检测是否按下(98, VK_DECIMAL);
				按键检测.检测是否按下(99, VK_DIVIDE);
				按键检测.检测是否按下(100, VK_F1);
				按键检测.检测是否按下(101, VK_F2);
				按键检测.检测是否按下(102, VK_F3);
				按键检测.检测是否按下(103, VK_F4);
				按键检测.检测是否按下(104, VK_F5);
				按键检测.检测是否按下(105, VK_F6);
				按键检测.检测是否按下(106, VK_F7);
				按键检测.检测是否按下(107, VK_F8);
				按键检测.检测是否按下(108, VK_F9);
				按键检测.检测是否按下(109, VK_F10);
				按键检测.检测是否按下(110, VK_F11);
				按键检测.检测是否按下(111, VK_F12);
				按键检测.检测是否按下(112, VK_F13);
				按键检测.检测是否按下(113, VK_F14);
				按键检测.检测是否按下(114, VK_F15);
				按键检测.检测是否按下(115, VK_F16);
				按键检测.检测是否按下(116, VK_F17);
				按键检测.检测是否按下(117, VK_F18);
				按键检测.检测是否按下(118, VK_F19);
				按键检测.检测是否按下(119, VK_F20);
				按键检测.检测是否按下(120, VK_F21);
				按键检测.检测是否按下(121, VK_F22);
				按键检测.检测是否按下(122, VK_F23);
				按键检测.检测是否按下(123, VK_F24);
				按键检测.检测是否按下(124, VK_NUMLOCK);
				按键检测.检测是否按下(125, VK_SCROLL);
				按键检测.检测是否按下(126, VK_LSHIFT);
				按键检测.检测是否按下(127, VK_RSHIFT);
				按键检测.检测是否按下(128, VK_LCONTROL);
				按键检测.检测是否按下(129, VK_RCONTROL);
				按键检测.检测是否按下(130, VK_LMENU);
				按键检测.检测是否按下(131, VK_RMENU);
				按键检测.检测是否按下(132, VK_BROWSER_BACK);
				按键检测.检测是否按下(133, VK_BROWSER_FORWARD);
				按键检测.检测是否按下(134, VK_BROWSER_REFRESH);
				按键检测.检测是否按下(135, VK_BROWSER_STOP);
				按键检测.检测是否按下(136, VK_BROWSER_SEARCH);
				按键检测.检测是否按下(137, VK_BROWSER_FAVORITES);
				按键检测.检测是否按下(138, VK_BROWSER_HOME);
				按键检测.检测是否按下(139, VK_VOLUME_MUTE);
				按键检测.检测是否按下(140, VK_VOLUME_DOWN);
				按键检测.检测是否按下(141, VK_VOLUME_UP);
				按键检测.检测是否按下(142, VK_MEDIA_NEXT_TRACK);
				按键检测.检测是否按下(143, VK_MEDIA_PREV_TRACK);
				按键检测.检测是否按下(144, VK_MEDIA_STOP);
				按键检测.检测是否按下(145, VK_MEDIA_PLAY_PAUSE);
				按键检测.检测是否按下(146, VK_LAUNCH_MAIL);
				按键检测.检测是否按下(147, VK_LAUNCH_MEDIA_SELECT);
				按键检测.检测是否按下(148, VK_LAUNCH_APP1);
				按键检测.检测是否按下(149, VK_LAUNCH_APP2);
				按键检测.检测是否按下(150, VK_OEM_1);
				按键检测.检测是否按下(151, VK_OEM_PLUS);
				按键检测.检测是否按下(152, VK_OEM_COMMA);
				按键检测.检测是否按下(153, VK_OEM_MINUS);
				按键检测.检测是否按下(154, VK_OEM_PERIOD);
				按键检测.检测是否按下(155, VK_OEM_2);
				按键检测.检测是否按下(156, VK_OEM_3);
				按键检测.检测是否按下(157, VK_OEM_4);
				按键检测.检测是否按下(158, VK_OEM_5);
				按键检测.检测是否按下(159, VK_OEM_6);
				按键检测.检测是否按下(160, VK_OEM_7);
				按键检测.检测是否按下(161, VK_OEM_8);
				按键检测.检测是否按下(162, VK_OEM_102);
				按键检测.检测是否按下(163, VK_PROCESSKEY);
				按键检测.检测是否按下(164, VK_PACKET);
				按键检测.检测是否按下(165, VK_ATTN);
				按键检测.检测是否按下(166, VK_CRSEL);
				按键检测.检测是否按下(167, VK_EXSEL);
				按键检测.检测是否按下(168, VK_EREOF);
				按键检测.检测是否按下(169, VK_PLAY);
				按键检测.检测是否按下(170, VK_ZOOM);
				按键检测.检测是否按下(171, VK_NONAME);
				按键检测.检测是否按下(172, VK_PA1);
				按键检测.检测是否按下(173, VK_OEM_CLEAR);
				按键检测.检测是否按下(174, VK_OEM_PLUS);
				按键检测.检测是否按下(175, VK_OEM_MINUS);
				按键检测.检测是否按下(176, VK_OEM_COMMA);
				按键检测.检测是否按下(177, VK_OEM_PERIOD);
				按键检测.检测是否按下(178, VK_OEM_2);
				按键检测.检测是否按下(179, VK_OEM_3);
				按键检测.检测是否按下(180, VK_OEM_4);
				按键检测.检测是否按下(181, VK_OEM_5);
				按键检测.检测是否按下(182, VK_OEM_6);
				按键检测.检测是否按下(183, VK_OEM_7);
				按键检测.检测是否按下(184, VK_OEM_8); //11个VK_OEM_8

				//_kbhit() 检测
				////if (_kbhit()!=0) {
				////	按键检测.现在[174] = 1;
				////	if (按键检测.现在[174] != 按键检测.之前[174])
				////		//TODO 运行运行运行运行运行
				////		按键检测.按下 = 3; //todo jmcebudk 不正常
				////}
				////else 按键检测.现在[174] = 0;
			}

			if (按键检测.按下 >= 1) {
				//刷新 \ 重新输出
				按键检测.print();
				按键检测.按下 = 0;
				//刷新 = 1;
			}//检测到按键状态变化再打印
			按键检测.之前和现在批量相等(185); //重新检测
			//if ((按下 == 0) && (刷新 == 1)) { print(); 刷新 = 0; }
			////主程序		
			//			//if ((按下 == 1) ) {
			//				//if ((按下 == 1) || (_getch()) ){

			Sleep(10);//循环时间间隔，防止太占内存 
			//}
		}

		/*while (1) { print(); Sleep(20); }*/
		//虚拟键码
		//https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

		return 0;
	}

	void main1()
	{
		//while (!_kbhit())

		//{

		//	printf("Hit me! ");

		//	Sleep(1000);

		//}
		while (true)
		{
			printf("\nKey struck was '%c'\n", _getch());

		}
	}

	void 检测指定按键() //可以
	{
		while (true)
		{
			while (!_kbhit())
			{
				//while (_kbhit() != 0)
				{
					if (_getch() == '[')
						printf("\nKey struck was '%c'\n", _getch());

				}
			}
		}
	}

	void 检测指定按键1() //可以
	{
		while (true)
		{
			//while (!_kbhit())
			{
				while (_kbhit() != 0)
				{
					if (_getch() == '[')
						printf("\nKey struck was '%c'\n", _getch());

				}
			}
		}
	}
	//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//GetKeyState
	auto 检测指定按键2(char 键码) {
		while (true)
		{
			///2023年5月17日 时间 21:57
			//>不行
			//if (GetAsyncKeyState(键码) < 0) {
				//printf("\nKey struck was '%c'\n", _getch());
			//}
			//cout<< (GetAsyncKeyState(键码)) << '\n';

			//>可以
			if (GetAsyncKeyState(VK_OEM_1) < 0) {
				//printf("\nKey struck was '%c'\n", _getch());
			}
			cout << (GetAsyncKeyState(VK_OEM_1)) << '\n'; //-32768
			sleep(100);
		}
	}

	void 检测指定按键3(int 键码) //!可以
	{
		while (true)
		{
			if (GetAsyncKeyState(键码) != 0) {
				printf("\nKey struck was '%c'\n", _getch());
			}
			//cout<< (GetAsyncKeyState(键码)) << '\n';
			sleep(100);
		}
	}

	void 检测指定按键4(int 键码) //可以
	{
		while (true)
		{
			if (GetAsyncKeyState(键码) < 0) {
				printf("\nKey struck was '%c'\n", _getch());
			}
			//cout<< (GetAsyncKeyState(键码)) << '\n';
			sleep(100);
		}
	}

	void 检测指定按键5(int 键码) //可以
	{
		while (true)
		{
			if (GetKeyState(键码) != 0) {
				printf("\nKey struck was '%c'\n", _getch());
			}
			//cout<< (GetAsyncKeyState(键码)) << '\n';
			sleep(100);
		}
	}
};

int main()
{
	主程序 主程序;
	主程序.main();

	//主程序.main1();
	//主程序.检测指定按键();
	//主程序.检测指定按键1();
	//主程序.检测指定按键2(VK_OEM_1);
	//主程序.检测指定按键3(VK_OEM_1); //!好! 行了!
	//主程序.检测指定按键4(VK_OEM_1);
	//主程序.检测指定按键5(VK_OEM_1);

	return 0;
}