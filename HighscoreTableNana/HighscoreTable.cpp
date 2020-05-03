#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#include<iostream>
#include"Highscore.h"

using namespace nana;
using namespace HighscoreBega;

void titleTextInit(label& title, label& names, label& scores, form& window);
void initScoreSlots(Highscore& scoreTable);
void initNameCaptions(Highscore scoreTable, label& slot1Name, label& slot2Name, label& slot3Name, label& slot4Name, label& slot5Name,
	label& slot6Name, label& slot7Name, label& slot8Name, label& slot9Name);
void initScoreCaptions(Highscore scoreTable, label& slot1Score, label& slot2Score, label& slot3Score, label& slot4Score, label& slot5Score,
	label& slot6Score, label& slot7Score, label& slot8Score, label& slot9Score);

int main()
{
	form window{ API::make_center(240,200) };
	window.caption("Highscore Table");

	label title{ window, rectangle(88,0,100,20) };
	label names{ window, rectangle(0,25,60,20) };
	label scores{ window, rectangle(130,25,60,20) };

	titleTextInit(title, names, scores, window);

	Highscore scoreTable;
	scoreTable.resetHighScore();
	initScoreSlots(scoreTable);

	label slot1Name{ window, rectangle(20,50,60,15) };
	label slot2Name{ window, rectangle(20,65,60,15) };
	label slot3Name{ window, rectangle(20,80,60,15) };
	label slot4Name{ window, rectangle(20,95,60,15) };
	label slot5Name{ window, rectangle(20,110,60,15) };
	label slot6Name{ window, rectangle(20,125,60,15) };
	label slot7Name{ window, rectangle(20,140,60,15) };
	label slot8Name{ window, rectangle(20,155,60,15) };
	label slot9Name{ window, rectangle(20,170,60,15) };

	initNameCaptions(scoreTable, slot1Name, slot2Name, slot3Name, slot4Name, slot5Name,
					slot6Name, slot7Name, slot8Name, slot9Name);

	label slot1Score{ window, rectangle(130,50,60,15) };
	label slot2Score{ window, rectangle(130,65,60,15) };
	label slot3Score{ window, rectangle(130,80,60,15) };
	label slot4Score{ window, rectangle(130,95,60,15) };
	label slot5Score{ window, rectangle(130,110,60,15) };
	label slot6Score{ window, rectangle(130,125,60,15) };
	label slot7Score{ window, rectangle(130,140,60,15) };
	label slot8Score{ window, rectangle(130,155,60,15) };
	label slot9Score{ window, rectangle(130,170,60,15) };

	initScoreCaptions(scoreTable, slot1Score, slot2Score, slot3Score, slot4Score, slot5Score,
		slot6Score, slot7Score, slot8Score, slot9Score);

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
	scoreTable.SetNewHighScore("Sergio", 47867);
	scoreTable.SetNewHighScore("Fabio", 5464648);
	scoreTable.SetNewHighScore("Laura", 85757);
	scoreTable.SetNewHighScore("Paula", 456);
	scoreTable.SetNewHighScore("Oscar", 8668);
	scoreTable.SetNewHighScore("Simon", 6856);
}

void initNameCaptions(Highscore scoreTable, label& slot1Name, label& slot2Name, label& slot3Name, label& slot4Name, label& slot5Name,
	label& slot6Name, label& slot7Name, label& slot8Name, label& slot9Name)
{
	slot1Name.caption(scoreTable.GetPlayer(1));
	slot2Name.caption(scoreTable.GetPlayer(2));
	slot3Name.caption(scoreTable.GetPlayer(3));
	slot4Name.caption(scoreTable.GetPlayer(4));
	slot5Name.caption(scoreTable.GetPlayer(5));
	slot6Name.caption(scoreTable.GetPlayer(6));
	slot7Name.caption(scoreTable.GetPlayer(7));
	slot8Name.caption(scoreTable.GetPlayer(8));
	slot9Name.caption(scoreTable.GetPlayer(9));
}

void initScoreCaptions(Highscore scoreTable, label& slot1Score, label& slot2Score, label& slot3Score, label& slot4Score, label& slot5Score,
	label& slot6Score, label& slot7Score, label& slot8Score, label& slot9Score)
{
	slot1Score.caption(to_nstring(scoreTable.GetScore(1)));
	slot2Score.caption(to_nstring(scoreTable.GetScore(2)));
	slot3Score.caption(to_nstring(scoreTable.GetScore(3)));
	slot4Score.caption(to_nstring(scoreTable.GetScore(4)));
	slot5Score.caption(to_nstring(scoreTable.GetScore(5)));
	slot6Score.caption(to_nstring(scoreTable.GetScore(6)));
	slot7Score.caption(to_nstring(scoreTable.GetScore(7)));
	slot8Score.caption(to_nstring(scoreTable.GetScore(8)));
	slot9Score.caption(to_nstring(scoreTable.GetScore(9)));
}