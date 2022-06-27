#ifndef STRUCTS_H
#define STRUCTS_H


struct login {
	char userName[20+1];
	char userPwd[20+1];
};
struct datos{
    char nombre[16];
    char apellido[16];
    char dni[8+1];
    short edad;
    struct login user;
};


#endif // STRUCTS_H
