#pragma once
#include<iostream>
using namespace std;

namespace HighscoreBega
{
	
	class Highscore
	{
		static const int Size = 10;
		string Players[Size];
		int Score[Size];
	public:
		void resetHighScore();
		void SetNewHighScore(string player, int score);
		int GetScore(int pos);
		string GetPlayer(int pos);
		string GetMaxScorePlayer();
		int GetMaxScore();
	};


}