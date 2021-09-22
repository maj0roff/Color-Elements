#include <iostream>
#include <Windows.h>
#include <string>
#include <cstring>

static const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
const char* c_str();

// colors (from https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c)
#define color_black      0
#define color_dark_blue  1
#define color_dark_green 2
#define color_light_blue 3
#define color_dark_red   4
#define color_magenta    5
#define color_orange     6
#define color_light_gray 7
#define color_gray       8
#define color_blue       9
#define color_green     10
#define color_cyan      11
#define color_red       12
#define color_pink      13
#define color_yellow    14
#define color_white     15


//seperator styles
#define style1 0
#define style2 1

using namespace std;

namespace cel
{
	void reset();
	void print(string text, int color);
	void printbracket(string inbracket, string text, int color);
	void seperator_with_text(string text, int text_color, int seperator_color, int style, int end_startsymcol);
	void seperator(int seperator_color, int style, int end_startsymcol);
	void creeper(int color);
	void spacing();
	void windowname(string name);
}
