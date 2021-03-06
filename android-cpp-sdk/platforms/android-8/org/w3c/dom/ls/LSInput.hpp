/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.ls.LSInput
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSINPUT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_LS_LSINPUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom { namespace ls {

	class LSInput;
	class LSInput
		: public object<LSInput>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)

		explicit LSInput(jobject jobj)
		: object<LSInput>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::io::Reader > getCharacterStream();
		void setCharacterStream(local_ref< java::io::Reader >  const&);
		local_ref< java::io::InputStream > getByteStream();
		void setByteStream(local_ref< java::io::InputStream >  const&);
		local_ref< java::lang::String > getStringData();
		void setStringData(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSystemId();
		void setSystemId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getPublicId();
		void setPublicId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getBaseURI();
		void setBaseURI(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getEncoding();
		void setEncoding(local_ref< java::lang::String >  const&);
		jboolean getCertifiedText();
		void setCertifiedText(jboolean);
	}; //class LSInput

} //namespace ls
} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSINPUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSINPUT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_LS_LSINPUT_HPP_IMPL

namespace j2cpp {



org::w3c::dom::ls::LSInput::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::io::Reader > org::w3c::dom::ls::LSInput::getCharacterStream()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(0),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::io::Reader >
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setCharacterStream(local_ref< java::io::Reader > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(1),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

local_ref< java::io::InputStream > org::w3c::dom::ls::LSInput::getByteStream()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(2),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setByteStream(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(3),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::ls::LSInput::getStringData()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(4),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setStringData(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(5),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::ls::LSInput::getSystemId()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(6),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setSystemId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(7),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::ls::LSInput::getPublicId()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(8),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setPublicId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(9),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::ls::LSInput::getBaseURI()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(10),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setBaseURI(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(11),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::ls::LSInput::getEncoding()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(12),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setEncoding(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(13),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

jboolean org::w3c::dom::ls::LSInput::getCertifiedText()
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(14),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}

void org::w3c::dom::ls::LSInput::setCertifiedText(jboolean a0)
{
	return call_method<
		org::w3c::dom::ls::LSInput::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_NAME(15),
		org::w3c::dom::ls::LSInput::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::ls::LSInput,"org/w3c/dom/ls/LSInput")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,0,"getCharacterStream","()Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,1,"setCharacterStream","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,2,"getByteStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,3,"setByteStream","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,4,"getStringData","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,5,"setStringData","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,6,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,7,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,8,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,9,"setPublicId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,10,"getBaseURI","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,11,"setBaseURI","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,12,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,13,"setEncoding","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,14,"getCertifiedText","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSInput,15,"setCertifiedText","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSINPUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
