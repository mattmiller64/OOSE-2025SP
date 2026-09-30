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
	Note(String id, String pitch, int octave, double startTime, double durationSeconds)
    : noteId(id), pitch(pitch), octave(octave), startTime(startTime), durationSeconds(durationSeconds) {}
	String getPitchInfo();

	double getDuration();
};

#endif
