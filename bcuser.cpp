#include "bcuser.h"
#include <string>
#include <iostream>

using namespace std;

BCUser::BCUser(): User("", 0, 0, 0), dist(-1), num_sp(0), delta(0.0), bc(0.0) {
	preds = new MyList<int>;
};

BCUser::~BCUser() {
	User::clearFriends();
};
