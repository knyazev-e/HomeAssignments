/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#ifndef WORKER_H
#define WORKER_H

#include "Transformer.h"

class Worker : public Transformer {
public:
    Worker(std::string _name, int _hp, Effect _effect, Weapon* _weapon, std::string _job, int _efficiency);
    Worker();

    ~Worker();

    void setJob(std::string _job);
    std::string getJob();

    void setEfficiency(int _efficiency);
    int getEfficiency();

    void work();

private:
    std::string job;
    int efficiency;
};

#endif
