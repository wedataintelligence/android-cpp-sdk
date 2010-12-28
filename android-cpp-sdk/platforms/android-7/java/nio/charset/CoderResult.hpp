/*================================================================================
  code generated by: java2cpp
  class: java.nio.charset.CoderResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CODERRESULT_HPP_DECL
#define J2CPP_JAVA_NIO_CHARSET_CODERRESULT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace charset {

	class CoderResult;
	class CoderResult
		: public cpp_object<CoderResult>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit CoderResult(jobject jobj)
		: cpp_object<CoderResult>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::nio::charset::CoderResult > malformedForLength(cpp_int const&);
		static local_ref< java::nio::charset::CoderResult > unmappableForLength(cpp_int const&);
		cpp_boolean isUnderflow();
		cpp_boolean isError();
		cpp_boolean isMalformed();
		cpp_boolean isOverflow();
		cpp_boolean isUnmappable();
		cpp_int length();
		void throwException();
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::nio::charset::CoderResult > > UNDERFLOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::nio::charset::CoderResult > > OVERFLOW;
	}; //class CoderResult

} //namespace charset
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CODERRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CODERRESULT_HPP_IMPL
#define J2CPP_JAVA_NIO_CHARSET_CODERRESULT_HPP_IMPL

namespace j2cpp {



java::nio::charset::CoderResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


local_ref< java::nio::charset::CoderResult > java::nio::charset::CoderResult::malformedForLength(cpp_int const &a0)
{
	return local_ref< java::nio::charset::CoderResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::charset::CoderResult > java::nio::charset::CoderResult::unmappableForLength(cpp_int const &a0)
{
	return local_ref< java::nio::charset::CoderResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::charset::CoderResult::isUnderflow()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::nio::charset::CoderResult::isError()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::nio::charset::CoderResult::isMalformed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::nio::charset::CoderResult::isOverflow()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::nio::charset::CoderResult::isUnmappable()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::nio::charset::CoderResult::length()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::nio::charset::CoderResult::throwException()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > java::nio::charset::CoderResult::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}



static_field<
	java::nio::charset::CoderResult::J2CPP_CLASS_NAME,
	java::nio::charset::CoderResult::J2CPP_FIELD_NAME(0),
	java::nio::charset::CoderResult::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::nio::charset::CoderResult >
> java::nio::charset::CoderResult::UNDERFLOW;

static_field<
	java::nio::charset::CoderResult::J2CPP_CLASS_NAME,
	java::nio::charset::CoderResult::J2CPP_FIELD_NAME(1),
	java::nio::charset::CoderResult::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::nio::charset::CoderResult >
> java::nio::charset::CoderResult::OVERFLOW;


J2CPP_DEFINE_CLASS(java::nio::charset::CoderResult,"java/nio/charset/CoderResult")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,1,"malformedForLength","(I)Ljava/nio/charset/CoderResult;")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,2,"unmappableForLength","(I)Ljava/nio/charset/CoderResult;")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,3,"isUnderflow","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,4,"isError","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,5,"isMalformed","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,6,"isOverflow","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,7,"isUnmappable","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,8,"length","()I")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,9,"throwException","()V")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,10,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::CoderResult,11,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::nio::charset::CoderResult,0,"UNDERFLOW","Ljava/nio/charset/CoderResult;")
J2CPP_DEFINE_FIELD(java::nio::charset::CoderResult,1,"OVERFLOW","Ljava/nio/charset/CoderResult;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CODERRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION