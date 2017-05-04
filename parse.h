#ifndef _PARSE_H_
#define _PARSE_H_

#include "student.h"
#include "update.h"
#include "select.h"
#include "insrt.h"
#include "del.h"
#include <stdexcept>

class parse {
public:
    parse(int fd);

    void choice(const char *str);

    void selectfunction(Select S);

    void selectallfunction(Select s);

    void InsertFunction(insrt ins);

    void DeleteFunction(del del_, int flag);

    void DeleteAllFunction();

    void UpdateFunction(Update up_, int status);

    void SaveFunction();

    int GetType() const;

    size_t GetTotal() const;

    std::vector <size_t> GetResponse();

    std::vector <student> all;

private:
    int fd_;
    int status_response;
    size_t _total = 0;
    std::vector <size_t> res;
};

#endif
