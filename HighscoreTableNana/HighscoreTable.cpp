#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#include<iostream>
#include"Highscore.h"

using namespace nana;
int main()
{


	form window{ API::make_center(240,350) };
	window.caption("Highscore Table");


	label title{ window, rectangle(88,0,100,20) };
	title.format(true);
	title.caption("<bold blue size=10>Highscores");

	label names{ window, rectangle(0,25,60,20) };
	names.format(true);
	names.caption("<bold blue size=10>    Names");

	label scores{ window, rectangle(130,25,60,20) };
	scores.format(true);
	scores.caption("<bold blue size=10>Scores");



	window.show();
	exec();
}