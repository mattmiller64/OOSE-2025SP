#ifndef USERPROFILE_H
#define USERPROFILE_H

class UserProfile {

private:
	String profiled;
	String displayName;
	String vocalRange;
	String avatarUrl;

public:
	void updateProfile(String name);

	String getDisplayName();
};

#endif
