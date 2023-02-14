
#define MAXNAMELEN 31
typedef struct {
char name[1+MAXNAMELEN];
int id;
} Record;



static int searchFor(int id, int numRecords, Record *records);