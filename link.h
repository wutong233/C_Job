typedef struct {
    char student_no[16];    // 学生学号
    char course_name[16];   // 课程名称
    float score;            // 这门课的成绩
} link_t;

extern void load_link();
extern void save_link();
extern void add_link();
extern void remove_link();
extern void list_link();
extern void query_student();
extern void query_course();

extern void remove_link_by_student(char *student_no);
extern void remove_link_by_course(char *course_name);

