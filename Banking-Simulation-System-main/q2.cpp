#include <iostream>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
using namespace std;

int sharedValue = 0;
pthread_mutex_t mutex; // Declare mutex and semaphore
sem_t sem;
void* simpleThread(void* arg) { // Wait (P operation) on semaphore
    sem_wait(&sem);
    pthread_mutex_lock(&mutex);//Lock mutex before accessing sharedValue
  // Critical section
    cout << "Thread is running..." << endl;
    sharedValue++;
    cout << "Shared value: " << sharedValue << endl;
    pthread_mutex_unlock(&mutex);    // Unlock mutex
    sem_post(&sem);     // Post (V operation) to semaphore
    return NULL;
}
int main() {
    pthread_t t1;
    // Initialize mutex and semaphore
    pthread_mutex_init(&mutex, NULL);
    sem_init(&sem, 0, 1); // 1 means one thread can enter
    pthread_create(&t1, NULL, simpleThread, NULL);
    pthread_join(t1, NULL);
    pthread_mutex_destroy(&mutex);  // Clean up
    sem_destroy(&sem);
    cout << "Main ends. Final shared value: " << sharedValue << endl;
    return 0;
}
