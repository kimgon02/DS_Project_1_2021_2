#pragma once
#include <cstring>
#include "AccountBSTNode.h"

class UserListNode
{
private:
	char* Name;
	int Age;

	UserListNode* pNext;
	AccountBSTNode* pHead;

public:
	UserListNode();
	~UserListNode();

	char* GetName();
	int GetAge();
	UserListNode* GetNext();

	AccountBSTNode* InsertAccount(AccountBSTNode* node);
	void SetName(char* name);
	void SetAge(int age);
	void SetNext(UserListNode* node);
	void Print_Accounts();
	void Delete_Account(char* id);
};