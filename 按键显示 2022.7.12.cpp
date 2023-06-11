//按键检测 2023.5.18
//AnJmJmCe_2023.5.18
#include<iostream>
#include<bitset>
#include<windows.h>
//2022.7.9
#include<cstdio>
#include<conio.h>
#include<stdio.h>

#include<E:\lib\按键检测.h  >
#include  <E:\lib\按键检测.cpp> //没有会报错
//#include<E:\lib\文件操作.h>
#include  <E:\lib\文件读写.h>
#include  <E:\lib\文字读取.h>

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
	//!报错:
	///2023年5月30日
	//>0x00007FFA5403E929 (KernelBase.dll)处(位于 按键显示 2022.7.12.exe 中)引发的异常 : 0x40010005 : Control - C。
	//叠在窗口下面就无所谓

public:
	按键检测 按键检测;

public:

public:
	int main() {
		//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		//cmd设置
		ios::sync_with_stdio(false); //取消同步 \ 这个函数是一个“是否兼容stdio”的开关，C++为了兼容C，保证程序在使用了std::printf和std::cout的时候不发生混乱，将输出流绑到了一起 \ https://blog.csdn.net/u014665013/article/details/70521300 
		cin.tie(0);
		cout.tie(0);

		SetConsoleMode(GetStdHandle(-10), 128); //禁止鼠标点击 \ https://learn.microsoft.com/en-us/windows/console/setconsolemode \ SetConsoleMode( _In_ HANDLE hConsoleHandle, _In_ DWORD  dwMode);

		system("color 0B");//黑蓝
		//system("C:\\Windows\\system32\\chcp 65001");//utf-8

		//system("mode con cols=84 lines=16 "); 
		//system("mode con cols=84 lines=14 ");
		//system("mode con cols=126 lines=14 ");
		system("mode con cols=168 lines=14 ");

		//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		//变量
		fstream 输入流存档;
		string 存档路径;

		int Sleep_按键检测 = 1;

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

		//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		//初始化
		for (按键检测.四位个数初始化 = 0; 按键检测.四位个数初始化 < 46; 按键检测.四位个数初始化 += 1) //四位个数初始化= 序号
		{
			按键检测.计数[按键检测.四位个数初始化] = 0;
		}
		按键检测.之前和现在初始化(200);
		按键检测.按键按下次数初始化(200);
		//>按键次数存档fstream << 按键次数存档路径str
		从头覆盖读写(按键检测.按键次数cpdh, 按键检测.按键次数lujy);

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
		//>开始
		///2023年6月11日
		按键检测.键盘布局 = 2; //TODO xn功能
		按键检测.按键和计数之间显示 = "|";
		按键检测.按键按下计数 = 1;
		按键检测.按键松开计数 = 0;
		按键检测.按键显示_cmd();

		while (1) {
			////////////////////
			//检测是否按下 //178行
			{
				按键检测.检测是否按下2(1, VK_RBUTTON);
				按键检测.检测是否按下2(2, VK_CANCEL);
				按键检测.检测是否按下2(3, VK_MBUTTON);
				按键检测.检测是否按下2(4, VK_XBUTTON1);
				按键检测.检测是否按下2(5, VK_XBUTTON2);
				按键检测.检测是否按下2(6, VK_BACK);
				按键检测.检测是否按下2(7, VK_TAB);
				按键检测.检测是否按下2(8, VK_CLEAR);
				按键检测.检测是否按下2(9, VK_RETURN);
				按键检测.检测是否按下2(10, VK_SHIFT);
				按键检测.检测是否按下2(11, VK_CONTROL);
				按键检测.检测是否按下2(12, VK_MENU);
				按键检测.检测是否按下2(13, VK_PAUSE);
				按键检测.检测是否按下2(14, VK_CAPITAL);
				按键检测.检测是否按下2(15, VK_KANA);
				按键检测.检测是否按下2(16, VK_HANGUL);
				按键检测.检测是否按下2(17, VK_IME_ON);
				按键检测.检测是否按下2(18, VK_JUNJA);
				按键检测.检测是否按下2(19, VK_FINAL);
				按键检测.检测是否按下2(20, VK_HANJA);
				按键检测.检测是否按下2(21, VK_KANJI);
				按键检测.检测是否按下2(22, VK_IME_OFF);
				按键检测.检测是否按下2(23, VK_ESCAPE);
				按键检测.检测是否按下2(24, VK_CONVERT);
				按键检测.检测是否按下2(25, VK_NONCONVERT);
				按键检测.检测是否按下2(26, VK_ACCEPT);
				按键检测.检测是否按下2(27, VK_MODECHANGE);
				按键检测.检测是否按下2(28, VK_SPACE);
				按键检测.检测是否按下2(29, VK_PRIOR);
				按键检测.检测是否按下2(30, VK_NEXT);
				按键检测.检测是否按下2(31, VK_END);
				按键检测.检测是否按下2(32, VK_HOME);
				按键检测.检测是否按下2(33, VK_LEFT);
				按键检测.检测是否按下2(34, VK_UP);
				按键检测.检测是否按下2(35, VK_RIGHT);
				按键检测.检测是否按下2(36, VK_DOWN);
				按键检测.检测是否按下2(37, VK_SELECT);
				按键检测.检测是否按下2(38, VK_PRINT);
				按键检测.检测是否按下2(39, VK_EXECUTE);
				按键检测.检测是否按下2(40, VK_SNAPSHOT);
				按键检测.检测是否按下2(41, VK_INSERT);
				按键检测.检测是否按下2(42, VK_DELETE);
				按键检测.检测是否按下2(43, VK_HELP);
				按键检测.检测是否按下2(44, '0');
				按键检测.检测是否按下2(45, '1');
				按键检测.检测是否按下2(46, '2');
				按键检测.检测是否按下2(47, '3');
				按键检测.检测是否按下2(48, '4');
				按键检测.检测是否按下2(49, '5');
				按键检测.检测是否按下2(50, '6');
				按键检测.检测是否按下2(51, '7');
				按键检测.检测是否按下2(52, '8');
				按键检测.检测是否按下2(53, '9');
				按键检测.检测是否按下2(54, 'A');
				按键检测.检测是否按下2(55, 'B');
				按键检测.检测是否按下2(56, 'C');
				按键检测.检测是否按下2(57, 'D');
				按键检测.检测是否按下2(58, 'E');
				按键检测.检测是否按下2(59, 'F');
				按键检测.检测是否按下2(60, 'G');
				按键检测.检测是否按下2(61, 'H');
				按键检测.检测是否按下2(62, 'I');
				按键检测.检测是否按下2(63, 'J');
				按键检测.检测是否按下2(64, 'K');
				按键检测.检测是否按下2(65, 'L');
				按键检测.检测是否按下2(66, 'M');
				按键检测.检测是否按下2(67, 'N');
				按键检测.检测是否按下2(68, 'O');
				按键检测.检测是否按下2(69, 'P');
				按键检测.检测是否按下2(70, 'Q');
				按键检测.检测是否按下2(71, 'R');
				按键检测.检测是否按下2(72, 'S');
				按键检测.检测是否按下2(73, 'T');
				按键检测.检测是否按下2(74, 'U');
				按键检测.检测是否按下2(75, 'V');
				按键检测.检测是否按下2(76, 'W');
				按键检测.检测是否按下2(77, 'X');
				按键检测.检测是否按下2(78, 'Y');
				按键检测.检测是否按下2(79, 'Z');
				按键检测.检测是否按下2(80, VK_LWIN);
				按键检测.检测是否按下2(81, VK_RWIN);
				按键检测.检测是否按下2(82, VK_APPS);
				按键检测.检测是否按下2(83, VK_SLEEP);
				按键检测.检测是否按下2(84, VK_NUMPAD0);
				按键检测.检测是否按下2(85, VK_NUMPAD1);
				按键检测.检测是否按下2(86, VK_NUMPAD2);
				按键检测.检测是否按下2(87, VK_NUMPAD3);
				按键检测.检测是否按下2(88, VK_NUMPAD4);
				按键检测.检测是否按下2(89, VK_NUMPAD5);
				按键检测.检测是否按下2(90, VK_NUMPAD6);
				按键检测.检测是否按下2(91, VK_NUMPAD7);
				按键检测.检测是否按下2(92, VK_NUMPAD8);
				按键检测.检测是否按下2(93, VK_NUMPAD9);
				按键检测.检测是否按下2(94, VK_MULTIPLY);
				按键检测.检测是否按下2(95, VK_ADD);
				按键检测.检测是否按下2(96, VK_SEPARATOR);
				按键检测.检测是否按下2(97, VK_SUBTRACT);
				按键检测.检测是否按下2(98, VK_DECIMAL);
				按键检测.检测是否按下2(99, VK_DIVIDE);
				按键检测.检测是否按下2(100, VK_F1);
				按键检测.检测是否按下2(101, VK_F2);
				按键检测.检测是否按下2(102, VK_F3);
				按键检测.检测是否按下2(103, VK_F4);
				按键检测.检测是否按下2(104, VK_F5);
				按键检测.检测是否按下2(105, VK_F6);
				按键检测.检测是否按下2(106, VK_F7);
				按键检测.检测是否按下2(107, VK_F8);
				按键检测.检测是否按下2(108, VK_F9);
				按键检测.检测是否按下2(109, VK_F10);
				按键检测.检测是否按下2(110, VK_F11);
				按键检测.检测是否按下2(111, VK_F12);
				按键检测.检测是否按下2(112, VK_F13);
				按键检测.检测是否按下2(113, VK_F14);
				按键检测.检测是否按下2(114, VK_F15);
				按键检测.检测是否按下2(115, VK_F16);
				按键检测.检测是否按下2(116, VK_F17);
				按键检测.检测是否按下2(117, VK_F18);
				按键检测.检测是否按下2(118, VK_F19);
				按键检测.检测是否按下2(119, VK_F20);
				按键检测.检测是否按下2(120, VK_F21);
				按键检测.检测是否按下2(121, VK_F22);
				按键检测.检测是否按下2(122, VK_F23);
				按键检测.检测是否按下2(123, VK_F24);
				按键检测.检测是否按下2(124, VK_NUMLOCK);
				按键检测.检测是否按下2(125, VK_SCROLL);
				按键检测.检测是否按下2(126, VK_LSHIFT);
				按键检测.检测是否按下2(127, VK_RSHIFT);
				按键检测.检测是否按下2(128, VK_LCONTROL);
				按键检测.检测是否按下2(129, VK_RCONTROL);
				按键检测.检测是否按下2(130, VK_LMENU);
				按键检测.检测是否按下2(131, VK_RMENU);
				按键检测.检测是否按下2(132, VK_BROWSER_BACK);
				按键检测.检测是否按下2(133, VK_BROWSER_FORWARD);
				按键检测.检测是否按下2(134, VK_BROWSER_REFRESH);
				按键检测.检测是否按下2(135, VK_BROWSER_STOP);
				按键检测.检测是否按下2(136, VK_BROWSER_SEARCH);
				按键检测.检测是否按下2(137, VK_BROWSER_FAVORITES);
				按键检测.检测是否按下2(138, VK_BROWSER_HOME);
				按键检测.检测是否按下2(139, VK_VOLUME_MUTE);
				按键检测.检测是否按下2(140, VK_VOLUME_DOWN);
				按键检测.检测是否按下2(141, VK_VOLUME_UP);
				按键检测.检测是否按下2(142, VK_MEDIA_NEXT_TRACK);
				按键检测.检测是否按下2(143, VK_MEDIA_PREV_TRACK);
				按键检测.检测是否按下2(144, VK_MEDIA_STOP);
				按键检测.检测是否按下2(145, VK_MEDIA_PLAY_PAUSE);
				按键检测.检测是否按下2(146, VK_LAUNCH_MAIL);
				按键检测.检测是否按下2(147, VK_LAUNCH_MEDIA_SELECT);
				按键检测.检测是否按下2(148, VK_LAUNCH_APP1);
				按键检测.检测是否按下2(149, VK_LAUNCH_APP2);
				按键检测.检测是否按下2(150, VK_OEM_1);
				按键检测.检测是否按下2(151, VK_OEM_PLUS);
				按键检测.检测是否按下2(152, VK_OEM_COMMA);
				按键检测.检测是否按下2(153, VK_OEM_MINUS);
				按键检测.检测是否按下2(154, VK_OEM_PERIOD);
				按键检测.检测是否按下2(155, VK_OEM_2);
				按键检测.检测是否按下2(156, VK_OEM_3);
				按键检测.检测是否按下2(157, VK_OEM_4);
				按键检测.检测是否按下2(158, VK_OEM_5);
				按键检测.检测是否按下2(159, VK_OEM_6);
				按键检测.检测是否按下2(160, VK_OEM_7);
				按键检测.检测是否按下2(161, VK_OEM_8);
				按键检测.检测是否按下2(162, VK_OEM_102);
				按键检测.检测是否按下2(163, VK_PROCESSKEY);
				按键检测.检测是否按下2(164, VK_PACKET);
				按键检测.检测是否按下2(165, VK_ATTN);
				按键检测.检测是否按下2(166, VK_CRSEL);
				按键检测.检测是否按下2(167, VK_EXSEL);
				按键检测.检测是否按下2(168, VK_EREOF);
				按键检测.检测是否按下2(169, VK_PLAY);
				按键检测.检测是否按下2(170, VK_ZOOM);
				按键检测.检测是否按下2(171, VK_NONAME);
				按键检测.检测是否按下2(172, VK_PA1);
				按键检测.检测是否按下2(173, VK_OEM_CLEAR);
				按键检测.检测是否按下2(174, VK_OEM_PLUS);
				按键检测.检测是否按下2(175, VK_OEM_MINUS);
				按键检测.检测是否按下2(176, VK_OEM_COMMA);
				按键检测.检测是否按下2(177, VK_OEM_PERIOD);
				按键检测.检测是否按下2(178, VK_OEM_2);
				按键检测.检测是否按下2(179, VK_OEM_3);
				按键检测.检测是否按下2(180, VK_OEM_4);
				按键检测.检测是否按下2(181, VK_OEM_5);
				按键检测.检测是否按下2(182, VK_OEM_6);
				按键检测.检测是否按下2(183, VK_OEM_7);
				按键检测.检测是否按下2(184, VK_OEM_8); //11个VK_OEM_8
				按键检测.检测是否按下2(185, MOUSE_MOVED);

				//_kbhit() 检测
				////if (_kbhit()!=0) {
				////	按键检测.现在[174] = 1;
				////	if (按键检测.现在[174] != 按键检测.之前[174])
				////		//TODO 运行运行运行运行运行
				////		按键检测.按下 = 3; //todo jmcebudk 不正常
				////}
				////else 按键检测.现在[174] = 0;
			}

			if (按键检测.按下 >= 1) // 1 \ 2
			{
				///2023年6月12日01:08:24
				//>刷新 \ 清屏 重新输出
				if (按键检测.按键按下刷新 == 1)
				{
					按键检测.按键显示_cmd();
				}
				if (按键检测.按键松开刷新 == 1)
				{
					按键检测.按键显示_cmd();
				}
				按键检测.按下 = 0;
				//刷新 = 1;
			}//检测到按键状态变化再打印
			按键检测.之前和现在批量相等(200); //重新检测
			//if ((按下 == 0) && (刷新 == 1)) { print(); 刷新 = 0; }
			////主程序		
			//			//if ((按下 == 1) ) {
			//				//if ((按下 == 1) || (_getch()) ){

			Sleep(Sleep_按键检测);//循环时间间隔，防止太占CPU
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

	int KEY_DOWN(int 键码) {
		if ((GetAsyncKeyState(键码) & 0x8000) ? 1 : 0) //不用?:
		{
			return 1;
		}
		else {
			return 0;
		}
	}

	void 检测uubc左键() //有用
	{
#include<iostream>
#include<windows.h>
		//#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) //必要的，我是背下来的 
				//必要的，要背下来

		while (1) {
			if (KEY_DOWN(MOUSE_MOVED)) {//判断左键
				printf("你按了鼠标左键");
			}
			else {
				printf("你没按鼠标左键");
			}
			printf("\n");
			if (KEY_DOWN(MOUSE_EVENT)) {//判断右键
				printf("你按了鼠标右键");
			}
			else {
				printf("你没按鼠标右键");
			}
			printf("\n");
			if (KEY_DOWN(MOUSE_WHEELED)) {//判断滚轮
				printf("你按了鼠标滚轮");
			}
			else {
				printf("你没按鼠标滚轮");
			}
			printf("\n");
			//system("cls");
			sleep(1000);
		}
	}

	void 检测uubc左键2()
	{

	}

	void 检测uubc左键3()
	{
		while (true)
		{

			if ((GetAsyncKeyState(MOUSE_MOVED & 0x8000)) ? 1 : 0) {
				printf("  %c  ", "键啊啊啊啊啊啊啊啊");
				printf("\n");
			}
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
	//主程序.检测uubc左键();

	return 0;
}