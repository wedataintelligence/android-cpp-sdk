/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.IncompatibleClassChangeError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_HPP_DECL
#define J2CPP_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class LinkageError; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/LinkageError.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class IncompatibleClassChangeError;
	class IncompatibleClassChangeError
		: public object<IncompatibleClassChangeError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit IncompatibleClassChangeError(jobject jobj)
		: object<IncompatibleClassChangeError>(jobj)
		{
		}

		operator local_ref<java::lang::LinkageError>() const;


		IncompatibleClassChangeError();
		IncompatibleClassChangeError(local_ref< java::lang::String > const&);
	}; //class IncompatibleClassChangeError

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_HPP_IMPL

namespace j2cpp {



java::lang::IncompatibleClassChangeError::operator local_ref<java::lang::LinkageError>() const
{
	return local_ref<java::lang::LinkageError>(get_jobject());
}


java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError()
: object<java::lang::IncompatibleClassChangeError>(
	call_new_object<
		java::lang::IncompatibleClassChangeError::J2CPP_CLASS_NAME,
		java::lang::IncompatibleClassChangeError::J2CPP_METHOD_NAME(0),
		java::lang::IncompatibleClassChangeError::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError(local_ref< java::lang::String > const &a0)
: object<java::lang::IncompatibleClassChangeError>(
	call_new_object<
		java::lang::IncompatibleClassChangeError::J2CPP_CLASS_NAME,
		java::lang::IncompatibleClassChangeError::J2CPP_METHOD_NAME(1),
		java::lang::IncompatibleClassChangeError::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::IncompatibleClassChangeError,"java/lang/IncompatibleClassChangeError")
J2CPP_DEFINE_METHOD(java::lang::IncompatibleClassChangeError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::IncompatibleClassChangeError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION