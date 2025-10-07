#pragma once

#include <iostream>
#include "clsUser.h"

clsUser CurrentUser = clsUser::Find("", "");

const char* Users_File_Path = "Users.txt";
const char* Clients_File_Path = "Clients.txt";
const char* TransfersLog_File_Path = "TransfersLog.txt";
const char* Currencies_File_Path = "Currencies.txt";