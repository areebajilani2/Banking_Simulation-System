## Banking Simulation System

A multithreaded **Banking Simulation System** implemented in **C++** using **POSIX threads**, **semaphores**, and **mutexes**, designed to demonstrate core **Operating System** concepts including **thread synchronization**, **concurrency**, **critical section management**, and **resource scheduling**.

This project was developed as part of the **Operating Systems** semester coursework and simulates a real-world banking transaction environment with multiple users performing operations concurrently.

## Features

* **Concurrent transaction processing** (deposits, withdrawals, transfers)
* **Thread-safe operations** using mutexes and semaphores
* **Dynamic user generation** and randomized task execution
* **Real-time account state updates**
* Command-line interface with detailed logs and thread identifiers
* Use of **POSIX Threads (pthreads)** to simulate concurrency
* Simulated **CPU scheduling**, **deadlock avoidance**, and **synchronization**

## Concepts Demonstrated

* **Multithreading** using pthreads
* **Semaphores & Mutexes** for synchronization
* **Race condition prevention**
* **Critical section handling**
* **Thread scheduling and prioritization**
* **Shared memory and resource management**

## Installation & Run
### Prerequisites

* C++11 or later
* GCC/G++ compiler
* Linux or WSL (POSIX-compliant environment)

## How It Works

1. The main thread spawns multiple **user threads**.
2. Each user randomly performs a **transaction** (deposit, withdraw, transfer).
3. **Mutexes** ensure exclusive access to shared resources (bank accounts).
4. **Semaphores** manage complex synchronization when needed.
5. The simulation continues until all threads complete their transactions.


## Developed By

**Khansa Waheed**
BS Information Technology – Operating Systems Project

