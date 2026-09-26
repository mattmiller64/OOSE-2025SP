#ifndef NOTE_H
#define NOTE_H

class Note {

private:
	String noteId;
	String pitch;
	int octave;
	double startTime;
	double durationSeconds;

public:
	String getPitchInfo();

	double getDuration();
};

#endif
