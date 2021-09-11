#include "CEL/funcs.h"

int main()
{
	cel::print("cel::text red", color_red);
	cel::print("cel::text white", color_white);
	cel::printbracket("InBracket", "Text", color_blue);
	cout << " \n";
	cel::seperator(color_blue, style1, color_gray);
	cel::print("style1", color_blue);
	cout << " \n";
	cel::seperator(color_blue, style2, color_gray);
	cel::print("style2", color_blue);
	cout << " \n";
	cel::seperator_with_text("Text" ,color_red, color_blue, style1, color_gray);
	cel::print("style1 with text", color_blue);
	cout << " \n";
	cel::seperator_with_text("Text", color_red, color_blue, style2, color_gray);
	cel::print("style2 with text", color_blue);
	cout << " \n";

	return 0;
}