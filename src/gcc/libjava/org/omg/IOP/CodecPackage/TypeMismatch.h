
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_IOP_CodecPackage_TypeMismatch__
#define __org_omg_IOP_CodecPackage_TypeMismatch__

#pragma interface

#include <org/omg/CORBA/UserException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace IOP
      {
        namespace CodecPackage
        {
            class TypeMismatch;
        }
      }
    }
  }
}

class org::omg::IOP::CodecPackage::TypeMismatch : public ::org::omg::CORBA::UserException
{

public:
  TypeMismatch();
  TypeMismatch(::java::lang::String *);
private:
  static const jlong serialVersionUID = -3544092104480759035LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_IOP_CodecPackage_TypeMismatch__