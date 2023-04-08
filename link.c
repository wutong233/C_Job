#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "link.h"
#include "input.h"
#include "course.h"
#include "student.h"

#define MAX_LINK 1000
int link_count;
link_t link_array[MAX_LINK];

// + 读取文件 link.txt
// + 把成绩信息加载到 link_array
//   - 使用 fgets 读取第一行，并忽略
//   - 使用 fscanf 循环读取之后的数据行
void load_link()
{
}

// + 保存成绩信息 link_array
// + 写文件 link.txt
void save_link()
{
}

// + 读入学号
// + 读入课程名称
// + 读入该学生的这门课的成绩
void add_link()
{
}

void remove_link_at(int i)
{
}

// + 输入学生的学号
// + 输入课程的名称
// + 从 link_array 中删除该学生该门课的成绩
void remove_link()
{
}

// + 列出所有的学生信息
// + 按照 link.txt 的格式打印
void list_link()
{
}

// + remove_student 时，被调用
// + 需要从 link 中删除该学生相关的记录
void remove_link_by_student(char *student_no)
{
}

// + remove_course 时，被调用
// + 需要从 link 中删除该课程相关的记录
void remove_link_by_course(char *course_name)
{
}

// + 输入课程的名称
// + 打印输出该选修该课程的所有学生，包括成绩
// + 按照如下格式输出
//
//   name      score
//   zhangsan  70
//   lisi      85
//   wangwu    90
void query_course()
{
}

// + 输入学生的学号
// + 打印输出该学生选修的所有课程，包括成绩
// + 按照如下格式输出
//   - score 为百分制的成绩
//   - point 为绩点
//   - 假设
//     * math 这门课的绩点为 4.0
//     * 学生成绩为 90 分
//     * 学生的绩点为 90 / 100 * 4.0 = 3.6
//
//   course   score   point
//   math     90      3.6
//   chinese  50      2.0
void query_student()
{
}
