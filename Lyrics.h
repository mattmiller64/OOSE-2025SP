#ifndef LYRICS_H
#define LYRICS_H

class Lyrics {

private:
	String lyricsId;
	String text;
	double startTime;
	String language;

public:
	String getText();

	double getTiming();
};

#endif
