
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_swing_SwingListPeer__
#define __gnu_java_awt_peer_swing_SwingListPeer__

#pragma interface

#include <gnu/java/awt/peer/swing/SwingComponentPeer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace swing
          {
              class SwingListPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Dimension;
        class Graphics;
        class List;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class DefaultListModel;
        class JList;
    }
  }
}

class gnu::java::awt::peer::swing::SwingListPeer : public ::gnu::java::awt::peer::swing::SwingComponentPeer
{

public:
  SwingListPeer(::java::awt::List *);
  virtual void add(::java::lang::String *, jint);
  virtual void addItem(::java::lang::String *, jint);
  virtual void clear();
  virtual void delItems(jint, jint);
  virtual void deselect(jint);
  virtual ::java::awt::Dimension * getMinimumSize(jint);
  virtual ::java::awt::Dimension * getPreferredSize(jint);
  virtual JArray< jint > * getSelectedIndexes();
  virtual void makeVisible(jint);
  virtual ::java::awt::Dimension * minimumSize(jint);
  virtual ::java::awt::Dimension * preferredSize(jint);
  virtual void removeAll();
  virtual void select(jint);
  virtual void setMultipleMode(jboolean);
  virtual void setMultipleSelections(jboolean);
  virtual void reshape(jint, jint, jint, jint);
public: // actually protected
  virtual void peerPaint(::java::awt::Graphics *, jboolean);
private:
  ::javax::swing::JList * __attribute__((aligned(__alignof__( ::gnu::java::awt::peer::swing::SwingComponentPeer)))) jList;
  ::javax::swing::DefaultListModel * listModel;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_swing_SwingListPeer__
