#include "funcs.h"

void cel::reset()
{
	SetConsoleTextAttribute(handle, color_white);
}

void cel::print(string text, int color)
{
	SetConsoleTextAttribute(handle, color);
	cout << text + "\n";
	cel::reset();
}

void cel::printbracket(string inbracket, string text, int color)
{

	SetConsoleTextAttribute(handle, color_white);
	cout << "[";
	SetConsoleTextAttribute(handle, color);
	cout << inbracket;
	SetConsoleTextAttribute(handle, color_white);
	cout << "] " + text + "\n";
	cel::reset();
}

void cel::seperator_with_text(string text, int text_color, int seperator_color, int style, int end_startsymcol)
{
	if (style == 0)
	{
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "!";
		SetConsoleTextAttribute(handle, seperator_color);
		cout << "-------------------- [ ";
		SetConsoleTextAttribute(handle, text_color);
		cout << text;
		SetConsoleTextAttribute(handle, seperator_color);
		cout << " ] --------------------";
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "! \n";
	}

	else if (style == 1)
	{
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "#";
		SetConsoleTextAttribute(handle, seperator_color);
		cout << "==================== [ ";
		SetConsoleTextAttribute(handle, text_color);
		cout << text;
		SetConsoleTextAttribute(handle, seperator_color);
		cout << " ] ====================";
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "# \n";
	}
	cel::reset();
}

void cel::seperator(int seperator_color, int style, int end_startsymcol)
{
	if (style == 0)
	{
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "!";
		SetConsoleTextAttribute(handle, seperator_color);
		cout << "------------------------------";
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "! \n";
	}

	else if (style == 1)
	{
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "#";
		SetConsoleTextAttribute(handle, seperator_color);
		cout << "==============================";
		SetConsoleTextAttribute(handle, end_startsymcol);
		cout << "# \n";
	}
}

void cel::creeper(int color)
{
	SetConsoleTextAttribute(handle, color);
	wcout << "######      ###### \n";
	wcout << "######      ###### \n";
	wcout << "######      ###### \n";
	wcout << "      ######       \n";
	wcout << "   ############    \n";
	wcout << "   ############    \n";
	wcout << "   ############    \n";
	wcout << "   ###      ###    \n";
	wcout << "   ###      ###    \n";
	cel::reset();
}

void cel::windowname(string name)
{
	SetConsoleTitleA(name.c_str());
}

void cel::spacing()
{
	cout << " \n";
}
