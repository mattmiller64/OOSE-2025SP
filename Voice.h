#ifndef VOICE_H
#define VOICE_H

class Voice {

private:
	String voiceId;
	String partName;
	String pitchRange;

public:
	Note detectNote();

	List<Lyrics> detectLyrics();

	String getPitchRange();
};

#endif
