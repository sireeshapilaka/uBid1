/*
 * StateActionPair.h
 *
 *  Created on: Dec 1, 2017
 *      Author: sireeshapilaka
 */

#ifndef DAO_STATEACTIONPAIR_H_
#define DAO_STATEACTIONPAIR_H_

#include <State.h>

class StateActionPair {
private:
    State* state;
    int bid; // action
public:
    StateActionPair(State* state, int bid);
    virtual ~StateActionPair();
    bool isState(State* s);
    int getAction();
    bool isEqual(StateActionPair* s);
};

#endif /* DAO_STATEACTIONPAIR_H_ */
