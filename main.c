#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "student.h"
#include "course.h"
#include "link.h"

// + 打印功能菜单
void print_menu()
{
	printf("1. add student\n2. remove student\n3. list student\n4. add course\n5. remove course\n6. list course\n7. add link\n8. remove link\n9. list link\nA. query student\nB. query course\nC. quit\n");
}

// + 退出程序时，调用
void quit()
{
    save_student();
    save_course();
    save_link();
    exit(0);
}

void do_command()
	{
    char choice;
    input_char("Choice:", &choice);
	switch (choice)
	{
	case '1':
		add_student();
	case '2':
		remove_student();
	case '3':
		list_student();
	case '4':
		add_course();
	case '5':
		remove_course();
	case '6':
		list_course();
	case '7':
		add_link();
	case '8':
		remove_link();
	case '9':
		list_link();
	case 'A':
		// wait
	case 'B':
		// wait
	case 'C':
		quit();
	}
    // + 使用 switch 语句
    // + 根据 choice 执行相应的命令
    
    printf("\n");
	}

int main()
{
    load_student();
    load_course();
    load_link();

    while (1) {
        print_menu();
        do_command();
    }
}
