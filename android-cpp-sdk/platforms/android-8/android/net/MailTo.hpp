/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.MailTo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_MAILTO_HPP_DECL
#define J2CPP_ANDROID_NET_MAILTO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace net {

	class MailTo;
	class MailTo
		: public object<MailTo>
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
		J2CPP_DECLARE_FIELD(0)

		explicit MailTo(jobject jobj)
		: object<MailTo>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jboolean isMailTo(local_ref< java::lang::String >  const&);
		static local_ref< android::net::MailTo > parse(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getTo();
		local_ref< java::lang::String > getCc();
		local_ref< java::lang::String > getSubject();
		local_ref< java::lang::String > getBody();
		local_ref< java::util::Map > getHeaders();
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > MAILTO_SCHEME;
	}; //class MailTo

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_MAILTO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_MAILTO_HPP_IMPL
#define J2CPP_ANDROID_NET_MAILTO_HPP_IMPL

namespace j2cpp {



android::net::MailTo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jboolean android::net::MailTo::isMailTo(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(1),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(a0);
}

local_ref< android::net::MailTo > android::net::MailTo::parse(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(2),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::net::MailTo >
	>(a0);
}

local_ref< java::lang::String > android::net::MailTo::getTo()
{
	return call_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(3),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::MailTo::getCc()
{
	return call_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(4),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::MailTo::getSubject()
{
	return call_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(5),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::MailTo::getBody()
{
	return call_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(6),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::util::Map > android::net::MailTo::getHeaders()
{
	return call_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(7),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::Map >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::MailTo::toString()
{
	return call_method<
		android::net::MailTo::J2CPP_CLASS_NAME,
		android::net::MailTo::J2CPP_METHOD_NAME(8),
		android::net::MailTo::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}


static_field<
	android::net::MailTo::J2CPP_CLASS_NAME,
	android::net::MailTo::J2CPP_FIELD_NAME(0),
	android::net::MailTo::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::net::MailTo::MAILTO_SCHEME;


J2CPP_DEFINE_CLASS(android::net::MailTo,"android/net/MailTo")
J2CPP_DEFINE_METHOD(android::net::MailTo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::MailTo,1,"isMailTo","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::net::MailTo,2,"parse","(Ljava/lang/String;)Landroid/net/MailTo;")
J2CPP_DEFINE_METHOD(android::net::MailTo,3,"getTo","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::MailTo,4,"getCc","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::MailTo,5,"getSubject","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::MailTo,6,"getBody","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::MailTo,7,"getHeaders","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(android::net::MailTo,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::MailTo,0,"MAILTO_SCHEME","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_MAILTO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
