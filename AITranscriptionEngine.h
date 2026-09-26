#ifndef AITRANSCRIPTIONENGINE_H
#define AITRANSCRIPTIONENGINE_H

class AITranscriptionEngine {

private:
	String modelVersion;
	double confidenceThreshold;

public:
	List<Note> transcribePitch(AudioFile audio);

	List<Lyrics> transcribeLyrics(AudioFile audio);

	List<String> suggestCorrections(MusicSheet sheet);
};

#endif
