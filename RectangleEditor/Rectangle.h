#pragma once
#include<iostream>

class Rectangle {
public:
	Rectangle();
	Rectangle(int length,int width,  int x, int y, int color);
	//Rectangle(int length, int width, int x, int y);

	//長方形の属性の表示
	void showRectAttribute();
	bool isSegment();
	bool isPoint();
	bool isNegative();
private:
	/*enum Color {
		RED,
		BLUE,
		YELLOW,
		GRAY,
		GREEN,
		ORANGE,
		MAGENTA,
		CYAN,
		WHITE
	};*/

	int length;
	int width;
	int x;
	int y;
	int color;
};