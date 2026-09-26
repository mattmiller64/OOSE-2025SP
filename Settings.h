#ifndef SETTINGS_H
#define SETTINGS_H

class Settings {

private:
	String settingsId;
	String theme;
	Boolean autoTranscribe;

public:
	void updateTheme(String theme);

	void applyDefaults();
};

#endif
