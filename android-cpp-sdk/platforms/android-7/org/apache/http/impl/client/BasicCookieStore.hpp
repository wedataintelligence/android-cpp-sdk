/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.client.BasicCookieStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class CookieStore; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/client/CookieStore.hpp>
#include <org/apache/http/cookie/Cookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class BasicCookieStore;
	class BasicCookieStore
		: public cpp_object<BasicCookieStore>
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

		explicit BasicCookieStore(jobject jobj)
		: cpp_object<BasicCookieStore>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::CookieStore>() const;


		BasicCookieStore();
		void addCookie(local_ref< org::apache::http::cookie::Cookie > const&);
		void addCookies(local_ref< cpp_object_array<org::apache::http::cookie::Cookie, 1> > const&);
		local_ref< java::util::List > getCookies();
		cpp_boolean clearExpired(local_ref< java::util::Date > const&);
		local_ref< java::lang::String > toString();
		void clear();
	}; //class BasicCookieStore

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::BasicCookieStore::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::impl::client::BasicCookieStore::operator local_ref<org::apache::http::client::CookieStore>() const
{
	return local_ref<org::apache::http::client::CookieStore>(get_jtype());
}


org::apache::http::impl::client::BasicCookieStore::BasicCookieStore()
: cpp_object<org::apache::http::impl::client::BasicCookieStore>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME, org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(0), org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void org::apache::http::impl::client::BasicCookieStore::addCookie(local_ref< org::apache::http::cookie::Cookie > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::client::BasicCookieStore::addCookies(local_ref< cpp_object_array<org::apache::http::cookie::Cookie, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > org::apache::http::impl::client::BasicCookieStore::getCookies()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::http::impl::client::BasicCookieStore::clearExpired(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::client::BasicCookieStore::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::apache::http::impl::client::BasicCookieStore::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::BasicCookieStore,"org/apache/http/impl/client/BasicCookieStore")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,1,"addCookie","(Lorg/apache/http/cookie/Cookie;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,2,"addCookies","([org.apache.http.cookie.Cookie)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,3,"getCookies","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,4,"clearExpired","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,6,"clear","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION