//Function Prototypes 

int add(int, int, int * );
int subtract(int, int, int *);
int multiply(int, int, int *);
int divide(int, int, int *);
int modulo(int, int, int *);
int doOperation(int (*)(), int , int , int*);
int getInput(int*, int*, int*);
void* selectOperation(int);

/* enum which defines operation types

OPERATION_ADD           = 0
OPERATION_SUBSTRACT     = 1
OPERATION_MULTIPLY      = 2
OPERATION_DIVIDE        = 3
OPERATION_MODULO        = 4
MAX                     = 5
*/

enum operation{ADD, SUBTRACT, MULTIPLY, DIVIDE, MODULO, MAX };

