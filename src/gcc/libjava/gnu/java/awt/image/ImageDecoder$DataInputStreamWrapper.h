
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_image_ImageDecoder$DataInputStreamWrapper__
#define __gnu_java_awt_image_ImageDecoder$DataInputStreamWrapper__

#pragma interface

#include <java/io/InputStream.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace image
        {
            class ImageDecoder$DataInputStreamWrapper;
        }
      }
    }
  }
}

class gnu::java::awt::image::ImageDecoder$DataInputStreamWrapper : public ::java::io::InputStream
{

public: // actually package-private
  ImageDecoder$DataInputStreamWrapper(::java::io::DataInput *);
public:
  virtual jint read();
private:
  ::java::io::DataInput * __attribute__((aligned(__alignof__( ::java::io::InputStream)))) datainput;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_image_ImageDecoder$DataInputStreamWrapper__
