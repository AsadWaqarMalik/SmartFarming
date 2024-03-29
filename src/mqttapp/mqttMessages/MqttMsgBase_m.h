//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/mqttapp/mqttMessages/MqttMsgBase.msg.
//

#ifndef _INET_MQTTMSGBASE_M_H_
#define _INET_MQTTMSGBASE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

/**
 * Class generated from <tt>inet/applications/mqttapp/mqttMessages/MqttMsgBase.msg:21</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet MqttMsgBase
 * {
 *     @customize(true);  // see the generated C++ header for more info
 *     //base members
 *     // message type
 *     abstract string type;
 *     // duplicate delivery
 *     abstract bool dupFlag;
 *     // quality of service level
 *     abstract int qosLevel;
 *     // retain flag
 *     abstract bool retain;
 *     // message identifier
 *     abstract string messageId;
 * }
 * </pre>
 *
 * MqttMsgBase_Base is only useful if it gets subclassed, and MqttMsgBase is derived from it.
 * The minimum code to be written for MqttMsgBase is the following:
 *
 * <pre>
 * class MqttMsgBase : public MqttMsgBase_Base
 * {
 *   private:
 *     void copy(const MqttMsgBase& other) { ... }

 *   public:
 *     MqttMsgBase(const char *name=NULL, int kind=0) : MqttMsgBase_Base(name,kind) {}
 *     MqttMsgBase(const MqttMsgBase& other) : MqttMsgBase_Base(other) {copy(other);}
 *     MqttMsgBase& operator=(const MqttMsgBase& other) {if (this==&other) return *this; MqttMsgBase_Base::operator=(other); copy(other); return *this;}
 *     virtual MqttMsgBase *dup() const {return new MqttMsgBase(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from MqttMsgBase_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(MqttMsgBase);
 * </pre>
 */
class MqttMsgBase_Base : public ::cPacket
{
  protected:

  private:
    void copy(const MqttMsgBase_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MqttMsgBase_Base&);
    // make constructors protected to avoid instantiation
    MqttMsgBase_Base(const char *name=NULL, int kind=0);
    MqttMsgBase_Base(const MqttMsgBase_Base& other);
    // make assignment operator protected to force the user override it
    MqttMsgBase_Base& operator=(const MqttMsgBase_Base& other);

  public:
    virtual ~MqttMsgBase_Base();
    virtual MqttMsgBase_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class MqttMsgBase");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getType() const = 0;
    virtual void setType(const char * type) = 0;
    virtual bool getDupFlag() const = 0;
    virtual void setDupFlag(bool dupFlag) = 0;
    virtual int getQosLevel() const = 0;
    virtual void setQosLevel(int qosLevel) = 0;
    virtual bool getRetain() const = 0;
    virtual void setRetain(bool retain) = 0;
    virtual const char * getMessageId() const = 0;
    virtual void setMessageId(const char * messageId) = 0;
};

} // namespace inet

#endif // ifndef _INET_MQTTMSGBASE_M_H_

