#ifndef MUSICSHEET_H
#define MUSICSHEET_H

class MusicSheet {

private:
	String sheetId;
	String title;
	int tempoBpm;
	String keySignature;

public:
	void buildFrom(List<Note> notes, List<Voice> voices);

	File exportAsPdf();

	void setTempo(int tempoBpm);
};

#endif
