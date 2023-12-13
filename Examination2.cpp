#include <iostream>
#include "Header1.h"


void launcher() {
	bool k = true;
    LIST list;
    int num;

    while (k == true)
    {
        cout << endl;
        cout << "\nTASKS LIST";
        cout << "\nEnter 0 if you want to leave";
        cout << "\nEnter 1 if you want to add task";
        cout << "\nEnter 2 if you want to show task";
        cout << "\nEnter 3 if you want to delete task";
        cout << "\nEnter 4 if you want to edit task";
        cout << "\nEnter 5 if you want to find task";
        cout << "\nEnter 6 if you want to display tasks";
        cout << endl;
        cin >> num;
        while (num < 0 || num > 6)
        {
            cin >> num;
        }
        if (num == 0)
        {
            k = false;
        }
        else if (num == 1)
        {
            list.add_task(list.list, list.count, list.m);
        }
        else if (num == 2)
        {
            list.show_list(list.list, list.count);
        }
        else if (num == 3)
        {
            list.delete_task(list.list, list.count);
        }
        else if (num == 4)
        {
            list.edit_task(list.list, list.count);
        }
        else if (num == 5)
        {
            list.search_by_criteria(list.list, list.count);
        }
        else if (num == 6)
        {
            list.display_tasks(list.list, list.count);
        }
    }



int main()
{
	launcher();
}