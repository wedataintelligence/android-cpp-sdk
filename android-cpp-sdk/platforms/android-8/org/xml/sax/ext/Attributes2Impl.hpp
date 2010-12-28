/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.ext.Attributes2Impl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { class Attributes; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/xml/sax/Attributes.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class Attributes2Impl;
	class Attributes2Impl
		: public cpp_object<Attributes2Impl>
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
		J2CPP_DECLARE_METHOD(12)

		Attributes2Impl(jobject jobj)
		: cpp_object<Attributes2Impl>(jobj)
		{
		}

		cpp_boolean isDeclared(cpp_int const&);
		cpp_boolean isDeclared(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_boolean isDeclared(local_ref< java::lang::String > const&);
		cpp_boolean isSpecified(cpp_int const&);
		cpp_boolean isSpecified(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_boolean isSpecified(local_ref< java::lang::String > const&);
		void setAttributes(local_ref< org::xml::sax::Attributes > const&);
		void addAttribute(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void removeAttribute(cpp_int const&);
		void setDeclared(cpp_int const&, cpp_boolean const&);
		void setSpecified(cpp_int const&, cpp_boolean const&);
	}; //class Attributes2Impl

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::xml::sax::ext::Attributes2Impl > create< org::xml::sax::ext::Attributes2Impl>()
{
	return local_ref< org::xml::sax::ext::Attributes2Impl >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME, org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(0), org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::xml::sax::ext::Attributes2Impl > create< org::xml::sax::ext::Attributes2Impl>(local_ref< org::xml::sax::Attributes > const &a0)
{
	return local_ref< org::xml::sax::ext::Attributes2Impl >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME, org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(1), org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::xml::sax::ext::Attributes2Impl::isDeclared(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::xml::sax::ext::Attributes2Impl::isDeclared(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::xml::sax::ext::Attributes2Impl::isDeclared(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::xml::sax::ext::Attributes2Impl::isSpecified(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::xml::sax::ext::Attributes2Impl::isSpecified(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::xml::sax::ext::Attributes2Impl::isSpecified(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ext::Attributes2Impl::setAttributes(local_ref< org::xml::sax::Attributes > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ext::Attributes2Impl::addAttribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void org::xml::sax::ext::Attributes2Impl::removeAttribute(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ext::Attributes2Impl::setDeclared(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::xml::sax::ext::Attributes2Impl::setSpecified(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::Attributes2Impl,"org/xml/sax/ext/Attributes2Impl")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,1,"<init>","(Lorg/xml/sax/Attributes;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,2,"isDeclared","(I)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,3,"isDeclared","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,4,"isDeclared","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,5,"isSpecified","(I)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,6,"isSpecified","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,7,"isSpecified","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,8,"setAttributes","(Lorg/xml/sax/Attributes;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,9,"addAttribute","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,10,"removeAttribute","(I)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,11,"setDeclared","(IZ)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,12,"setSpecified","(IZ)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION