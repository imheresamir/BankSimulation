/*
Program Description: Write a detailed description of WHAT this program does from a user's perspective.
It's extremely imortant that you can provide a detailed and relevant description in this space.

Written By: FirstName LastName

Date Submitted: mm/dd/yyyy

IDE Used: Xcode / Visual Studio Express 2013 / Code::Blocks / ...
*/
// All include statements starting from here
#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;

// Main function
int main() {
	StateProxyClient proxy(
      grpc::CreateChannel("localhost:50051", grpc::InsecureCredentials(),
                          ChannelArguments()));

	// Simulate a bank with 3 tellers and events from the input file
	Bank b("test.txt", 3, false, &proxy);

    //Bank b("test.txt", 3, true, true);
	
	b.simulate();

	return 0;
}

// All function definitions starting from here

/*
Copy program interaction between user and the program here.
*/
