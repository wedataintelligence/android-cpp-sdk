/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.auth.NTLMScheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMSCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMSCHEME_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace auth { class AuthSchemeBase; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace auth { class NTLMEngine; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/auth/Credentials.hpp>
#include <org/apache/http/impl/auth/AuthSchemeBase.hpp>
#include <org/apache/http/impl/auth/NTLMEngine.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class NTLMScheme;
	class NTLMScheme
		: public object<NTLMScheme>
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

		explicit NTLMScheme(jobject jobj)
		: object<NTLMScheme>(jobj)
		{
		}

		operator local_ref<org::apache::http::auth::AuthScheme>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::auth::AuthSchemeBase>() const;


		NTLMScheme(local_ref< org::apache::http::impl::auth::NTLMEngine > const&);
		local_ref< java::lang::String > getSchemeName();
		local_ref< java::lang::String > getParameter(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getRealm();
		jboolean isConnectionBased();
		local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials >  const&, local_ref< org::apache::http::HttpRequest >  const&);
		jboolean isComplete();
	}; //class NTLMScheme

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMSCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMSCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMSCHEME_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::auth::NTLMScheme::operator local_ref<org::apache::http::auth::AuthScheme>() const
{
	return local_ref<org::apache::http::auth::AuthScheme>(get_jobject());
}

org::apache::http::impl::auth::NTLMScheme::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::auth::NTLMScheme::operator local_ref<org::apache::http::impl::auth::AuthSchemeBase>() const
{
	return local_ref<org::apache::http::impl::auth::AuthSchemeBase>(get_jobject());
}


org::apache::http::impl::auth::NTLMScheme::NTLMScheme(local_ref< org::apache::http::impl::auth::NTLMEngine > const &a0)
: object<org::apache::http::impl::auth::NTLMScheme>(
	call_new_object<
		org::apache::http::impl::auth::NTLMScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::String > org::apache::http::impl::auth::NTLMScheme::getSchemeName()
{
	return call_method<
		org::apache::http::impl::auth::NTLMScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::impl::auth::NTLMScheme::getParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::auth::NTLMScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::impl::auth::NTLMScheme::getRealm()
{
	return call_method<
		org::apache::http::impl::auth::NTLMScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean org::apache::http::impl::auth::NTLMScheme::isConnectionBased()
{
	return call_method<
		org::apache::http::impl::auth::NTLMScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}


local_ref< org::apache::http::Header > org::apache::http::impl::auth::NTLMScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return call_method<
		org::apache::http::impl::auth::NTLMScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::Header >
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::impl::auth::NTLMScheme::isComplete()
{
	return call_method<
		org::apache::http::impl::auth::NTLMScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::auth::NTLMScheme::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::NTLMScheme,"org/apache/http/impl/auth/NTLMScheme")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,0,"<init>","(Lorg/apache/http/impl/auth/NTLMEngine;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,1,"getSchemeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,2,"getParameter","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,3,"getRealm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,4,"isConnectionBased","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,5,"parseChallenge","(Lorg/apache/http/util/CharArrayBuffer;II)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,6,"authenticate","(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMScheme,7,"isComplete","()Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMSCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
