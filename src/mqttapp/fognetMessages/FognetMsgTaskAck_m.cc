//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/mqttapp/fognetMessages/FognetMsgTaskAck.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "FognetMsgTaskAck_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}



namespace inet {

// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(FognetMsgTaskAck);

FognetMsgTaskAck::FognetMsgTaskAck(const char *name, int kind) : ::cPacket(name,kind)
{
    this->requestID_var = 0;
    this->status_var = 0;
}

FognetMsgTaskAck::FognetMsgTaskAck(const FognetMsgTaskAck& other) : ::cPacket(other)
{
    copy(other);
}

FognetMsgTaskAck::~FognetMsgTaskAck()
{
}

FognetMsgTaskAck& FognetMsgTaskAck::operator=(const FognetMsgTaskAck& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void FognetMsgTaskAck::copy(const FognetMsgTaskAck& other)
{
    this->requestID_var = other.requestID_var;
    this->status_var = other.status_var;
}

void FognetMsgTaskAck::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->requestID_var);
    doPacking(b,this->status_var);
}

void FognetMsgTaskAck::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->requestID_var);
    doUnpacking(b,this->status_var);
}

const char * FognetMsgTaskAck::getRequestID() const
{
    return requestID_var.c_str();
}

void FognetMsgTaskAck::setRequestID(const char * requestID)
{
    this->requestID_var = requestID;
}

int FognetMsgTaskAck::getStatus() const
{
    return status_var;
}

void FognetMsgTaskAck::setStatus(int status)
{
    this->status_var = status;
}

class FognetMsgTaskAckDescriptor : public cClassDescriptor
{
  public:
    FognetMsgTaskAckDescriptor();
    virtual ~FognetMsgTaskAckDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(FognetMsgTaskAckDescriptor);

FognetMsgTaskAckDescriptor::FognetMsgTaskAckDescriptor() : cClassDescriptor("inet::FognetMsgTaskAck", "cPacket")
{
}

FognetMsgTaskAckDescriptor::~FognetMsgTaskAckDescriptor()
{
}

bool FognetMsgTaskAckDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FognetMsgTaskAck *>(obj)!=NULL;
}

const char *FognetMsgTaskAckDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FognetMsgTaskAckDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int FognetMsgTaskAckDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *FognetMsgTaskAckDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "requestID",
        "status",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int FognetMsgTaskAckDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "requestID")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *FognetMsgTaskAckDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *FognetMsgTaskAckDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int FognetMsgTaskAckDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FognetMsgTaskAck *pp = (FognetMsgTaskAck *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string FognetMsgTaskAckDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    FognetMsgTaskAck *pp = (FognetMsgTaskAck *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getRequestID());
        case 1: return long2string(pp->getStatus());
        default: return "";
    }
}

bool FognetMsgTaskAckDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FognetMsgTaskAck *pp = (FognetMsgTaskAck *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequestID((value)); return true;
        case 1: pp->setStatus(string2long(value)); return true;
        default: return false;
    }
}

const char *FognetMsgTaskAckDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *FognetMsgTaskAckDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FognetMsgTaskAck *pp = (FognetMsgTaskAck *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inet

