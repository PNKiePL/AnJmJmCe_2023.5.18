#pragma once
#ifndef AJ_JM_JM_CE_CPP 
#define AJ_JM_JM_CE_CPP

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\全局量.h>
#include  <E:\lib\文件读写.h>
#include  <E:\lib\文字读取.h>

#include<E:\lib\按键检测.h  >

//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//键盘组件
void 按键检测::Fn行() {
	长字符(VK_ESCAPE, "ESC"); //24
	长字符(VK_F1, "F1"); //101 
	长字符(VK_F2, "F2"); //102
	长字符(VK_F3, "F3"); //103
	长字符(VK_F4, "F4"); //104
	长字符(VK_F5, "F5"); //105

	长字符(VK_F6, "F6"); //106
	长字符(VK_F7, "F7"); //107
	长字符(VK_F8, "F8"); //108
	长字符(VK_F9, "F9"); //109
	长字符(VK_F10, "F10"); //110
	长字符(VK_F11, "F11"); //111l
	长字符(VK_F12, "F12"); //112
	长字符(VK_DELETE, "DELETE"); //43
	printf("	");
	长字符(VK_PRIOR, "PRIOR"); //30
	长字符(VK_NEXT, "NEXT"); //31
	长字符(VK_HOME, "HOME"); //33
	长字符(VK_END, "END"); //32
}
void 按键检测::数字行() {
	字符('1'); 字符('2'); 字符('3'); 字符('4'); 字符('5'); 字符('6'); 字符('7'); 字符('8'); 字符('9'); 字符('0'); //显示文字('9'); 显示文字('0'); 
}
void 按键检测::Q行() {
	长字符(VK_TAB, "TAB"); //7
	字符('Q'); 字符('W'); 字符('E'); 字符('R'); 字符('T'); 字符('Y'); 字符('U'); 字符('I'); 字符('O'); 字符('P');
}
void 按键检测::CAPS行() {
	长字符(VK_CAPITAL, "CAPS"); //14
	字符('A'); 字符('S'); 字符('D'); 字符('F'); 字符('G'); 字符('H'); 字符('J'); 字符('K'); 字符('L');
}
void 按键检测::SHIFT行() {
	长字符(VK_SHIFT, "SHIFT"); //10	
	字符('Z'); 字符('X'); 字符('C'); 字符('V'); 字符('B'); 字符('N'); 字符('M');
}
void 按键检测::Ctrl行() {
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

//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//>按键+ 计数
auto 按键检测::Fn加计数行() {
	长字符加计数(VK_ESCAPE, "ESC"); //24
	长字符加计数(VK_F1, "F1"); //101 
	长字符加计数(VK_F2, "F2"); //102
	长字符加计数(VK_F3, "F3"); //103
	长字符加计数(VK_F4, "F4"); //104
	长字符加计数(VK_F5, "F5"); //105

	长字符加计数(VK_F6, "F6"); //106
	长字符加计数(VK_F7, "F7"); //107
	长字符加计数(VK_F8, "F8"); //108
	长字符加计数(VK_F9, "F9"); //109
	长字符加计数(VK_F10, "F10"); //110
	长字符加计数(VK_F11, "F11"); //111l
	长字符加计数(VK_F12, "F12"); //112
	长字符加计数(VK_DELETE, "DELETE"); //43
	printf("	");
	长字符加计数(VK_PRIOR, "PRIOR"); //30
	长字符加计数(VK_NEXT, "NEXT"); //31
	长字符加计数(VK_HOME, "HOME"); //33
	长字符加计数(VK_END, "END"); //32
}
auto 按键检测::数字加计数行() {
	字符加计数('1'); 字符加计数('2'); 字符加计数('3'); 字符加计数('4'); 字符加计数('5'); 字符加计数('6'); 字符加计数('7'); 字符加计数('8'); 字符加计数('9'); 字符加计数('0'); //显示文字('9'); 显示文字('0'); 
}
auto 按键检测::Q加计数行() {
	长字符加计数(VK_TAB, "TAB"); //7
	字符加计数('Q'); 字符加计数('W'); 字符加计数('E'); 字符加计数('R'); 字符加计数('T'); 字符加计数('Y'); 字符加计数('U'); 字符加计数('I'); 字符加计数('O'); 字符加计数('P');
}
auto 按键检测::CAPS加计数行() {
	长字符加计数(VK_CAPITAL, "CAPS"); //14
	字符加计数('A'); 字符加计数('S'); 字符加计数('D'); 字符加计数('F'); 字符加计数('G'); 字符加计数('H'); 字符加计数('J'); 字符加计数('K'); 字符加计数('L');
}
auto 按键检测::SHIFT加计数行() {
	长字符加计数(VK_SHIFT, "SHIFT"); //10	
	字符加计数('Z'); 字符加计数('X'); 字符加计数('C'); 字符加计数('V'); 字符加计数('B'); 字符加计数('N'); 字符加计数('M');
}
auto 按键检测::Ctrl加计数行() {
	长字符加计数(VK_CONTROL, "Ctrl"); //11
	长字符加计数(VK_LWIN, "Win"); //81 //⊞
	//长字符加计数(VK_LMENU, "Alt"); //132

	长字符加计数(VK_MENU, "Alt"); //12
	长字符加计数(VK_SPACE, "         SPACE         "); //29
	长字符加计数(VK_RWIN, "Win"); //82 //⊞
	长字符加计数(VK_MENU, "Alt"); //12
	长字符加计数(14, "Fn");
	//长字符加计数(VK_RMENU, "Alt"); //133

	长字符加计数(VK_CONTROL, "Ctrl"); //11
	printf("	");
	//方向键
	长字符加计数(VK_LEFT, "LEFT"); //34
	长字符加计数(VK_DOWN, "DOWN"); //37
	长字符加计数(VK_RIGHT, "RIGHT"); //36
	//printf("	");
	长字符加计数(VK_NUMPAD0, " 0"); //85
}

//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//计数布局 \ 组件 \
///正则 [,][ ]["].{1,99}"[)][;]
auto 按键检测::计数行_Fn行() {
	显示计数_会亮(VK_ESCAPE); //24
	显示计数_会亮(VK_F1); //101 
	显示计数_会亮(VK_F2); //102
	显示计数_会亮(VK_F3); //103
	显示计数_会亮(VK_F4); //104
	显示计数_会亮(VK_F5); //105

	显示计数_会亮(VK_F6); //106
	显示计数_会亮(VK_F7); //107
	显示计数_会亮(VK_F8); //108
	显示计数_会亮(VK_F9); //109
	显示计数_会亮(VK_F10); //110
	显示计数_会亮(VK_F11); //111l
	显示计数_会亮(VK_F12); //112
	显示计数_会亮(VK_DELETE); //43
	printf("	");
	显示计数_会亮(VK_PRIOR); //30
	显示计数_会亮(VK_NEXT); //31
	显示计数_会亮(VK_HOME); //33
	显示计数_会亮(VK_END); //32
}
auto 按键检测::计数行_数字行() {
	显示计数_会亮('1'); 显示计数_会亮('2'); 显示计数_会亮('3'); 显示计数_会亮('4'); 显示计数_会亮('5'); 显示计数_会亮('6'); 显示计数_会亮('7'); 显示计数_会亮('8'); 显示计数_会亮('9'); 显示计数_会亮('0'); //显示文字('9'); 显示文字('0'); 
}
auto 按键检测::计数行_Q行() {
	显示计数_会亮(VK_TAB); //7
	显示计数_会亮('Q'); 显示计数_会亮('W'); 显示计数_会亮('E'); 显示计数_会亮('R'); 显示计数_会亮('T'); 显示计数_会亮('Y'); 显示计数_会亮('U'); 显示计数_会亮('I'); 显示计数_会亮('O'); 显示计数_会亮('P');
}
auto 按键检测::计数行_CAPS行() {
	显示计数_会亮(VK_CAPITAL); //14
	显示计数_会亮('A'); 显示计数_会亮('S'); 显示计数_会亮('D'); 显示计数_会亮('F'); 显示计数_会亮('G'); 显示计数_会亮('H'); 显示计数_会亮('J'); 显示计数_会亮('K'); 显示计数_会亮('L');
}
auto 按键检测::计数行_SHIFT行() {
	显示计数_会亮(VK_SHIFT); //10	
	显示计数_会亮('Z'); 显示计数_会亮('X'); 显示计数_会亮('C'); 显示计数_会亮('V'); 显示计数_会亮('B'); 显示计数_会亮('N'); 显示计数_会亮('M');
}
auto 按键检测::计数行_Ctrl行() {
	显示计数_会亮(VK_CONTROL); //11
	显示计数_会亮(VK_LWIN); //81 //⊞
	//显示计数_会亮(VK_LMENU); //132

	显示计数_会亮(VK_MENU); //12
	显示计数_会亮(VK_SPACE); //29
	显示计数_会亮(VK_RWIN); //82 //⊞
	显示计数_会亮(VK_MENU); //12
	显示计数_会亮(14);
	//显示计数_会亮(VK_RMENU); //133

	显示计数_会亮(VK_CONTROL); //11
	printf("	");
	//方向键
	显示计数_会亮(VK_LEFT); //34
	显示计数_会亮(VK_DOWN); //37
	显示计数_会亮(VK_RIGHT); //36
	//printf("	");
	显示计数_会亮(VK_NUMPAD0); //85
}
void 按键检测::计数布局_会亮() {
	//F1
	Fn行();
	printf("\n\n");
	//>数字键
	显示计数_会亮(VK_OEM_3);
	数字行();
	显示计数_会亮(VK_OEM_MINUS);
	显示计数_会亮(VK_OEM_PLUS);
	显示计数_会亮(VK_BACK); //6
	printf("	"); //空格
	显示计数_会亮(VK_DIVIDE); //100
	显示计数_会亮(VK_MULTIPLY); //95
	显示计数_会亮(VK_SUBTRACT); //98
	显示计数_会亮(VK_ADD); //96
	printf("\n\n");

	//Q
	Q行();
	显示计数_会亮(VK_OEM_4);
	显示计数_会亮(VK_OEM_6);
	显示计数_会亮(VK_OEM_5);
	printf("	");
	显示计数_会亮(VK_NUMPAD7); //92
	显示计数_会亮(VK_NUMPAD8); //93
	显示计数_会亮(VK_NUMPAD9); //94
	printf("\n\n");

	//CAPS A
	CAPS行();
	显示计数_会亮(VK_OEM_1);
	显示计数_会亮(VK_OEM_7);

	显示计数_会亮(VK_RETURN); //9
	printf("	");
	显示计数_会亮(VK_NUMPAD4); //89
	显示计数_会亮(VK_NUMPAD5); //90
	显示计数_会亮(VK_NUMPAD6); //91
	printf("\n\n");

	//SHIFT Z	
	SHIFT行();
	显示计数_会亮(VK_OEM_COMMA);
	显示计数_会亮(VK_OEM_PERIOD);
	显示计数_会亮(VK_OEM_2);
	显示计数_会亮(VK_SHIFT); //10		
	printf("	");
	显示计数_会亮(VK_UP); //35
	printf("	");
	显示计数_会亮(VK_NUMPAD1); //86
	显示计数_会亮(VK_NUMPAD2); //87
	显示计数_会亮(VK_NUMPAD3); //88
	printf("\n\n");

	//Ctrl Win
	Ctrl行();

	//测试行
	printf("\n\n");
	显示计数_会亮(MOUSE_MOVED);
	显示计数_会亮(VK_MBUTTON); //3
	显示计数_会亮(VK_RBUTTON); //1 //报错
	显示计数_会亮(VK_XBUTTON2); //4
	显示计数_会亮(VK_XBUTTON1); //5

	color(7); //>末尾 不会自动改颜色
	printf("%s", 布局末尾显示);
}
//!▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//>键盘布局
void 按键检测::键盘布局1() //正常的
{
	//F1
	Fn行();
	printf("\n\n");
	///特殊键(, " ");
	//>数字键
	长字符(VK_OEM_3, " `~");
	数字行();
	/// /*特殊键(45, " -"); 特殊键(95, "_"); 特殊键(61, " ="); 特殊键(43, "+");*/
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
	///特殊键(91, " ["); 特殊键(123, "{"); 特殊键(93, " ]");  特殊键(125, "}"); 特殊键(92, "   /"); 特殊键(124, "|");
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
	//>'"
	//长字符(VK_OEM_7, " '" + '"'); //" '" + '"' 显示汉字"键"???????????????????????
	//长字符(VK_OEM_7, " ' ''");
	长字符(VK_OEM_7, " '”");
	//长字符(VK_OEM_7, to_string('"')); //显示34
	//长字符(VK_OEM_7, to_string('%"')); //显示9506
	//长字符(VK_OEM_7, to_string('\\"')); //显示23586

	长字符(VK_RETURN, "RETURN"); //9
	printf("	");
	长字符(VK_NUMPAD4, " 4"); //89
	长字符(VK_NUMPAD5, " 5"); //90
	长字符(VK_NUMPAD6, " 6"); //91
	printf("\n\n");

	//SHIFT Z	
	SHIFT行();
	///特殊键(44, " ,");
	///特殊键(46, "<");
	///特殊键(60, " .");
	///特殊键(62, ">");
	///特殊键(47, " /");
	///特殊键(63, "?");
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
	GetAsyncKey键(MOUSE_MOVED, "鼠标左键 ");
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
长字符(VK_OEM_PERIOD); //156
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

color(7); //>末尾 不会自动改颜色
printf("%s", 布局末尾显示);
}

void 按键检测::键盘布局2()
{
	//F1
	长字符(VK_ESCAPE, "ESC"); //24
	长字符(VK_F1, "F1"); //101 
	长字符(VK_F2, "F2"); //102
	长字符(VK_F3, "F3"); //103
	长字符(VK_F4, "F4"); //104
	长字符(VK_F5, "F5"); //105
	长字符(VK_F6, "F6"); //106
	长字符(VK_F7, "F7"); //107
	长字符(VK_F8, "F8"); //108
	长字符(VK_F9, "F9"); //109
	长字符(VK_F10, "F10"); //110
	长字符(VK_F11, "F11"); //111l
	长字符(VK_F12, "F12"); //112
	长字符(VK_DELETE, "DELETE"); //43
	printf("	");
	长字符(VK_PRIOR, "PRIOR"); //30
	长字符(VK_NEXT, "NEXT"); //31
	长字符(VK_HOME, "HOME"); //33
	长字符(VK_END, "END"); //32
	printf("\n\n");

	///特殊键(, " ");

	//0
	字符('0'); 字符('1'); 字符('2'); 字符('3'); 字符('4'); 字符('5'); 字符('6'); 字符('7'); 字符('8'); 字符('9'); //显示文字('9'); 显示文字('0'); 
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
	字符('Q'); 字符('W'); 字符('E'); 字符('R'); 字符('T'); 字符('Y'); 字符('U'); 字符('I'); 字符('O'); 字符('P');
	特殊键(91, " ["); 特殊键(123, "{"); 特殊键(93, " ]");  特殊键(125, "}"); 特殊键(92, "   /"); 特殊键(124, "|");
	printf("	");
	长字符(VK_NUMPAD7, " 7"); //92
	长字符(VK_NUMPAD8, " 8"); //93
	长字符(VK_NUMPAD9, " 9"); //94
	printf("\n\n");
	//CAPS A
	长字符(VK_CAPITAL, "CAPS"); //14
	字符('A'); 字符('S'); 字符('D'); 字符('F'); 字符('G'); 字符('H'); 字符('J'); 字符('K'); 字符('L');
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
	字符('Z'); 字符('X'); 字符('C'); 字符('V'); 字符('B'); 字符('N'); 字符('M');
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

	color(7); //>末尾 不会自动改颜色
	printf("%s", 布局末尾显示);
}
//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//>键盘布局_按键+计数
void 按键检测::键盘布局_按键加计数1()
{
	//F1
	Fn加计数行();
	printf("\n\n");
	//>数字键
	长字符加计数(VK_OEM_3, " `~");
	数字加计数行();
	长字符加计数(VK_OEM_MINUS, " -_");
	长字符加计数(VK_OEM_PLUS, " =+");
	长字符加计数(VK_BACK, "  BACK  "); //6
	printf("	"); //空格
	长字符加计数(VK_DIVIDE, " /"); //100
	长字符加计数(VK_MULTIPLY, " *"); //95
	长字符加计数(VK_SUBTRACT, " -"); //98
	长字符加计数(VK_ADD, " +"); //96
	printf("\n\n");

	//Q
	Q加计数行();
	长字符加计数(VK_OEM_4, " [{");
	长字符加计数(VK_OEM_6, " ]}");
	长字符加计数(VK_OEM_5, " /|");
	printf("	");
	长字符加计数(VK_NUMPAD7, " 7"); //92
	长字符加计数(VK_NUMPAD8, " 8"); //93
	长字符加计数(VK_NUMPAD9, " 9"); //94
	printf("\n\n");

	//CAPS A
	CAPS加计数行();
	长字符加计数(VK_OEM_1, " ;:");
	长字符加计数(VK_OEM_7, " '”");

	长字符加计数(VK_RETURN, "RETURN"); //9
	printf("	");
	长字符加计数(VK_NUMPAD4, " 4"); //89
	长字符加计数(VK_NUMPAD5, " 5"); //90
	长字符加计数(VK_NUMPAD6, " 6"); //91
	printf("\n\n");

	//SHIFT Z	
	SHIFT加计数行();
	长字符加计数(VK_OEM_COMMA, " ,<");
	长字符加计数(VK_OEM_PERIOD, " .>");
	长字符加计数(VK_OEM_2, " /?");
	长字符加计数(VK_SHIFT, "SHIFT"); //10		
	printf("	");
	长字符加计数(VK_UP, "UP"); //35
	printf("	");
	长字符加计数(VK_NUMPAD1, " 1"); //86
	长字符加计数(VK_NUMPAD2, " 2"); //87
	长字符加计数(VK_NUMPAD3, " 3"); //88
	printf("\n\n");

	//Ctrl Win
	Ctrl加计数行();

	//测试行
	printf("\n\n");
	GetAsyncKey键加计数(MOUSE_MOVED, "鼠标左键");
	长字符加计数(VK_MBUTTON, "中键"); //3
	长字符加计数(VK_RBUTTON, "右键"); //1 //报错
	长字符加计数(VK_XBUTTON2, "4键"); //4
	长字符加计数(VK_XBUTTON1, "5键"); //5

	color(7); //>末尾 不会自动改颜色
	printf("%s", 布局末尾显示);
}

//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
//>键盘布局_键盘加计数
void 按键检测::键盘布局1加计数()
{
	//F1
	Fn行();
	printf("\n\n");
	//>数字键
	长字符(VK_OEM_3, " `~");
	数字行();
	长字符(VK_OEM_MINUS, " -_");
	长字符(VK_OEM_PLUS, " =+");
	长字符(VK_BACK, "  BACK  "); //6
	printf("	"); //空格
	长字符(VK_DIVIDE, " /"); //100
	长字符(VK_MULTIPLY, " *"); //95
	长字符(VK_SUBTRACT, " -"); //98
	长字符(VK_ADD, " +"); //96
	printf("\n\n");

	//Q
	Q行();
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
	长字符(VK_OEM_1, " ;:");
	长字符(VK_OEM_7, " '”");

	长字符(VK_RETURN, "RETURN"); //9
	printf("	");
	长字符(VK_NUMPAD4, " 4"); //89
	长字符(VK_NUMPAD5, " 5"); //90
	长字符(VK_NUMPAD6, " 6"); //91
	printf("\n\n");

	//SHIFT Z	
	SHIFT行();
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
	GetAsyncKey键(MOUSE_MOVED, "鼠标左键 ");
	长字符(VK_MBUTTON, "中键"); //3
	长字符(VK_RBUTTON, "右键"); //1 //报错
	长字符(VK_XBUTTON2, "4键"); //4
	长字符(VK_XBUTTON1, "5键"); //5

	//计数行
	printf("\n\n");
	计数布局_会亮();

	color(7); //>末尾 不会自动改颜色
	printf("%s", 布局末尾显示);
}
#endif