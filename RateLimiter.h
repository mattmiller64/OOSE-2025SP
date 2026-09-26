#ifndef RATELIMITER_H
#define RATELIMITER_H

class RateLimiter {

private:
	String limiterId;
	int maxRequests;
	int windowSeconds;
	int usedTokens;

public:
	Boolean allowRequest(String userId);

	void resetWindow();
};

#endif
