/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.FilterOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILTEROUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_FILTEROUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FilterOutputStream;
	class FilterOutputStream
		: public object<FilterOutputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)

		explicit FilterOutputStream(jobject jobj)
		: object<FilterOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::OutputStream>() const;
		operator local_ref<java::lang::Object>() const;


		FilterOutputStream(local_ref< java::io::OutputStream > const&);
		void close();
		void flush();
		void write(local_ref< array<jbyte,1> >  const&);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(jint);

	}; //class FilterOutputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILTEROUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILTEROUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_FILTEROUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::FilterOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::FilterOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::FilterOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

java::io::FilterOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::io::FilterOutputStream::FilterOutputStream(local_ref< java::io::OutputStream > const &a0)
: object<java::io::FilterOutputStream>(
	call_new_object<
		java::io::FilterOutputStream::J2CPP_CLASS_NAME,
		java::io::FilterOutputStream::J2CPP_METHOD_NAME(0),
		java::io::FilterOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void java::io::FilterOutputStream::close()
{
	return call_method<
		java::io::FilterOutputStream::J2CPP_CLASS_NAME,
		java::io::FilterOutputStream::J2CPP_METHOD_NAME(1),
		java::io::FilterOutputStream::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void java::io::FilterOutputStream::flush()
{
	return call_method<
		java::io::FilterOutputStream::J2CPP_CLASS_NAME,
		java::io::FilterOutputStream::J2CPP_METHOD_NAME(2),
		java::io::FilterOutputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::FilterOutputStream::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::FilterOutputStream::J2CPP_CLASS_NAME,
		java::io::FilterOutputStream::J2CPP_METHOD_NAME(3),
		java::io::FilterOutputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void java::io::FilterOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::FilterOutputStream::J2CPP_CLASS_NAME,
		java::io::FilterOutputStream::J2CPP_METHOD_NAME(4),
		java::io::FilterOutputStream::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::FilterOutputStream::write(jint a0)
{
	return call_method<
		java::io::FilterOutputStream::J2CPP_CLASS_NAME,
		java::io::FilterOutputStream::J2CPP_METHOD_NAME(5),
		java::io::FilterOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(java::io::FilterOutputStream,"java/io/FilterOutputStream")
J2CPP_DEFINE_METHOD(java::io::FilterOutputStream,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::FilterOutputStream,1,"close","()V")
J2CPP_DEFINE_METHOD(java::io::FilterOutputStream,2,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::FilterOutputStream,3,"write","([B)V")
J2CPP_DEFINE_METHOD(java::io::FilterOutputStream,4,"write","([BII)V")
J2CPP_DEFINE_METHOD(java::io::FilterOutputStream,5,"write","(I)V")
J2CPP_DEFINE_FIELD(java::io::FilterOutputStream,0,"out","Ljava/io/OutputStream;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILTEROUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
