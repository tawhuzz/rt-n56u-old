
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_xml_sax_ext_Locator2Impl__
#define __org_xml_sax_ext_Locator2Impl__

#pragma interface

#include <org/xml/sax/helpers/LocatorImpl.h>
extern "Java"
{
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Locator;
        namespace ext
        {
            class Locator2Impl;
        }
      }
    }
  }
}

class org::xml::sax::ext::Locator2Impl : public ::org::xml::sax::helpers::LocatorImpl
{

public:
  Locator2Impl();
  Locator2Impl(::org::xml::sax::Locator *);
  virtual ::java::lang::String * getXMLVersion();
  virtual ::java::lang::String * getEncoding();
  virtual void setXMLVersion(::java::lang::String *);
  virtual void setEncoding(::java::lang::String *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::org::xml::sax::helpers::LocatorImpl)))) encoding;
  ::java::lang::String * version;
public:
  static ::java::lang::Class class$;
};

#endif // __org_xml_sax_ext_Locator2Impl__
