#ifndef MUTEX_HPP
#define MUTEX_HPP

#include <pthread.h>

class Mutex {
private:
	pthread_mutex_t _mutex;
public:
	Mutex();
	~Mutex();
	void lock();
	void unlock();
};

#endif /* MUTEX_HPP */
