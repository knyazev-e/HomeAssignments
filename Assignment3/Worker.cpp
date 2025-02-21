/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Worker.h"

Worker::Worker(std::string _name, int _hp, Effect _effect, Weapon* _weapon, std::string _job, int _efficiency):
    Transformer(_name, _hp, _effect, _weapon), job(_job), efficiency(_efficiency) {}

Worker::~Worker() {}

void Worker::setJob(std::string _job) {
    job = _job;
}

std::string Worker::getJob() {
    return job;
}

void Worker::setEfficiency(int _efficiency) {
    efficiency = _efficiency;
}

int Worker::getEfficiency() {
    return efficiency;
}

void Worker::work() {}
