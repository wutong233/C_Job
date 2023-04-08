#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "input.h"
#include "link.h"

#define MAX_COURSE  10
int course_count;
course_t course_array[MAX_COURSE];

// + 读取文件 course.txt
// + 把课程信息加载到 course_array
//   - 使用 fgets 读取第一行，并忽略
//   - 使用 fscanf 循环读取之后的数据行
void load_course()
{
}

// + 保存课程信息 course_array
// + 写文件 course.txt
void save_course()
{
}

// + 输入课程的信息
// + 将课程加入到 course_array 中
void add_course()
{
}

// + 被 remove_student 调用
// + 删除 student_array 中第 i 个学生
void remove_course_at(int i)
{
}

// + 输入课程的名称
// + 从 course_array 中删除指定名称的课程
// + 特别需要注意的地方
//   * 删除课程时，需要同步删除选修该课程的学生的成绩
//   * 需要修改 link_array
void remove_course()
{
}

// + 列出所有的课程信息
// + 按照 course.txt 的格式打印
void list_course()
{
}

// + 根据课程名查找课程
course_t *find_course(char *course_name)
{
    return NULL;
}
