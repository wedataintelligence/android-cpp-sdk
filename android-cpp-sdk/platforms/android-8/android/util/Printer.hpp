/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.Printer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PRINTER_HPP_DECL
#define J2CPP_ANDROID_UTIL_PRINTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class Printer;
	class Printer
		: public object<Printer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Printer(jobject jobj)
		: object<Printer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void println(local_ref< java::lang::String >  const&);
	}; //class Printer

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PRINTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PRINTER_HPP_IMPL
#define J2CPP_ANDROID_UTIL_PRINTER_HPP_IMPL

namespace j2cpp {



android::util::Printer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::util::Printer::println(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::util::Printer::J2CPP_CLASS_NAME,
		android::util::Printer::J2CPP_METHOD_NAME(0),
		android::util::Printer::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::util::Printer,"android/util/Printer")
J2CPP_DEFINE_METHOD(android::util::Printer,0,"println","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PRINTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
