//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/mqttapp/fognetMessages/FognetMsgAdvertiseMIPS.msg.
//

#ifndef _INET_FOGNETMSGADVERTISEMIPS_M_H_
#define _INET_FOGNETMSGADVERTISEMIPS_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

// cplusplus {{
        #include "inet/common/INETDefs.h"
        
// }}

/**
 * Class generated from <tt>inet/applications/mqttapp/fognetMessages/FognetMsgAdvertiseMIPS.msg:22</tt> by nedtool.
 * <pre>
 * packet FognetMsgAdvertiseMIPS
 * {
 *     int MIPS;
 *     string computeBrokerID;
 *     double busyTime;
 * 
 * }
 * </pre>
 */
class FognetMsgAdvertiseMIPS : public ::cPacket
{
  protected:
    int MIPS_var;
    opp_string computeBrokerID_var;
    double busyTime_var;

  private:
    void copy(const FognetMsgAdvertiseMIPS& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const FognetMsgAdvertiseMIPS&);

  public:
    FognetMsgAdvertiseMIPS(const char *name=NULL, int kind=0);
    FognetMsgAdvertiseMIPS(const FognetMsgAdvertiseMIPS& other);
    virtual ~FognetMsgAdvertiseMIPS();
    FognetMsgAdvertiseMIPS& operator=(const FognetMsgAdvertiseMIPS& other);
    virtual FognetMsgAdvertiseMIPS *dup() const {return new FognetMsgAdvertiseMIPS(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getMIPS() const;
    virtual void setMIPS(int MIPS);
    virtual const char * getComputeBrokerID() const;
    virtual void setComputeBrokerID(const char * computeBrokerID);
    virtual double getBusyTime() const;
    virtual void setBusyTime(double busyTime);
};

inline void doPacking(cCommBuffer *b, FognetMsgAdvertiseMIPS& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, FognetMsgAdvertiseMIPS& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_FOGNETMSGADVERTISEMIPS_M_H_

