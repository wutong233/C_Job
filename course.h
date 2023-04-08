typedef struct {
    char name[16];          // 名称
    float point;            // 绩点
} course_t;

extern void load_course();
extern void save_course();
extern void add_course();
extern void remove_course();
extern void list_course();
extern course_t *find_course(char *course_name);
