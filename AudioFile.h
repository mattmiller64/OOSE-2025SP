#ifndef AUDIOFILE_H
#define AUDIOFILE_H

class AudioFile {

private:
	String fileId;
	String fileName;
	String format;
	double durationSeconds;
	Date uploadedAt;

public:
	Boolean validateFormat();

	Boolean hasAtLeastOneNote();

	List<Voice> extractVoices();

	Boolean requestUploadPermission();
};

#endif
