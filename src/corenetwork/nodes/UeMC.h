/*
 * UeMC.h
 *
 *  Created on: Nov 30, 2017
 *      Author: sireeshapilaka
 */

#ifndef CORENETWORK_NODES_UEMC_H_
#define CORENETWORK_NODES_UEMC_H_

#include <Ue.h>
#include <UserAgentMC.h>

class UeMC: public Ue {
public:
    UeMC();
    virtual ~UeMC();
    int getDailybudget();
protected:
    virtual void initialize() override;

private:
    const int dayInSecs = 120;
    const int numOfDays = 10;
    int dailybudget = 10;

    vector<AppBWReq*> rpisPerDay;
    int numOfAuctions = 4;
    int* startTimes = new int[numOfAuctions];
    cRNG* epsilonRng;
};

#endif /* CORENETWORK_NODES_UEMC_H_ */
