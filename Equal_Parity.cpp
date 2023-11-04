#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int t;
    cin>>t;
    while(t--){
	int num,r,e;
	cin >> num; 
	   //Reading input from STDIN
	   int a[num];
	for(int i=0;i<num;i++){
		cin>>a[i];
	}
	for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(a[i]%2==0){
			e = a[i]/2;
			r = a[i+1]*2;
            }
        }
		
	}
	if(e%2==0 && r%2==0){
		cout<<"YES"<<'\n';
	}
	else{
		cout<<"NO"<<"\n";
	}
    }
	
}

concurrent processing is a computing model in which multiple processors execute instructions simultaneously for better performance. Concurrent means, which occurs when something else happens. The tasks are broken into subtypes, which are then assigned to different processors to perform simultaneously, sequentially instead, as they would have to be performed by one processor. Concurrent processing is sometimes synonymous with parallel processing. The term real and virtual concurrency in concurrent processing:

Multiprogramming Environment: In a multiprogramming environment, there are multiple tasks shared by one processor. While a virtual concept can be achieved by the operating system, if the processor is allocated for each individual task, the virtual concept is visible if each task has a dedicated processor. The multilayer environment is shown in figure. 
Multiprocessing Environment : In multiprocessing environment two or more processors are used with shared memory. Only one virtual address space is used, which is common for all processors. All tasks reside in shared memory. In this environment, concurrency is supported in the form of concurrently executing processors. The tasks executed on different processors are performed with each other through shared memory. The multiprocessing environment is shown in figure. 
Distributed Processing Environment : In a distributed processing environment, two or more computers are connected to each other by a communication network or high speed bus. There is no shared memory between the processors and each computer has its own local memory. Hence a distributed application consisting of concurrent tasks, which are distributed over network communication via messages. The distributed processing environment is shown in figure. 
Last Updated : 16 Jun, 2022

15

Similar Reads
Similar read thumbnail
Chain processes vs Fan of processes using fork() function in C
Similar read thumbnail
Operating System - Difference Between Distributed System and Parallel System
Similar read thumbnail
Parbegin/Parend Concurrent Statement
Similar read thumbnail
Concurrent Program with Precedence Graph
Similar read thumbnail
Design a concurrent server for handling multiple clients using fork()
Similar read thumbnail
User View Vs Hardware View Vs System View of Operating System
Similar read thumbnail
System Programs in Operating System
Similar read thumbnail
Xv6 Operating System -adding a new system call
Similar read thumbnail
Traps and System Calls in Operating System (OS)
Similar read thumbnail
Difference between System Software and Operating System
Previous
Create database in Cassandra
Next
Difference between Multiprogramming and Multitasking
Article Contributed By :
author
rajkumarupadhyay515
rajkumarupadhyay515
 Follow
Vote for difficulty
Easy
Normal
Medium
Hard
Expert
Improved By :
geeky01adarsh
Article Tags :
Distributed System