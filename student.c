#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "input.h"
#include "link.h"

#define MAX_STUDENT 100
int student_count;
student_t student_array[MAX_STUDENT];

// + 读取文件 student.txt
// + 把学生信息加载到 student_array
//   - 使用 fgets 读取第一行，并忽略
//   - 使用 fscanf 循环读取之后的数据行
void load_student()
{
	char temp[1000];
	int i = 0;
	FILE* student;
	student = fopen("student.txt", "r");
	fgets(temp, 100, student);
	while (!feof(student))
	{
		fscanf(student, "%s", temp);
		*student_array[i].no = *temp;
		fscanf(student, "%s", temp);
		*student_array[i].name = *temp;
		fscanf(student, "%s", temp);
		student_array[i].age = *temp;
		fscanf(student, "%s", temp);
		*student_array[i].gender = *temp;
	}
}

// + 保存学生信息 student_array
// + 写文件 student.txt
void save_student()
{
}

// + 输入学生的信息
// + 将学生加入到 student_array 中
void add_student()
{
}

// + 被 remove_student 调用
// + 删除 student_array 中第 i 个学生
void remove_student_at(int i)
{
}

// + 输入学生的学号
// + 从 student_array 中删除指定学号的学生
// + 特别需要注意的地方
//   * 删除学生时，需要同步删除该学生选修所有课程的成绩
//   * 需要修改 link_array
void remove_student()
{
}

// + 列出所有的学生信息
// + 按照 student.txt 的格式打印
void list_student()
{
}

// + 根据学号查找学生
student_t *find_student(char *student_no)
{
    return NULL;
}
