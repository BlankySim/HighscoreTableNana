#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#include<iostream>
#include"Highscore.h"

using namespace nana;
using namespace HighscoreBega;

void titleTextInit(label& title, label& names, label& scores, form& window);
void initScoreSlots(Highscore& scoreTable);

int main()
{
	form window{ API::make_center(240,350) };
	window.caption("Highscore Table");

	label title{ window, rectangle(88,0,100,20) };
	label names{ window, rectangle(0,25,60,20) };
	label scores{ window, rectangle(130,25,60,20) };

	titleTextInit(title, names, scores, window);

	Highscore scoreTable;
	initScoreSlots(scoreTable);

	window.show();
	exec();
}

void titleTextInit(label& title, label& names, label& scores, form& window)
{
	window.caption("Highscore Table");

	title.format(true);
	title.caption("<bold blue size=10>Highscores");

	names.format(true);
	names.caption("<bold blue size=10>    Names");

	scores.format(true);
	scores.caption("<bold blue size=10>Scores");
}

void initScoreSlots(Highscore& scoreTable)
{
	scoreTable.SetNewHighScore("Pablo", 464564);
	scoreTable.SetNewHighScore("Lauti", 546);
	scoreTable.SetNewHighScore("Cami", 68646);
	scoreTable.SetNewHighScore("Sergio", 5467867);
	scoreTable.SetNewHighScore("Fabio", 5464648);
	scoreTable.SetNewHighScore("Laura", 85757);
	scoreTable.SetNewHighScore("Lisa", 546786);
	scoreTable.SetNewHighScore("Paula", 456);
	scoreTable.SetNewHighScore("Oscar", 8668);
	scoreTable.SetNewHighScore("Simon", 6856);
}