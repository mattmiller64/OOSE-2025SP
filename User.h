#ifndef USER_H
#define USER_H

class User {

private:
	String userId;
	String username;
	String email;
	String passwordHash;

public:
	Boolean login(String username, String password);

	void logout();

	AudioFile uploadAudio(File file);

	MusicSheet createMusicSheet();
};

#endif
