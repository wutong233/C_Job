typedef struct {
    char no[16];            // 学号
    char name[16];          // 姓名
    int  age;               // 年龄
    char gender[16];        // 性别
} student_t;

extern void load_student();
extern void save_student();
extern void add_student();
extern void remove_student();
extern void list_student();
extern student_t *find_student(char *student_no);
